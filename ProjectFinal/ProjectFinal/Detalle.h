class Detalle
{
public:

	Detalle();
	~Detalle();

	void setCodigo(char *codigo);
	void setDescripcion(char *descripcion);
	void setPrecio(double precio);
	void setCantidad(int cantidad);
	void setSubTotal(double subTotal);
	void setCodigoVenta(char *codigoVenta);

	char* getCodigo();
	char* getDescripcion();
	double getPrecio();
	int getCantidad();
	double getSubTotal();
	char* getCodigoVenta();

private:

	char codigoProducto[11];
	char descripcion[50];
	double precio;
	int cantidadProducto;
	double subTotal;
	char codigoVenta[11];

};

Detalle::Detalle()
{
}

Detalle::~Detalle()
{
}

void Detalle::setCodigo(char *codigo){
	strcpy_s(this->codigoProducto, codigo);
}
void Detalle::setDescripcion(char *descripcion){
	strcpy_s(this->descripcion, descripcion);
}
void Detalle::setPrecio(double precio){
	this->precio = precio;
}
void Detalle::setCantidad(int cantidad){
	this->cantidadProducto = cantidad;
}
void Detalle::setSubTotal(double subTotal){
	this->subTotal = subTotal;
}
void Detalle::setCodigoVenta(char *codigoVenta){
	strcpy_s(this->codigoVenta, codigoVenta);
}

char* Detalle::getCodigo(){
	return this->codigoProducto;
}

char* Detalle::getDescripcion(){
	return this->descripcion;
}

double Detalle::getPrecio(){
	return this->precio;
}

int Detalle::getCantidad(){
	return this->cantidadProducto;
}

double Detalle::getSubTotal(){
	return this->subTotal;
}

char* Detalle::getCodigoVenta(){
	return this->codigoVenta;
}
