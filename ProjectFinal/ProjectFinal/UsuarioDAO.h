class UsuarioDAO
{
public:
	UsuarioDAO();
	~UsuarioDAO();
	//CRUD
	char* StringToChar(String ^m);

	list<Usuario> consultar();

	void operator +=(Usuario obj);//INSERTAR

	void operator *=(Usuario obj);//ACTUALIZAR

	void operator -=(Usuario obj);//ELIMINAR

	void usuarioProcesar(Usuario obj, int opcion);

private:

};

UsuarioDAO::UsuarioDAO()
{
}

UsuarioDAO::~UsuarioDAO()
{
}

char* UsuarioDAO::StringToChar(String ^m) {
	String^ aux = m;
	IntPtr ptr = Marshal::StringToHGlobalAnsi(aux);
	char* aux2 = static_cast<char*>(ptr.ToPointer());
	return aux2;
}

list<Usuario> UsuarioDAO::consultar() {
	list<Usuario> lista;
	SqlConnection ^cn = Conexion::getConnection();
	try {
		SqlCommand ^command = gcnew SqlCommand("SELECT * FROM usuarios", cn);

		cn->Open();
		SqlDataReader ^dr = command->ExecuteReader();
		while (dr->Read() == true) {
			String ^m;
			Usuario usu;

			m = dr["username"]->ToString();
			usu.setUserName(StringToChar(m));

			m = dr["pass"]->ToString();
			usu.setPassWord(StringToChar(m));

			lista.push_back(usu);
		}
		dr->Close();
	}
	catch (Exception ^exs) {
		MessageBox::Show(exs->Message);
	}
	cn->Close();

	return lista;
}

void UsuarioDAO::operator +=(Usuario obj) {//REGISTRAR
	try {
		SqlConnection ^cn = Conexion::getConnection();
		cn->Open();
		SqlCommand ^command = gcnew SqlCommand();
		command->Connection = cn;
		// Crear la consulta sql
		command->CommandText =
			"INSERT INTO usuarios values(@nomb, @pass)";
		command->Parameters->AddWithValue("@nomb", gcnew String(obj.getUserName()));
		command->Parameters->AddWithValue("@pass", gcnew String(obj.getPassword()));
		//Ejecutar la consulta
		command->ExecuteNonQuery();
		MessageBox::Show("Registrado");
		cn->Close();
	}
	catch (Exception ^exs) {
		MessageBox::Show(exs->Message);
	}
}

void UsuarioDAO::operator *=(Usuario obj) {//actualizar
	try {
		SqlConnection ^cn = Conexion::getConnection();
		cn->Open();
		SqlCommand ^command = gcnew SqlCommand();
		command->Connection = cn;
		// Crear la consulta sql
		command->CommandText =
			"UPDATE usuarios set pass = @pass where username = @nomb";
		command->Parameters->AddWithValue("@nomb", gcnew String(obj.getUserName()));
		command->Parameters->AddWithValue("@pass", gcnew String(obj.getPassword()));
		//Ejecutar la consulta
		command->ExecuteNonQuery();
		MessageBox::Show("Actualizado");
		cn->Close();
	}
	catch (Exception ^exs) {
		MessageBox::Show(exs->Message);
	}
}

void UsuarioDAO::operator -=(Usuario obj) {//eliminar
	try {
		SqlConnection ^cn = Conexion::getConnection();
		cn->Open();
		SqlCommand ^command = gcnew SqlCommand();
		command->Connection = cn;
		// Crear la consulta sql
		command->CommandText =
			"delete from usuarios where username = @nomb";
		command->Parameters->AddWithValue("@nomb", gcnew String(obj.getUserName()));
		//Ejecutar la consulta
		command->ExecuteNonQuery();
		MessageBox::Show("Eliminado");
		cn->Close();
	}
	catch (Exception ^exs) {
		MessageBox::Show(exs->Message);
	}
}

void UsuarioDAO::usuarioProcesar(Usuario obj,int opcion) {
	switch (opcion)
	{
	case Constante::INS:
		this->operator+=(obj);//registrar
		break;
	case Constante::UPD:
		this->operator*=(obj);//actualizar
		break;
	case Constante::DEL:
		this->operator-=(obj);//eliminar
		break;
	default:
		break;
	}
}