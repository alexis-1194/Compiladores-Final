create table Empleados
(
	codigo varchar(10) not null,
	dni varchar(10) not null,
	username varchar(30) not null,
	pass varchar(30) not null,
	Nombre varchar(50) not null,
	Apellidos varchar(50) not null,
	telefono varchar(10) not null,
	email varchar(200) not null,
	fechaNac date,
)

alter table Empleados add primary key(codigo);

insert into Empleados
values('EMP_000001', '55861234', 'manolito', 'jugador', 'Manuel','Lopez Obrador','987513245', 'manlidtoov@gmail.com', '1978-08-11')
--insert into Empleados
--values('EMP_000002', 'esther', 'diandra19', 'Esther Valle Diandra', '998698251', 'delVallue@gmail.com', '1995-12-25')


create table Clientes
(
	codigo varchar(10) not null,
	dni varchar(10) not null,
	nombre varchar(200) not null,
	apellidos varchar(200) not null,
	telefono varchar(10) not null,
	email varchar(200) not null,
	genero varchar(10) not null,
	fechaNac date,
);

alter table Clientes add primary key(codigo);

insert into Cliente
values('CLI_00001', 'Alexis Suarez Alvarez', '975516965', 'alexis.sualv@gmail.com', 'Masculino', '2000-04-12')
insert into Cliente
values('48515524', 'Jonas Silva Meza', '985698458', 'jonasSilv@hotmail.com', 'Masculino', '1998-05-11')

create table proveedores
(
	codigo varchar(10) not null,
	nombre_contacto varchar(50) not null,
	--Categoria de productos(perifericos, Almacenamiento, Redes, Juegos)
	categoria varchar(50) not null,
	empresa varchar(50) not null,
	direccion varchar(200) not null,
	telefono varchar(12) not null
);

alter table PROVEEDORES add primary key(codigo);


create table productos
(
	--id int identity(1,1), id numero autoincrementable
	codigo varchar(10) not null,
	nombre varchar(50),
	linea varchar(50) not null,
	precio_compra numeric,
	precio_venta numeric,
	cantidad int,
);

alter table PRODUCTOS add primary key(codigo);

create table boletas
(
	codigo varchar(10) not null,
	numero varchar(12) not null,
);

alter table Boletas add primary key(codigo);

create table facturas
(
	codigo varchar(10) not null,
	numero varchar(12) not null,
);

alter table facturas add primary key(codigo);

create table ventas
(
	codigo varchar(10) not null,
	numero varchar(12) not null,
	codigo_cliente varchar(10) not null,
	codigo_empleado varchar(10) not null,
	--factura o boleta
	tipo_comprobante varchar(50) not null,
	codigo_comprobante varchar(10) not null,
	--subtotal
	importe float not null,
	igv float not null,
	total float not null,
	fecha date,
);

alter table ventas add primary key(codigo);
alter table ventas add foreign key(codigo_cliente) references clientes(codigo);
alter table ventas add foreign key(codigo_empleado) references empleados(codigo);

create table compras
(
	codigo varchar(10) not null,
	numero varchar(12) not null,
	codigo_empleado varchar(10) not null,
	codigo_proveedor varchar(10) not null,
	--factura o boleta (factura generalmente a nombre de la empresa)
	tipo_comprobante varchar(50) not null,
	codigo_comprobante varchar(10) not null,
	--subtotal
	importe float not null,
	igv float not null,
	total float not null,
	fecha date,
);

alter table compras add primary key(codigo);
alter table compras add foreign key(codigo_empleado) references empleados(codigo);
alter table compras add foreign key(codigo_proveedor) references proveedores(codigo);

-- intermedia venta - producto
create table Detalles
(
	codigo_producto varchar(10) not null,
	nombre_producto varchar(100) not null,
	precio_producto float not null,
	cantidad_producto int not null,
	importe_producto float not null,
	codigo_venta varchar(10) not null
)
alter table detalles add foreign key(codigo_venta) references venta(codigo)





select day(fechaNac_cliente)
from clientes
select *
from clientes
select nombre_Cliente
from clientes




select month(fech_empleado)
from empleados
select *
from Empleados