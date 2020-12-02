class ClienteDAO
{
public:
	ClienteDAO();
	~ClienteDAO();

	char* StringToChar(String ^m);

	vector<Cliente> consultar();//select

	void operator +=(Cliente obj);//insert

	void operator *=(Cliente obj);//update

	void operator -=(Cliente obj);//delete

	void clienteProcesar(Cliente obj, int opcion);

private:

};

ClienteDAO::ClienteDAO()
{
}

ClienteDAO::~ClienteDAO()
{
}

char * ClienteDAO::StringToChar(String ^ m)
{
	String^ aux = m;
	IntPtr ptr = Marshal::StringToHGlobalAnsi(aux);
	char* aux2 = static_cast<char*>(ptr.ToPointer());
	return aux2;
}

vector<Cliente> ClienteDAO::consultar()
{
	vector<Cliente> lista;
	SqlConnection ^cn = Conexion::getConnection();//
	try {
		SqlCommand ^command = gcnew SqlCommand("select * from clientes", cn);
		cn->Open();//abro la conexion
		SqlDataReader ^dr = command->ExecuteReader();

		while (dr->Read() == true) {

			String ^m;
			Cliente usu;

			m = dr["codigo"]->ToString();
			usu.setCodigo(StringToChar(m));

			m = dr["dni"]->ToString();
			usu.setDni(StringToChar(m));

			m = dr["nombre"]->ToString();
			usu.setNombre(StringToChar(m));

			m = dr["apellidos"]->ToString();
			usu.setApellidos(StringToChar(m));

			m = dr["telefono"]->ToString();
			usu.setTelefono(StringToChar(m));

			m = dr["email"]->ToString();
			usu.setEmail(StringToChar(m));

			m = dr["genero"]->ToString();
			usu.setGenero(StringToChar(m));

			m = dr["fechaNac"]->ToString();
			usu.setFecha(StringToChar(m));

			lista.push_back(usu);
		}
		dr->Close();
	}
	catch (SqlException ^exs) {
		MessageBox::Show(exs->Message);
	}
	cn->Close();//

	return lista;
}

void ClienteDAO::operator+=(Cliente obj)
{
	try {
		SqlConnection ^cn = Conexion::getConnection();
		cn->Open();
		SqlCommand ^command = gcnew SqlCommand();
		command->Connection = cn;
		// Crear la consulta sql
		command->CommandText =
			"INSERT INTO clientes values(@codigo, @dni,@nombre,"
			+ "@apellidos,@telefono,@email,@genero,@fechaNac)";

		command->Parameters->AddWithValue("@codigo", gcnew String(obj.getCodigo()));
		command->Parameters->AddWithValue("@dni", gcnew String(obj.getDni()));
		command->Parameters->AddWithValue("@nombre", gcnew String(obj.getNombre()));
		command->Parameters->AddWithValue("@apellidos", gcnew String(obj.getApellidos()));
		command->Parameters->AddWithValue("@telefono", gcnew String(obj.getTelefono()));
		command->Parameters->AddWithValue("@email", gcnew String(obj.getEmail()));
		command->Parameters->AddWithValue("@genero", gcnew String(obj.getGenero()));
		command->Parameters->AddWithValue("@fechaNac", gcnew String(obj.getFecha()));

		//Ejecutar la consulta
		command->ExecuteNonQuery();
		MessageBox::Show("Registrado");
		cn->Close();
	}
	catch (SqlException ^exs) {
		//cout << StringToChar(exs->Message) << endl;
		MessageBox::Show(exs->Message);
	}
	
}

void ClienteDAO::operator*=(Cliente obj)//actualizar
{
	try {
		SqlConnection ^cn = Conexion::getConnection();
		cn->Open();
		SqlCommand ^command = gcnew SqlCommand();
		command->Connection = cn;
		// Crear la consulta sql
		command->CommandText =
			"UPDATE clientes set dni = @dni,"
			+ "nombre = @nombre, apellidos = @apellidos, telefono = @telefono,"
			+ "email = @email, genero = @genero, fechaNac = @fechaNac "
			+ "where codigo= @codigo";

		command->Parameters->AddWithValue("@codigo", gcnew String(obj.getCodigo()));
		command->Parameters->AddWithValue("@dni", gcnew String(obj.getDni()));
		command->Parameters->AddWithValue("@nombre", gcnew String(obj.getNombre()));
		command->Parameters->AddWithValue("@apellidos", gcnew String(obj.getApellidos()));
		command->Parameters->AddWithValue("@telefono", gcnew String(obj.getTelefono()));
		command->Parameters->AddWithValue("@email", gcnew String(obj.getEmail()));
		command->Parameters->AddWithValue("@genero", gcnew String(obj.getGenero()));
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

void ClienteDAO::operator-=(Cliente obj)//eliminar
{
	try {
		SqlConnection ^cn = Conexion::getConnection();
		cn->Open();
		SqlCommand ^command = gcnew SqlCommand();
		command->Connection = cn;
		// Crear la consulta sql
		command->CommandText =
			"delete from clientes where codigo = @codigo";
		command->Parameters->AddWithValue("@codigo", gcnew String(obj.getCodigo()));
		//Ejecutar la consulta
		command->ExecuteNonQuery();
		MessageBox::Show("Eliminado");
		cn->Close();
	}
	catch (Exception ^exs) {
		MessageBox::Show(exs->Message);
	}
}

void ClienteDAO::clienteProcesar(Cliente obj, int opcion)
{
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

vector<Cliente> listaClientes;
ClienteDAO daoCliente;