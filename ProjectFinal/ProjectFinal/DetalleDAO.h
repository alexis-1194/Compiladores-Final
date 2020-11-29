class DetalleDAO
{
public:
	DetalleDAO();
	~DetalleDAO();

	vector<Detalle> consultar(char* codigoVenta);

	void operator +=(Detalle obj);//INSERTAR

	void procesarDetalle(Detalle obj, int opcion);

private:

};

DetalleDAO::DetalleDAO()
{
}

DetalleDAO::~DetalleDAO()
{
}


vector<Detalle> DetalleDAO::consultar(char* codigoVenta) {
	vector<Detalle> lista;
	SqlConnection ^cn = Conexion::getConnection();
	try {
		SqlCommand ^command = gcnew SqlCommand("select * "
			+" from detalles where codigo_venta = @cod", cn);
		cn->Open();

		command->Parameters->AddWithValue("@cod", gcnew String(codigoVenta));
		SqlDataReader ^dr = command->ExecuteReader();

		while (dr->Read() == true) {

			String ^m;
			Detalle usu;

			

			m = dr["codigo_producto"]->ToString();
			usu.setCodigo(Global::StringToChar(m));

			m = dr["nombre_producto"]->ToString();
			usu.setDescripcion(Global::StringToChar(m));

			m = dr["precio_producto"]->ToString();
			usu.setPrecio(Convert::ToDouble(m));

			m = dr["cantidad_producto"]->ToString();
			usu.setCantidad(Convert::ToInt32(m));

			m = dr["importe_producto"]->ToString();
			usu.setSubTotal(Convert::ToDouble(m));

			m = dr["codigo_venta"]->ToString();
			usu.setCodigoVenta(Global::StringToChar(m));

			lista.push_back(usu);
		}
		dr->Close();
	}
	catch (SqlException ^exs) {
		MessageBox::Show(exs->Message);
	}
	cn->Close();

	return lista;
}

void DetalleDAO::operator +=(Detalle obj) {
	try {
		SqlConnection ^cn = Conexion::getConnection();
		cn->Open();
		SqlCommand ^command = gcnew SqlCommand();
		command->Connection = cn;
		// Crear la consulta sql
		command->CommandText =
			"INSERT INTO detalles values(@codigo_producto,@nombre_producto,@precio_producto,"
			+ "@cantidad_producto,@importe_producto,@codigo_venta)";

		command->Parameters->AddWithValue("@codigo_producto", gcnew String(obj.getCodigo()));
		command->Parameters->AddWithValue("@nombre_producto", gcnew String(obj.getDescripcion()));
		command->Parameters->AddWithValue("@precio_producto", obj.getPrecio());
		command->Parameters->AddWithValue("@cantidad_producto", obj.getCantidad());
		command->Parameters->AddWithValue("@importe_producto", obj.getSubTotal());
		command->Parameters->AddWithValue("@codigo_venta", gcnew String(obj.getCodigoVenta()));
		//Ejecutar la consulta
		command->ExecuteNonQuery();
		//MessageBox::Show("Registrado");
		cn->Close();
	}
	catch (SqlException ^exs) {
		cout << Global::StringToChar(exs->Message) << endl;
		MessageBox::Show(exs->Message);
		//MessageBox::Show("Clave o código ya existe");
	}
}

void DetalleDAO::procesarDetalle(Detalle obj, int opcion) {
	switch (opcion)
	{
	case Constante::INS:
		this->operator+=(obj);
		break;
	default:
		break;
	}
}

vector<Detalle> listaDetalles;
DetalleDAO daoDetalle;
char *codDetalle;