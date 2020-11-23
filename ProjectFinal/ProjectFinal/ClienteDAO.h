class ClienteDAO
{
public:
	ClienteDAO();
	~ClienteDAO();

	char* StringToChar(String ^m);

	list<Cliente> consultar();

	void operator +=(Cliente obj);

	void operator *=(Cliente obj);

	void operator -=(Cliente obj);

	void productoProcesar(Cliente obj, int opcion);

private:

};

ClienteDAO::ClienteDAO()
{
}

ClienteDAO::~ClienteDAO()
{
}
