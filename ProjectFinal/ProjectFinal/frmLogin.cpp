#include <iostream>
#include <string.h>
#include <vector>
#include <list>
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Runtime::InteropServices;
using namespace System::Data::Sql;
using namespace System::Data::SqlClient;
using namespace std;

#include "Conexion.h"
#include "Constante.h"
//Entidades
#include "Producto.h"
#include "Proveedor.h"
#include "Cliente.h"
#include "Usuario.h"
//Dao
#include "ProductoDAO.h"
#include "ProveedorDAO.h"
#include "ClienteDAO.h"
#include "UsuarioDAO.h"
//View
#include "frmProducto.h"
#include "frmProveedor.h"
#include "frmEmpleado.h"
#include "frmCliente.h"
#include "frmPrincipal.h"
#include "frmLogin.h"

using namespace ProjectFinal;

void main() {
	Application::EnableVisualStyles();
	Application::Run(gcnew frmLogin);
}

