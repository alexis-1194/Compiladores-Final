class ProveedorDAO
{
public:
	ProveedorDAO();
	~ProveedorDAO();
	
	char* StringToChar(String ^m);

	list<Proveedor> consultar();

	void operator +=(Proveedor obj);

	void operator *=(Proveedor obj);

	void operator -=(Proveedor obj);

	void productoProcesar(Proveedor obj, int opcion);

private:

};

ProveedorDAO::ProveedorDAO()
{
}

ProveedorDAO::~ProveedorDAO()
{
}
