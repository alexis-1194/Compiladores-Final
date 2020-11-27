class VentaDAO
{
public:
	VentaDAO();
	~VentaDAO();

	char* StringToChar(String ^m);

	vector<Venta> consultar();

	vector<Venta> consultarPorFecha(DateTime fecha);

	void operator +=(Venta obj);//INSERTAR

	void operator *=(Venta obj);//ACTUALIZAR

	void operator -=(Venta obj);//ELIMINAR

	void ventaProcesar(Venta obj, int opcion);

private:

};

VentaDAO::VentaDAO()
{
}

VentaDAO::~VentaDAO()
{
}

char * VentaDAO::StringToChar(String ^ m)
{
	String^ aux = m;
	IntPtr ptr = Marshal::StringToHGlobalAnsi(aux);
	char* aux2 = static_cast<char*>(ptr.ToPointer());
	return aux2;
}

vector<Venta> VentaDAO::consultar()
{
	vector<Venta> lista;
	SqlConnection ^cn = Conexion::getConnection();
	try {
		SqlCommand ^command = gcnew SqlCommand("select * from ventas", cn);
		cn->Open();
		SqlDataReader ^dr = command->ExecuteReader();

		while (dr->Read() == true) {

			String ^m;
			Venta usu;

			m = dr["codigo"]->ToString();
			usu.setCodigo(StringToChar(m));

			m = dr["codigo_cliente"]->ToString();
			usu.setCliente(StringToChar(m));

			m = dr["codigo_empleado"]->ToString();
			usu.setEmpleado(StringToChar(m));

			m = dr["tipo_comprobante"]->ToString();
			usu.setTipoComprobante(StringToChar(m));

			m = dr["codigo_comprobante"]->ToString();
			usu.setCodigoComprobante(StringToChar(m));

			m = dr["sub_total"]->ToString();
			usu.setSubTotal(Convert::ToDouble(m));

			m = dr["igv"]->ToString();
			usu.setIgv(Convert::ToDouble(m));

			m = dr["total"]->ToString();
			usu.setTotal(Convert::ToDouble(m));

			m = dr["fecha"]->ToString();
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

vector<Venta> VentaDAO::consultarPorFecha(DateTime fecha) {
	vector<Venta> lista;
	SqlConnection ^cn = Conexion::getConnection();
	try {
		SqlCommand ^command = gcnew SqlCommand("select * from ventas where fecha = @fecha", cn);
		cn->Open();
		SqlDataReader ^dr = command->ExecuteReader();

		while (dr->Read() == true) {

			String ^m;
			Venta usu;

			command->Parameters->AddWithValue("@fecha", fecha);

			m = dr["codigo"]->ToString();
			usu.setCodigo(StringToChar(m));

			m = dr["codigo_cliente"]->ToString();
			usu.setCliente(StringToChar(m));

			m = dr["codigo_empleado"]->ToString();
			usu.setEmpleado(StringToChar(m));

			m = dr["tipo_comprobante"]->ToString();
			usu.setTipoComprobante(StringToChar(m));

			m = dr["codigo_comprobante"]->ToString();
			usu.setCodigoComprobante(StringToChar(m));

			m = dr["sub_total"]->ToString();
			usu.setSubTotal(Convert::ToDouble(m));

			m = dr["igv"]->ToString();
			usu.setIgv(Convert::ToDouble(m));

			m = dr["total"]->ToString();
			usu.setTotal(Convert::ToDouble(m));

			m = dr["fecha"]->ToString();
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

void VentaDAO::operator+=(Venta obj)
{

	try {
		SqlConnection ^cn = Conexion::getConnection();
		cn->Open();
		SqlCommand ^command = gcnew SqlCommand();
		command->Connection = cn;
		// Crear la consulta sql
		command->CommandText =
			"INSERT INTO ventas values(@codigo,@codigo_cliente,@codigo_empleado,"
			+ "@tipo_comprobante,@codigo_comprobante,@sub_total,@igv,@total,@fecha)";

		command->Parameters->AddWithValue("@codigo", gcnew String(obj.getCodigo()));
		command->Parameters->AddWithValue("@codigo_cliente", gcnew String(obj.getCliente()));
		command->Parameters->AddWithValue("@codigo_empleado", gcnew String(obj.getEmpleado()));
		command->Parameters->AddWithValue("@tipo_comprobante", gcnew String(obj.getTipoComprobante()));
		command->Parameters->AddWithValue("@codigo_comprobante", gcnew String(obj.getCodigoComprobante()));
		command->Parameters->AddWithValue("@sub_total", obj.getSubTotal());
		command->Parameters->AddWithValue("@igv", obj.getIgv());
		command->Parameters->AddWithValue("@total", obj.getTotal());
		command->Parameters->AddWithValue("@fecha", gcnew String(obj.getFecha()));
		//Ejecutar la consulta
		command->ExecuteNonQuery();
		MessageBox::Show("Registrado");
		cn->Close();
	}
	catch (SqlException ^exs) {
		cout << StringToChar(exs->Message) << endl;
		MessageBox::Show(exs->Message);
		//MessageBox::Show("Clave o código ya existe");
	}
	/*catch (Exception ^exs) {

	}*/
}

void VentaDAO::operator*=(Venta obj)
{
	try {
		SqlConnection ^cn = Conexion::getConnection();
		cn->Open();
		SqlCommand ^command = gcnew SqlCommand();
		command->Connection = cn;
		// Crear la consulta sql
		command->CommandText =
			"UPDATE ventas set codigo_cliente = @codigo_cliente, codigo_empleado= @codigo_empleado,"
			+ "tipo_comprobante = @tipo_comprobante, codigo_comprobante = @codigo_comprobante,"
			+ "sub_total = @sub_total, igv = @igv, total = @total "
			+ "where codigo= @codigo";

		command->Parameters->AddWithValue("@codigo", gcnew String(obj.getCodigo()));
		command->Parameters->AddWithValue("@codigo_cliente", gcnew String(obj.getCliente()));
		command->Parameters->AddWithValue("@codigo_empleado", gcnew String(obj.getEmpleado()));
		command->Parameters->AddWithValue("@tipo_comprobante", gcnew String(obj.getTipoComprobante()));
		command->Parameters->AddWithValue("@codigo_comprobante", gcnew String(obj.getCodigoComprobante()));
		command->Parameters->AddWithValue("@sub_total", obj.getSubTotal());
		command->Parameters->AddWithValue("@igv", obj.getIgv());
		command->Parameters->AddWithValue("@total", obj.getTotal());
		command->Parameters->AddWithValue("@fecha", gcnew String(obj.getFecha()));

		//Ejecutar la consulta
		command->ExecuteNonQuery();
		MessageBox::Show("Actualizado");
		cn->Close();
	}
	catch (Exception ^exs) {
		MessageBox::Show(exs->Message);
	}
}

void VentaDAO::operator-=(Venta obj)
{
	try {
		SqlConnection ^cn = Conexion::getConnection();
		cn->Open();
		SqlCommand ^command = gcnew SqlCommand();
		command->Connection = cn;
		// Crear la consulta sql
		command->CommandText =
			"delete from ventas where codigo = @codigo";
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

void VentaDAO::ventaProcesar(Venta obj, int opcion)
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

vector<Venta> listaVentas;
VentaDAO daoVenta;