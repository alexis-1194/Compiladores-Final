--Empleados
create table usuarios
(
	-- id numero autoincrementable
	id int not null identity (1,1),--
	username varchar(50) not null,
	pass varchar(50) not null
);

--Usuarios o Empleados (Normalizar)
-- create table usuarios
-- (
-- 	codigo varchar(10) not null,
-- 	nombre varchar(50) not null,
-- 	apellido varchar(50) not null,
-- 	direccion varchar(200) not null
-- );

alter table usuarios add primary key(codigo);
alter table usuarios add unique(username);

create table clientes
(
	codigo varchar(10) not null,
	dni varchar(12) not null,
	nombre varchar(50),
	ape_paterno varchar(50),
	ape_materno varchar(50),
	--telefono
	--genero
);

alter table clientes add primary key(codigo)

create table productos
(
	--id int identity(1,1), id numero autoincrementable
	codigo varchar(10) not null,
	descripcion varchar(100),
	cantidad int,--stock
	precio numeric
);

alter table productos add primary key(codigo)

create table proveedores
(
	codigo varchar(10) not null,
	nombre varchar(50),
	--Categoria de productos
	categoria varchar(50)
	--dni varchar(12) not null,
	--empresa
	--ruc
);

alter table proveedores add primary key(codigo);
--compra
create table ingreso_productos
(
	--codigo empleado
	--precio compra product
	codigo varchar(10) not null,
	cod_producto varchar(10) not null,
	cod_proveedor varchar(10) not null,
	cantidad int,
	total_compra numeric,
	fecha date
);


alter table ingreso_productos add primary key(codigo)
alter table ingreso_productos add foreign key(cod_producto) references productos(codigo)
alter table ingreso_productos add foreign key(cod_proveedor) references proveedores(codigo)
--venta
create table salida_productos
(
	--codigo empleado
	--precio venta product
	codigo varchar(10) not null,
	cod_producto varchar(10) not null,
	cod_cliente varchar(10) not null,
	cantidad int,
	total_venta numeric,
	fecha date
);


alter table salida_productos add primary key(codigo)

alter table salida_productos add foreign key(cod_producto) references productos(codigo)
alter table salida_productos add foreign key(cod_cliente) references clientes(codigo)

/*Boletas, Facturas... */
create table reportes_salida
(
	codigo varchar(10) not null,
	codigo_usuario varchar(10) not null,
	codigo_cliente varchar(10) not null,
	codigo_salida varchar(10) not null,
	tipo_documento varchar(50),
	num_documento varchar(12),
	fecha date
	--detalle productos
	--
);

alter table reportes_salida add primary key(codigo)
alter table reporte_salida add foreign key(codigo_usuario) references usuarios(codigo)
alter table reporte_salida add foreign key(codigo_cliente) references clientes(codigo)
alter table reporte_salida add foreign key(codigo_salida) references salida_productos(codigo)



