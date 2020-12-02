class Global
{
public:
	Global();
	~Global();

	static char * StringToChar(String ^m);

	static char* replace(char* str, char buscar, char r);

	static char* replaceFirst(char* str, char buscar, char r);

	static void validarSoloNumeros(System::Windows::Forms::KeyPressEventArgs^ e) {
		if (Char::IsDigit(e->KeyChar)) {
			e->Handled = false;
		}
		else if (Char::IsControl(e->KeyChar)) {
			e->Handled = false;
		}
		else {
			e->Handled = true;
			/*MessageBox::Show("Solo numeros");*/
		}
	}

	static void validarSoloLetras(System::Windows::Forms::KeyPressEventArgs^ e) {
		if (Char::IsLetter(e->KeyChar)) {
			e->Handled = false;
		}
		else if (Char::IsSeparator(e->KeyChar)) {
			e->Handled = false;
		}
		else if (Char::IsControl(e->KeyChar)) {
			e->Handled = false;
		}
		else {
			e->Handled = true;
			/*MessageBox::Show("Solo letras");*/
		}
	}

	static void validarSoloLetrasNumeros(System::Windows::Forms::KeyPressEventArgs^ e) {
		if (Char::IsLetter(e->KeyChar)) {
			e->Handled = false;
		}
		else if (Char::IsSeparator(e->KeyChar)) {
			e->Handled = false;
		}
		else if (Char::IsControl(e->KeyChar)) {
			e->Handled = false;
		}
		else if (Char::IsDigit(e->KeyChar)) {
			e->Handled = false;
		}
		else {
			e->Handled = true;
			/*MessageBox::Show("Solo letras y numeros");*/
		}
	}

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