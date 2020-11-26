class BoletaDAO
{
public:
	BoletaDAO();
	~BoletaDAO();

	char* StringToChar(String ^m);

	vector<Boleta> consultar();

	void operator +=(Boleta obj);//INSERTAR

	void boletaProcesar(Boleta obj, int opcion);

private:

};

BoletaDAO::BoletaDAO()
{
}

BoletaDAO::~BoletaDAO()
{
}

char * BoletaDAO::StringToChar(String ^ m)
{
	String^ aux = m;
	IntPtr ptr = Marshal::StringToHGlobalAnsi(aux);
	char* aux2 = static_cast<char*>(ptr.ToPointer());
	return aux2;
}

vector<Boleta> BoletaDAO::consultar()
{
	vector<Boleta> lista;
	SqlConnection ^cn = Conexion::getConnection();
	try {
		SqlCommand ^command = gcnew SqlCommand("select * from boletas", cn);
		cn->Open();
		SqlDataReader ^dr = command->ExecuteReader();

		while (dr->Read() == true) {

			String ^m;
			Boleta usu;

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

void BoletaDAO::operator+=(Boleta obj)
{
	try {
		SqlConnection ^cn = Conexion::getConnection();
		cn->Open();
		SqlCommand ^command = gcnew SqlCommand();
		command->Connection = cn;
		// Crear la consulta sql
		command->CommandText =
			"INSERT INTO boletas values(@codigo, @numero)";

		command->Parameters->AddWithValue("@codigo", gcnew String(obj.getCodigo()));
		command->Parameters->AddWithValue("@numero", gcnew String(obj.getNumero()));
		
		//Ejecutar la consulta
		command->ExecuteNonQuery();
		MessageBox::Show("Registrado");
		cn->Close();
	}
	catch (SqlException ^exs) {
		cout << StringToChar(exs->Message) << endl;
		MessageBox::Show("Clave o código ya existe");
	}
	/*catch (Exception ^exs) {
		MessageBox::Show(exs->Message);
	}*/
}

void BoletaDAO::boletaProcesar(Boleta obj, int opcion)
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


vector<Boleta> listaBoletas;
BoletaDAO daoBoleta;