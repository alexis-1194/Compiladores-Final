class UsuarioDAO
{
public:
	UsuarioDAO();
	~UsuarioDAO();
	//CRUD
	char* StringToChar(String ^m);

	vector<Usuario> consultar();

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

vector<Usuario> UsuarioDAO::consultar() {
	vector<Usuario> lista;
	SqlConnection ^cn = Conexion::getConnection();
	try {
		SqlCommand ^command = gcnew SqlCommand("select * from empleados", cn);
		cn->Open();
		SqlDataReader ^dr = command->ExecuteReader();

		while (dr->Read() == true) {

			String ^m;
			Usuario usu;

			m = dr["codigo"]->ToString();
			usu.setCodigo(StringToChar(m));

			m = dr["dni"]->ToString();
			usu.setDni(StringToChar(m));

			m = dr["username"]->ToString();
			usu.setUserName(StringToChar(m));

			m = dr["pass"]->ToString();
			usu.setPassWord(StringToChar(m));

			m = dr["nombre"]->ToString();
			usu.setNombre(StringToChar(m));

			m = dr["apellidos"]->ToString();
			usu.setApellidos(StringToChar(m));

			m = dr["telefono"]->ToString();
			usu.setTelefono(StringToChar(m));

			m = dr["email"]->ToString();
			usu.setEmail(StringToChar(m));

			m = dr["fechaNac"]->ToString();
			usu.setFecha(StringToChar(m));

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
			"INSERT INTO empleados values(@codigo, @dni,@username,@pass,@nombre,"
			+ "@apellidos,@telefono,@email,@fechaNac)";

		command->Parameters->AddWithValue("@codigo", gcnew String(obj.getCodigo()));
		command->Parameters->AddWithValue("@dni", gcnew String(obj.getDni()));
		command->Parameters->AddWithValue("@username", gcnew String(obj.getUserName()));
		command->Parameters->AddWithValue("@pass", gcnew String(obj.getPassWord()));
		command->Parameters->AddWithValue("@nombre", gcnew String(obj.getNombre()));
		command->Parameters->AddWithValue("@apellidos", gcnew String(obj.getApellidos()));
		command->Parameters->AddWithValue("@telefono", gcnew String(obj.getTelefono()));
		command->Parameters->AddWithValue("@email", gcnew String(obj.getEmail()));
		command->Parameters->AddWithValue("@fechaNac", gcnew String(obj.getFecha()));
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
			"UPDATE empleados set dni = @dni, username = @username, pass = @pass,"
			+ "nombre = @nombre, apellidos = @apellidos, telefono = @telefono,"
			+ "email = @email, fechaNac = @fechaNac "
			+ "where  codigo= @codigo";

		command->Parameters->AddWithValue("@codigo", gcnew String(obj.getCodigo()));
		command->Parameters->AddWithValue("@dni", gcnew String(obj.getDni()));
		command->Parameters->AddWithValue("@username", gcnew String(obj.getUserName()));
		command->Parameters->AddWithValue("@pass", gcnew String(obj.getPassWord()));
		command->Parameters->AddWithValue("@nombre", gcnew String(obj.getNombre()));
		command->Parameters->AddWithValue("@apellidos", gcnew String(obj.getApellidos()));
		command->Parameters->AddWithValue("@telefono", gcnew String(obj.getTelefono()));
		command->Parameters->AddWithValue("@email", gcnew String(obj.getEmail()));
		command->Parameters->AddWithValue("@fechaNac", gcnew String(obj.getFecha()));

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
			"delete from empleados where codigo = @codigo";
		command->Parameters->AddWithValue("@codigo", gcnew String(obj.getUserName()));
		//Ejecutar la consulta
		command->ExecuteNonQuery();
		MessageBox::Show("Eliminado");
		cn->Close();
	}
	catch (Exception ^exs) {
		MessageBox::Show(exs->Message);
	}
}

void UsuarioDAO::usuarioProcesar(Usuario obj, int opcion) {
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

vector<Usuario> listaUsuarios;
UsuarioDAO daoUsuario;