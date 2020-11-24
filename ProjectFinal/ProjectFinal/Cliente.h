class Cliente
{
public:
	Cliente();
	~Cliente();

	void setCodigo(char *codigo);
	void setDni(char *dni);
	void setNombre(char *nombre);
	void setApellidos(char *apellidos);
	void setTelefono(char *telefono);
	void setEmail(char *email);
	void setGenero(char *genero);
	void setFecha(char *fecha);

	char* getCodigo();
	char* getDni();
	char* getNombre();
	char* getApellidos();
	char* getTelefono();
	char* getEmail();
	char* getGenero();
	char* getFecha();

	bool validar();

private:
	char codigo[11];
	char dni[10];
	char nombre[50];
	char apellidos[50];
	char telefono[12];
	char email[50];
	char genero[20];
	char fecha[50];
	int q0, q1, q2, q3, q4, q9, error;
};

Cliente::Cliente()
{
	q0 = 0; q1 = 1; q2 = 2, q3 = 3, q4 = 4;
	//q9 = 0;
	error = -1;
}

Cliente::~Cliente()
{
}

void Cliente::setCodigo(char *codigo) {
	strcpy_s(this->codigo, codigo);
}
void Cliente::setDni(char *dni) {
	strcpy_s(this->dni, dni);
}
void Cliente::setNombre(char *nombre) {
	strcpy_s(this->nombre, nombre);
}
void Cliente::setApellidos(char *apellidos) {
	strcpy_s(this->apellidos, apellidos);
}
void Cliente::setTelefono(char *telefono) {
	strcpy_s(this->telefono, telefono);
}
void Cliente::setEmail(char *email) {
	strcpy_s(this->email, email);
}
void Cliente::setGenero(char *genero) {
	strcpy_s(this->genero, genero);
}
void Cliente::setFecha(char *fecha) {
	strcpy_s(this->fecha, fecha);
}

char* Cliente::getCodigo() {
	return this->codigo;
}
char* Cliente::getDni() {
	return this->dni;
}
char* Cliente::getNombre() {
	return this->nombre;
}
char* Cliente::getApellidos() {
	return this->apellidos;
}
char* Cliente::getTelefono() {
	return this->telefono;
}
char* Cliente::getEmail() {
	return this->email;
}
char* Cliente::getGenero() {
	return this->genero;
}
char* Cliente::getFecha() {
	return this->fecha;
}

bool Cliente::validar() {
	char cadena[11];
	strcpy_s(cadena, this->getCodigo());
	if (strlen(cadena) == 10) {
		int estado = q0;
		for (int i = 0; i < (int)strlen(cadena); i++)
		{
			switch (estado)
			{
			case 0: {
				if (cadena[i] == 'C') estado = q1;
				else estado = error;
			}break;
			case 1: {
				if (cadena[i] == 'L') estado = q2;
				else estado = error;
			}break;
			case 2: {
				if (cadena[i] == 'I') estado = q3;
				else estado = error;
			}break;
			case 3: {
				if (cadena[i] == '_') estado = q4;
				else estado = error;
			}break;
			case 4: {
				if (cadena[i] == '0' || cadena[i] == '1' || cadena[i] == '2' || cadena[i] == '3' || cadena[i] == '4' || cadena[i] == '5' || cadena[i] == '6' || cadena[i] == '7' || cadena[i] == '8' || cadena[i] == '9') estado = q4;
				else estado = error;
			}break;
			case -1: {
				return false;
			}break;
			default: estado = error; break;
			}
		}
		if (estado == q4) return true;
		else return false;
	}
	else return false;
}