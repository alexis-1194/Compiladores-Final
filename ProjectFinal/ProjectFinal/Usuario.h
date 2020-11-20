class Usuario
{
public:
	Usuario();
	~Usuario();

	void setUserName(char *user_name);
	void setPassWord(char *password);

	char* getUserName();
	char* getPassword();

	bool validar(char *user_name, char* password);

private:
	char user_name[30];
	char password[30];

};

Usuario::Usuario()
{

}

Usuario::~Usuario()
{
}

void Usuario::setUserName(char *user_name) {
	strcpy_s(this->user_name, user_name);
}

char* Usuario::getUserName() {
	return this->user_name;
}

void Usuario::setPassWord(char *password) {
	strcpy_s(this->password, password);
}


char* Usuario::getPassword() {
	return this->password;
}

bool Usuario::validar(char *user_name, char* password) {
	bool value = false;
	if (user_name == getUserName() && password == getPassword()) {
		value = true;
	}
	return value;
}