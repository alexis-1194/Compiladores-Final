#include <iostream>
#include <string.h>
#include <list>
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Runtime::InteropServices;
using namespace System::Data::Sql;
using namespace System::Data::SqlClient;
using namespace std;


#include "frmLogin.h"

using namespace ProjectFinal;

void main() {
	Application::EnableVisualStyles();
	Application::Run(gcnew frmLogin);
}

