class FacturaDAO
{
public:
	FacturaDAO();
	~FacturaDAO();

	char* StringToChar(String ^m);

	vector<Factura> consultar();

	void operator +=(Factura obj);//INSERTAR

	void facturaProcesar(Factura obj, int opcion);

private:

};

FacturaDAO::FacturaDAO()
{
}

FacturaDAO::~FacturaDAO()
{
}

char * FacturaDAO::StringToChar(String ^ m)
{
	String^ aux = m;
	IntPtr ptr = Marshal::StringToHGlobalAnsi(aux);
	char* aux2 = static_cast<char*>(ptr.ToPointer());
	return aux2;
}

vector<Factura> FacturaDAO::consultar()
{
	vector<Factura> lista;
	SqlConnection ^cn = Conexion::getConnection();
	try {
		SqlCommand ^command = gcnew SqlCommand("select * from facturas", cn);
		cn->Open();
		SqlDataReader ^dr = command->ExecuteReader();

		while (dr->Read() == true) {

			String ^m;
			Factura usu;

			m = dr["codigo"]->ToString();
			usu.setCodigo(StringToChar(m));

			m = dr["numero"]->ToString();
			usu.setNumero(StringToChar(m));

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

void FacturaDAO::operator+=(Factura obj)
{
	try {
		SqlConnection ^cn = Conexion::getConnection();
		cn->Open();
		SqlCommand ^command = gcnew SqlCommand();
		command->Connection = cn;
		// Crear la consulta sql
		command->CommandText =
			"INSERT INTO facturas values(@codigo, @numero)";

		command->Parameters->AddWithValue("@codigo", gcnew String(obj.getCodigo()));
		command->Parameters->AddWithValue("@numero", gcnew String(obj.getNumero()));

		//Ejecutar la consulta
		command->ExecuteNonQuery();
		//MessageBox::Show("Registrado");
		cn->Close();
	}
	catch (SqlException ^exs) {
		cout << StringToChar(exs->Message) << endl;
		MessageBox::Show(exs->Message);
	}
	/*catch (Exception ^exs) {
		MessageBox::Show(exs->Message);
	}*/
}

void FacturaDAO::facturaProcesar(Factura obj, int opcion)
{
	switch (opcion)
	{
	case Constante::INS:
		this->operator+=(obj);//registrar
		break;
	default:
		break;
	}
}

vector<Factura> listaFacturas;
FacturaDAO daoFactura;
