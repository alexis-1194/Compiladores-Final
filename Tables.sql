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

create table Clientes
(
	codigo varchar(10) not null,
	dni varchar(10) not null,
	nombre varchar(200) not null,
	telefono varchar(10) not null,
	email varchar(200) not null,
	genero varchar(10) not null,
	fechaNac date,
);

alter table Clientes add primary key(codigo);

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
	codigo_cliente varchar(200) not null,
	codigo_empleado varchar(200) not null,
	tipo_comprobante varchar(50) not null,
	numero_comprobante varchar(10) not null,
	--subtotal
	importe float not null,
	igv float not null,
	total float not null,
	fecha date,
);

alter table ventas add primary key(codigo);

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



insert into Cliente
values('48512995', 'Alexis Suarez Alvarez', '975516965', 'alexis.sualv@gmail.com', 'Masculino', '2000-04-12')
insert into Cliente
values('48515524', 'Jonas Silva Meza', '985698458', 'jonasSilv@hotmail.com', 'Masculino', '1998-05-11')

select day(fechaNac_cliente)
from cliente
select *
from cliente
select nombre_Cliente
from cliente

insert into Empleado
values('48512975', 'manolito', 'jugador', 'Manuel Lopez Obrador', '975516965', 'manlidtoov@gmail.com', '2001-08-11')
insert into Empleado
values('65184659', 'esther', 'diandra19', 'Esther Valle Diandra', '998698251', 'delVallue@gmail.com', '1995-12-25')


select month(fech_empleado)
from empleado
select *
from Empleado