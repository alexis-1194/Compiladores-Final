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
//Utilidades
#include "Constante.h"
#include "Global.h"
//Entidades
#include "Detalle.h"
#include "Factura.h"
#include "Boleta.h"
#include "Venta.h"
#include "Producto.h"
#include "Proveedor.h"
#include "Cliente.h"
#include "Usuario.h"
//Dao
#include "DetalleDAO.h"
#include "FacturaDAO.h"
#include "BoletaDAO.h"
#include "VentaDAO.h"
#include "ProductoDAO.h"
#include "ProveedorDAO.h"
#include "ClienteDAO.h"
#include "UsuarioDAO.h"
//View
#include "frmDetalle.h"
#include "frmRegistrarCompra.h"
#include "frmRegistrarVenta.h"
#include "frmRegistroIngresos.h"
#include "frmRegistroSalidas.h"
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

