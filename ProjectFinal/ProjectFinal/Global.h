class Global
{
public:
	Global();
	~Global();

	static char * StringToChar(String ^m);

	static char* replace(char* str, char buscar, char r);
		
	static char* replaceFirst(char* str, char buscar, char r);
	
	
private:

};

Global::Global()
{
}

Global::~Global()
{
}

char * Global::StringToChar(String ^m)
{
	String^ aux = m;
	IntPtr ptr = Marshal::StringToHGlobalAnsi(aux);
	char* aux2 = static_cast<char*>(ptr.ToPointer());
	return aux2;
}

char* Global::replace(char* str, char buscar, char r) {
	char *actualPos = strchr(str, buscar);
	while (actualPos) {
		*actualPos = r;
		actualPos = strchr(actualPos, buscar);
	}
	return str;
}

char* Global::replaceFirst(char* str, char buscar, char r) {
	char *actualPos = strchr(str, buscar);
	if (actualPos) {
		*actualPos = r;
		actualPos = strchr(actualPos, buscar);
	}
	return str;
}