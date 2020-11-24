class Proveedor
{
public:
	Proveedor();
	~Proveedor();

	void setCodigo(char *codigo);
	void setNombreContacto(char *nombre);
	void setcategoria(char *categoria);
	void setempresa(char *empresa);
	void setdireccion(char *direccion);
	void settelefono(char *telefono);
	
	char* getCodigo();
	char* getNombreContacto();
	char* getCategoria();
	char* getEmpresa();
	char* getDireccion();
	char* getTelefono();

	bool validar();

private:

	char codigo[11];
	char nombreContacto[50];
	char categoria[50];
	char empresa[50];
	char direccion[100];
	char telefono[12];
	int q0, q1, q2, q3, q4,q5, q9, error;
};

Proveedor::Proveedor()
{
}

Proveedor::~Proveedor()
{
}

void Proveedor::setCodigo(char *codigo){
	strcpy_s(this->codigo,codigo);
}
void Proveedor::setNombreContacto(char *nombre){
	strcpy_s(this->nombreContacto, nombre);
}
void Proveedor::setcategoria(char *categoria){
	strcpy_s(this->categoria, categoria);
}
void Proveedor::setempresa(char *empresa){
	strcpy_s(this->empresa, empresa);
}
void Proveedor::setdireccion(char *direccion){
	strcpy_s(this->direccion, direccion);
}
void Proveedor::settelefono(char *telefono){
	strcpy_s(this->telefono, telefono);
}

char* Proveedor::getCodigo(){
	return this->codigo;
}
char* Proveedor::getNombreContacto(){
	return this->nombreContacto;
}
char* Proveedor::getCategoria(){
	return this->categoria;
}
char* Proveedor::getEmpresa(){
	return this->empresa;
}
char* Proveedor::getDireccion(){
	return this->direccion;
}
char* Proveedor::getTelefono(){
	return this->telefono;
}

bool Proveedor::validar()
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
				if (cadena[i] == 'V') estado = q4;
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

