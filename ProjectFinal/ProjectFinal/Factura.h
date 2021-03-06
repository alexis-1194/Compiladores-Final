class Factura
{
public:
	Factura();
	~Factura();

	void setCodigo(char * codigo);
	void setNumero(char * numero);

	char * getCodigo();
	char * getNumero();

	bool validar();

private:
	char codigo[11];
	char numero[13];
	int q0, q1, q2, q3, q9, error;
};

Factura::Factura()
{
}

Factura::~Factura()
{
}

void Factura::setCodigo(char * codigo) {
	strcpy_s(this->codigo, codigo);
}
void Factura::setNumero(char * numero) {
	strcpy_s(this->numero, numero);
}

char * Factura::getCodigo() {
	return this->codigo;
}
char * Factura::getNumero() {
	return this->numero;
}

bool Factura::validar()
{
	char cadena[11];
	strcpy_s(cadena, this->getCodigo());
	if (strlen(cadena) == 7) {
		int estado = q0;
		for (int i = 0; i < (int)strlen(cadena); i++)
		{
			switch (estado)
			{
			case 0: {
				if (cadena[i] == 'F') estado = q1;
				else estado = error;
			}break;
			case 1: {
				if (cadena[i] == '_') estado = q2;
				else estado = error;
			}break;
			case 2: {
				if (cadena[i] == '0' || cadena[i] == '1' || cadena[i] == '2' || cadena[i] == '3' || cadena[i] == '4' || cadena[i] == '5' || cadena[i] == '6' || cadena[i] == '7' || cadena[i] == '8' || cadena[i] == '9') estado = q3;
				else estado = error;
			}break;
			case -1: {
				return false;
			}break;
			default: estado = error; break;
			}
		}
		if (estado == q3) return true;
		else return false;
	}
	else return false;
}
