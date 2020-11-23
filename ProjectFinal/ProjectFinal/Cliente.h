class Cliente
{
public:
	Cliente();
	~Cliente();

	char* StringToChar(String ^m);

	list<Cliente> consultar();

	void operator +=(Cliente obj);

	void operator *=(Cliente obj);

	void operator -=(Cliente obj);

	void productoProcesar(Cliente obj, int opcion);

private:

};

Cliente::Cliente()
{
}

Cliente::~Cliente()
{
}
