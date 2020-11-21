class Producto
{
public:
	Producto();
	~Producto();

	void setCodigo(char *codigo);
	void setDescripcion(char *descripcion);
	void setCantidad(int cantidad);
	void setPrecio(double precio);

	char* getCodigo();
	char* getDescripcion();
	int getCantidad();
	double getPrecio();

	bool validar();

private:
	int q0, q1, q2, q3, q4, q5, error;
	char codigo[11];
	char descripcion[100];
	int cantidad;
	double precio;
};

Producto::Producto()
{
	q0 = 0; q1 = 1; q2 = 2, q3 = 3, q4 = 4, q5 = 5;
	error = -1;
}

Producto::~Producto()
{
}

void Producto::setCodigo(char * codigo)
{
	strcpy_s(this->codigo, codigo);
}

void Producto::setDescripcion(char * descripcion)
{
	strcpy_s(this->descripcion, descripcion);
}

void Producto::setCantidad(int cantidad)
{
	this->cantidad = cantidad;
}

void Producto::setPrecio(double precio)
{
	this->precio = precio;
}

char * Producto::getCodigo()
{
	return this->codigo;
}

char * Producto::getDescripcion()
{
	return this->descripcion;
}

int Producto::getCantidad()
{
	return this->cantidad;
}

double Producto::getPrecio()
{
	return this->precio;
}

bool Producto::validar()
{
	char cadena[11];
	strcpy_s(cadena, this->getCodigo());
	if (strlen(cadena) == 10) {
		int estado = q0;
		for (int i = 0; i < (int)strlen(cadena); i++)
		{
			switch (estado)
			{
			case 0: {
				if (cadena[i] == 'P') estado = q1;
				else estado = error;
			}break;
			case 1: {
				if (cadena[i] == 'R') estado = q2;
				else estado = error;
			}break;
			case 2: {
				if (cadena[i] == 'O') estado = q3;
				else estado = error;
			}break;
			case 3: {
				if (cadena[i] == 'D') estado = q4;
				else estado = error;
			}break;
			case 4: {
				if (cadena[i] == '_') estado = q5;
				else estado = error;
			}break;
			case 5: {
				if (cadena[i] == '0' || cadena[i] == '1' || cadena[i] == '2' || cadena[i] == '3' || cadena[i] == '4' || cadena[i] == '5' || cadena[i] == '6' || cadena[i] == '7' || cadena[i] == '8' || cadena[i] == '9') estado = q5;
				else estado = error;
			}break;
			case -1: {
				return false;
			}break;
			default: estado = error; break;
			}
		}
		if (estado == q5) return true;
		else return false;
	}
	else return false;
}
