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
select *
from clientes;
alter table Empleados add primary key(codigo);

insert into Empleados
values('EMP_000001', '55861234', 'manolito', 'jugador', 'Manuel', 'Lopez Obrador', '987513245', 'manlidtoov@gmail.com', '1978-08-11')
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


select *
from clientes
insert into Clientes
values('CLI_000001', '13249875', 'Juan', 'Martinez Diaz', '975516965', 'Juan_13@gmail.com', 'Masculino', '1983-04-12')

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

insert into proveedores
values('PROV_00001', 'Gerardo Torres', 'perifericos', 'COMPU S.A.C'
, 'Av. Petit Thouars 5356, Miraflores 15074', '897123456');


create table productos
(
	--id int identity(1,1), id numero autoincrementable
	codigo varchar(10) not null,
	nombre varchar(50),--descripcion
	linea varchar(50) not null,
	precio_compra numeric not null,
	precio_venta numeric not null,
	cantidad int not null,
	codigo_proveedor varchar(10) not null
);
--select * from productos
alter table PRODUCTOS add primary key(codigo);

alter table productos add foreign key(codigo_proveedor) references proveedores(codigo);

insert into productos
values('PROD_00001', 'Mouse Logitech B100', 'Mouse', 45.50, 56.40,
		60, 'PROV_00001');


create table boletas
(
	codigo varchar(10) not null,
	numero varchar(12) not null,
);

alter table Boletas add primary key(codigo);
alter table boletas add unique(numero);

insert into boletas
values('B_00001', 'B02-0001393');
--delete from boletas;

create table facturas
(
	codigo varchar(10) not null,
	numero varchar(12) not null,
);

alter table facturas add primary key(codigo);
alter table facturas add unique(numero);

insert into facturas
values('F_00001', 'F01-0000765');


create table ventas
(
	codigo varchar(10) not null,
	codigo_cliente varchar(10) not null,
	codigo_empleado varchar(10) not null,
	--factura o boleta
	tipo_comprobante varchar(50) not null,
	codigo_comprobante varchar(10) not null,
	sub_total numeric not null,
	igv numeric not null,
	total numeric not null,
	fecha date,
);

select* from boletas
delete from boletas where codigo = 'F_00001';

select * from ventas;
select * from detalles;

--delete from ventas where codigo = 'V_00002'

alter table ventas add primary key(codigo);
alter table ventas add foreign key(codigo_cliente) references clientes(codigo);
alter table ventas add foreign key(codigo_empleado) references empleados(codigo);

--no definido
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
	nombre_producto varchar(50) not null,
	precio_producto float not null,
	cantidad_producto int not null,
	importe_producto float not null,
	codigo_venta varchar(10) not null
)

alter table detalles add foreign key(codigo_producto) references productos(codigo)
alter table detalles add foreign key(codigo_venta) references ventas(codigo)




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