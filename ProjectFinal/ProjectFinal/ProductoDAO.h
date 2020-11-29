class ProductoDAO
{
public:
	ProductoDAO();
	~ProductoDAO();

	char* StringToChar(String ^m);

	vector<Producto> consultar();

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


vector<Producto> ProductoDAO::consultar() {
	vector<Producto> lista;
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

			m = dr["nombre"]->ToString();
			pro.setDescripcion(StringToChar(m));

			m = dr["linea"]->ToString();
			pro.setLinea(StringToChar(m));

			m = dr["precio_compra"]->ToString();
			pro.setPrecioCompra(Convert::ToDouble(m));

			m = dr["precio_venta"]->ToString();
			pro.setPrecioVenta(Convert::ToDouble(m));

			m = dr["cantidad"]->ToString();
			pro.setCantidad(Convert::ToInt32(m));

			m = dr["codigo_proveedor"]->ToString();
			pro.setCodigoProveedor(StringToChar(m));

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
			"INSERT INTO productos values(@codigo, @nombre, @linea, @precio_compra,"
			+ "@precio_venta,@cantidad,@codigo_proveedor)";

		command->Parameters->AddWithValue("@codigo", gcnew String(obj.getCodigo()));
		command->Parameters->AddWithValue("@nombre", gcnew String(obj.getDescripcion()));
		command->Parameters->AddWithValue("@linea", gcnew String(obj.getLinea()));
		command->Parameters->AddWithValue("@precio_compra", obj.getPrecioCompra());
		command->Parameters->AddWithValue("@precio_venta", obj.getPrecioVenta());
		command->Parameters->AddWithValue("@cantidad", obj.getCantidad());
		command->Parameters->AddWithValue("@codigo_proveedor", gcnew String(obj.getCodigoProveedor()));
		//Ejecutar la consulta
		command->ExecuteNonQuery();
		MessageBox::Show("Registrado");
		cn->Close();
	}
	//Excepción personalizada -> Error de Llave única
	catch (SqlException ^exs) {
		cout << StringToChar(exs->Message) << endl;
		MessageBox::Show(exs->Message);
	}
	/*catch (Exception ^exs) {
		MessageBox::Show(exs->Message);
	}*/
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
			"UPDATE productos set nombre = @nombre, linea = @linea,"
			+ "precio_compra = @precio_compra, precio_venta = @precio_venta,"
			+ "cantidad = @cantidad, codigo_proveedor= @codigo_proveedor "
			+ "where codigo = @codigo";

		command->Parameters->AddWithValue("@codigo", gcnew String(obj.getCodigo()));
		command->Parameters->AddWithValue("@nombre", gcnew String(obj.getDescripcion()));
		command->Parameters->AddWithValue("@linea", gcnew String(obj.getLinea()));
		command->Parameters->AddWithValue("@precio_compra", obj.getPrecioCompra());
		command->Parameters->AddWithValue("@precio_venta", obj.getPrecioVenta());
		command->Parameters->AddWithValue("@cantidad", obj.getCantidad());
		command->Parameters->AddWithValue("@codigo_proveedor", gcnew String(obj.getCodigo()));
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

vector<Producto> listaProductos;
ProductoDAO daoProducto;