class Conexion
{
public:
	Conexion();
	~Conexion();

	static SqlConnection ^getConnection();

private:

};

Conexion::Conexion()
{
}


Conexion::~Conexion()
{
}

SqlConnection ^ Conexion::getConnection()
{
	SqlConnection ^cn;
	SqlConnectionStringBuilder ^st;

	st = gcnew SqlConnectionStringBuilder();
	st->DataSource = "DESKTOP-2E54QI4\\MSSQLSERVER2";
	st->InitialCatalog = "DB_SISTEMACP";
	st->IntegratedSecurity = true;

	cn = gcnew SqlConnection(Convert::ToString(st));
	return cn;
}

