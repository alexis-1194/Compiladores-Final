class Venta
{
public:
	Venta();
	~Venta();

	void setCodigo(char *codigo);
	void setCliente(char *cliente);
	void setEmpleado(char *empleado);
	void setTipoComprobante(char *tipoComprobante);
	void setCodigoComprobante(char *codigoComprobante);
	void setSubTotal(double subTotal);
	void setIgv(double igv);
	void setTotal(double total);
	void setFecha(char* fecha);

	char* getCodigo();
	char* getCliente();
	char* getEmpleado();
	char* getTipoComprobante();
	char* getCodigoComprobante();
	double getSubTotal();
	double getIgv();
	double getTotal();
	char* getFecha();

	bool validar();

private:

	char codigo[11];//V_000001
	char cliente[11]; //Codigo cliente
	char empleado[11]; //Codigo empleado

	char tipoComprobante[50];//boleta o factura
	char codigoComprobante[11];

	double subTotal;
	double igv = subTotal * 0.18;
	double total;

	char fecha[50];
	int q0, q1, q2,q3, q9, error;
};

Venta::Venta()
{
}

Venta::~Venta()
{
}


void Venta::setCodigo(char *codigo) {
	strcpy_s(this->codigo, codigo);
}
void Venta::setCliente(char *cliente) {
	strcpy_s(this->cliente, cliente);
}
void Venta::setEmpleado(char *empleado) {
	strcpy_s(this->empleado, empleado);
}
void Venta::setTipoComprobante(char *tipoComprobante) {
	strcpy_s(this->tipoComprobante, tipoComprobante);
}
void Venta::setCodigoComprobante(char *codigoComprobante) {
	strcpy_s(this->codigoComprobante, codigoComprobante);
}
void Venta::setSubTotal(double subTotal) {
	this->subTotal = subTotal;
}
void Venta::setIgv(double igv) {
	this->igv = igv;
}
void Venta::setTotal(double total) {
	this->total = total;
}
void Venta::setFecha(char* fecha) {
	strcpy_s(this->fecha, fecha);
}

char* Venta::getCodigo() {
	return this->codigo;
}
char* Venta::getCliente() {
	return this->cliente;
}
char* Venta::getEmpleado() {
	return this->empleado;
}
char* Venta::getTipoComprobante() {
	return this->tipoComprobante;
}
char* Venta::getCodigoComprobante() {
	return this->codigoComprobante;
}
double Venta::getSubTotal() {
	return this->subTotal;
}
double Venta::getIgv() {
	return this->igv;
}
double Venta::getTotal() {
	return this->total;
}
char* Venta::getFecha() {
	return this->codigo;
}

bool Venta::validar() {
	char cadena[11];
	strcpy_s(cadena, this->getCodigo());
	if (strlen(cadena) == 7) {
		int estado = q0;
		for (int i = 0; i < (int)strlen(cadena); i++)
		{
			switch (estado)
			{
			case 0: {
				if (cadena[i] == 'V') estado = q1;
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