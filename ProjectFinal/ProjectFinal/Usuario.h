//Empleado
char empleadoActual[100]; //Global para utilizar en la vista Registrar venta
class Usuario
{
public:
	Usuario();
	~Usuario();

	void setCodigo(char *codigo);
	void setDni(char *dni);
	void setUserName(char *user_name);
	void setPassWord(char *password);
	void setNombre(char *nombre);
	void setApellidos(char *apellidos);
	void setTelefono(char *telefono);
	void setEmail(char *email);
	void setFecha(char *fecha);

	char* getCodigo();
	char* getDni();
	char* getUserName();
	char* getPassWord();
	char* getNombre();
	char* getApellidos();
	char* getTelefono();
	char* getEmail();
	char* getFecha();

	bool validar();
	
private:
	char codigo[11];
	char dni[10];
	char user_name[30];
	char password[30];
	char nombre[50];
	char apellidos[50];
	char telefono[12];
	char email[50];
	char fecha[50];
	int q0, q1, q2, q3, q4, q9, error;
	
};

Usuario::Usuario()
{
	q0 = 0; q1 = 1; q2 = 2, q3 = 3, q4 = 4;
	//q9 = 0;
	error = -1;
}

Usuario::~Usuario()
{
}

void Usuario::setCodigo(char * codigo)
{
	strcpy_s(this->codigo, codigo);
}

void Usuario::setDni(char * dni)
{
	strcpy_s(this->dni, dni);
}

void Usuario::setUserName(char *user_name) {
	strcpy_s(this->user_name, user_name);
}

void Usuario::setPassWord(char * password)
{
	strcpy_s(this->password, password);
}

void Usuario::setNombre(char * nombre)
{
	strcpy_s(this->nombre, nombre);
}

void Usuario::setApellidos(char * apellidos)
{
	strcpy_s(this->apellidos, apellidos);
}

void Usuario::setTelefono(char * telefono)
{
	strcpy_s(this->telefono, telefono);
}

void Usuario::setEmail(char * email)
{
	strcpy_s(this->email, email);
}

void Usuario::setFecha(char * fecha)
{
	strcpy_s(this->fecha, fecha);
}

char * Usuario::getCodigo()
{
	return this->codigo;
}

char * Usuario::getDni()
{
	return this->dni;
}

char * Usuario::getUserName()
{
	return this->user_name;
}

 char * Usuario::getPassWord()
{
	return this->password;
}

char * Usuario::getNombre()
{
	return this->nombre;
}

char * Usuario::getApellidos()
{
	return this->apellidos;
}

char * Usuario::getTelefono()
{
	return this->telefono;
}

char * Usuario::getEmail()
{
	return this->email;
}

char * Usuario::getFecha()
{
	return this->fecha;
}


bool Usuario::validar() {
	char cadena[11];
	strcpy_s(cadena, this->getCodigo());
	if (strlen(cadena) == 10) {
		int estado = q0;
		for (int i = 0; i < (int)strlen(cadena); i++)
		{
			switch (estado)
			{
			case 0: {
				if (cadena[i] == 'E') estado = q1;
				else estado = error;
			}break;
			case 1: {
				if (cadena[i] == 'M') estado = q2;
				else estado = error;
			}break;
			case 2: {
				if (cadena[i] == 'P') estado = q3;
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
