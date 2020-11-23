class ProductoDAO
{
public:
	ProductoDAO();
	~ProductoDAO();

	char* StringToChar(String ^m);

	list<Producto> consultar();

	void operator +=(Producto obj);//INSERTAR

	void operator *=(Producto obj);//ACTUALZAR

	void operator -=(Producto obj);//ELIMINAR

	void productoProcesar(Producto obj, int opcion);

private:

};

ProductoDAO::ProductoDAO()
{
}

ProductoDAO::~ProductoDAO()
{
}

char * ProductoDAO::StringToChar(String ^ m)
{
	String^ aux = m;
	IntPtr ptr = Marshal::StringToHGlobalAnsi(aux);
	char* aux2 = static_cast<char*>(ptr.ToPointer());
	return aux2;
}


list<Producto> ProductoDAO::consultar() {
	list<Producto> lista;
	SqlConnection ^cn = Conexion::getConnection();

	SqlCommand ^command = gcnew SqlCommand("SELECT * FROM productos", cn);

	try {
		cn->Open();
		SqlDataReader ^dr = command->ExecuteReader();
		while (dr->Read() == true) {

			String ^m;
			Producto pro;
			m = dr["codigo"]->ToString();
			pro.setCodigo(StringToChar(m));

			m = dr["descripcion"]->ToString();
			pro.setDescripcion(StringToChar(m));

			m = dr["cantidad"]->ToString();
			pro.setCantidad(Convert::ToInt32(m));

			m = dr["precio"]->ToString();
			pro.setPrecio(Convert::ToDouble(m));

			lista.push_back(pro);
		}
		dr->Close();
	}
	catch (Exception ^exs) {
		MessageBox::Show(exs->Message);
	}
	cn->Close();

	return lista;
}

void ProductoDAO::operator+=(Producto obj)
{
	try {
		SqlConnection ^cn = Conexion::getConnection();
		cn->Open();
		SqlCommand ^command = gcnew SqlCommand();
		command->Connection = cn;
		// Crear la consulta sql
		command->CommandText =
			"INSERT INTO productos values(@codigo, @desc, @cantidad, @precio)";
		command->Parameters->AddWithValue("@codigo", gcnew String(obj.getCodigo()));
		command->Parameters->AddWithValue("@desc", gcnew String(obj.getDescripcion()));
		command->Parameters->AddWithValue("@cantidad", obj.getCantidad());
		command->Parameters->AddWithValue("@precio", obj.getPrecio());
		//Ejecutar la consulta
		command->ExecuteNonQuery();
		MessageBox::Show("Registrado");
		cn->Close();
	}
	catch (Exception ^exs) {
		MessageBox::Show(exs->Message);
	}
}
void ProductoDAO::operator*=(Producto obj)
{
	try {
		SqlConnection ^cn = Conexion::getConnection();
		cn->Open();
		SqlCommand ^command = gcnew SqlCommand();
		command->Connection = cn;
		// Crear la consulta sql
		command->CommandText =
			"UPDATE productos set descripcion = @desc, cantidad = @cantidad, precio = @precio" +
			"where codigo = @codigo";
		command->Parameters->AddWithValue("@desc", gcnew String(obj.getDescripcion()));
		command->Parameters->AddWithValue("@cantidad", obj.getCantidad());
		command->Parameters->AddWithValue("@precio", obj.getPrecio());
		//Ejecutar la consulta
		command->ExecuteNonQuery();
		MessageBox::Show("Actualizado");
		cn->Close();
	}
	catch (Exception ^exs) {
		MessageBox::Show(exs->Message);
	}
}

void ProductoDAO::operator-=(Producto obj)
{
	try {
		SqlConnection ^cn = Conexion::getConnection();
		cn->Open();
		SqlCommand ^command = gcnew SqlCommand();
		command->Connection = cn;
		// Crear la consulta sql
		command->CommandText =
			"delete from productos where codigo = @codigo";
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

void ProductoDAO::productoProcesar(Producto obj, int opcion)
{
	switch (opcion)
	{
	case Constante::INS:
		this->operator+=(obj);
		break;
	case Constante::UPD:
		this->operator*=(obj);
		break;
	case Constante::DEL:
		this->operator-=(obj);
		break;
	default:
		break;
	}
}

ProductoDAO dao;