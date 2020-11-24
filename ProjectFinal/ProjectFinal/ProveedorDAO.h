class ProveedorDAO
{
public:
	ProveedorDAO();
	~ProveedorDAO();
	
	char* StringToChar(String ^m);

	vector<Proveedor> consultar();

	void operator +=(Proveedor obj);

	void operator *=(Proveedor obj);

	void operator -=(Proveedor obj);

	void proveedorProcesar(Proveedor obj, int opcion);

private:

};

ProveedorDAO::ProveedorDAO()
{
}

ProveedorDAO::~ProveedorDAO()
{
}

char * ProveedorDAO::StringToChar(String ^ m)
{
	String^ aux = m;
	IntPtr ptr = Marshal::StringToHGlobalAnsi(aux);
	char* aux2 = static_cast<char*>(ptr.ToPointer());
	return aux2;
}

vector<Proveedor> ProveedorDAO::consultar()
{
	vector<Proveedor> lista;
	SqlConnection ^cn = Conexion::getConnection();
	try {
		SqlCommand ^command = gcnew SqlCommand("select * from proveedores", cn);
		cn->Open();
		SqlDataReader ^dr = command->ExecuteReader();

		while (dr->Read() == true) {

			String ^m;
			Proveedor usu;

			m = dr["codigo"]->ToString();
			usu.setCodigo(StringToChar(m));

			m = dr["nombre_contacto"]->ToString();
			usu.setNombreContacto(StringToChar(m));

			m = dr["categoria"]->ToString();
			usu.setcategoria(StringToChar(m));

			m = dr["empresa"]->ToString();
			usu.setempresa(StringToChar(m));

			m = dr["direccion"]->ToString();
			usu.setdireccion(StringToChar(m));

			m = dr["telefono"]->ToString();
			usu.settelefono(StringToChar(m));

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

void ProveedorDAO::operator+=(Proveedor obj)
{
	try {
		SqlConnection ^cn = Conexion::getConnection();
		cn->Open();
		SqlCommand ^command = gcnew SqlCommand();
		command->Connection = cn;
		// Crear la consulta sql
		command->CommandText =
			"INSERT INTO proveedores values(@codigo, @nombre_contacto,@categoria,"
			+ "@empresa,@direccion,@telefono)";

		command->Parameters->AddWithValue("@codigo", gcnew String(obj.getCodigo()));
		command->Parameters->AddWithValue("@nombre_contacto", gcnew String(obj.getNombreContacto()));
		command->Parameters->AddWithValue("@categoria", gcnew String(obj.getCategoria()));
		command->Parameters->AddWithValue("@empresa", gcnew String(obj.getEmpresa()));
		command->Parameters->AddWithValue("@direccion", gcnew String(obj.getDireccion()));
		command->Parameters->AddWithValue("@telefono", gcnew String(obj.getTelefono()));
		
		//Ejecutar la consulta
		command->ExecuteNonQuery();
		MessageBox::Show("Registrado");
		cn->Close();
	}
	catch (Exception ^exs) {
		MessageBox::Show(exs->Message);
	}
}

void ProveedorDAO::operator*=(Proveedor obj)
{
	try {
		SqlConnection ^cn = Conexion::getConnection();
		cn->Open();
		SqlCommand ^command = gcnew SqlCommand();
		command->Connection = cn;
		// Crear la consulta sql
		command->CommandText =
			"UPDATE proveedores set nombre_contacto = @nombre_contacto,"
			+ "categoria = @categoria, empresa = @empresa, direccion = @direccion,"
			+ "telefono = @telefono "
			+ "where codigo= @codigo";

		command->Parameters->AddWithValue("@codigo", gcnew String(obj.getCodigo()));
		command->Parameters->AddWithValue("@nombre_contacto", gcnew String(obj.getNombreContacto()));
		command->Parameters->AddWithValue("@categoria", gcnew String(obj.getCategoria()));
		command->Parameters->AddWithValue("@empresa", gcnew String(obj.getEmpresa()));
		command->Parameters->AddWithValue("@direccion", gcnew String(obj.getDireccion()));
		command->Parameters->AddWithValue("@telefono", gcnew String(obj.getTelefono()));
		
		//Ejecutar la consulta
		command->ExecuteNonQuery();
		MessageBox::Show("Actualizado");
		cn->Close();
	}
	catch (Exception ^exs) {
		MessageBox::Show(exs->Message);
	}
}

void ProveedorDAO::operator-=(Proveedor obj)
{
	try {
		SqlConnection ^cn = Conexion::getConnection();
		cn->Open();
		SqlCommand ^command = gcnew SqlCommand();
		command->Connection = cn;
		// Crear la consulta sql
		command->CommandText =
			"delete from proveedores where codigo = @codigo";
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

void ProveedorDAO::proveedorProcesar(Proveedor obj, int opcion)
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


vector<Proveedor> listaProveedores;
ProveedorDAO daoProveedor;