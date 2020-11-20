#pragma once

namespace ProjectFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmPrincipal
	/// </summary>
	public ref class frmPrincipal : public System::Windows::Forms::Form
	{
	public:
		frmPrincipal(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panelContenedor;
	protected:
	private: System::Windows::Forms::Panel^  menuVertical;
	private: System::Windows::Forms::Panel^  subMenu_Reportes;
	private: System::Windows::Forms::Button^  btnReporte_compras;
	private: System::Windows::Forms::Button^  btnReporte_venta;
	private: System::Windows::Forms::Button^  btnReportes;
	private: System::Windows::Forms::Button^  btnComprar;
	private: System::Windows::Forms::Button^  btnVender;
	private: System::Windows::Forms::Button^  btnProductos;
	private: System::Windows::Forms::Button^  btnEmpleados;
	private: System::Windows::Forms::Button^  btnClientes;
	private: System::Windows::Forms::Panel^  barraTitulo;
	private: System::Windows::Forms::PictureBox^  ptrRestaurar;
	private: System::Windows::Forms::PictureBox^  ptrMinimizar;
	private: System::Windows::Forms::PictureBox^  ptrMaximizar;
	private: System::Windows::Forms::PictureBox^  ptrCerrar;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(frmPrincipal::typeid));
			this->panelContenedor = (gcnew System::Windows::Forms::Panel());
			this->ptrRestaurar = (gcnew System::Windows::Forms::PictureBox());
			this->menuVertical = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->subMenu_Reportes = (gcnew System::Windows::Forms::Panel());
			this->btnReporte_compras = (gcnew System::Windows::Forms::Button());
			this->btnReporte_venta = (gcnew System::Windows::Forms::Button());
			this->btnReportes = (gcnew System::Windows::Forms::Button());
			this->btnComprar = (gcnew System::Windows::Forms::Button());
			this->btnVender = (gcnew System::Windows::Forms::Button());
			this->btnProductos = (gcnew System::Windows::Forms::Button());
			this->btnEmpleados = (gcnew System::Windows::Forms::Button());
			this->btnClientes = (gcnew System::Windows::Forms::Button());
			this->barraTitulo = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->ptrMinimizar = (gcnew System::Windows::Forms::PictureBox());
			this->ptrMaximizar = (gcnew System::Windows::Forms::PictureBox());
			this->ptrCerrar = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ptrRestaurar))->BeginInit();
			this->menuVertical->SuspendLayout();
			this->subMenu_Reportes->SuspendLayout();
			this->barraTitulo->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ptrMinimizar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ptrMaximizar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ptrCerrar))->BeginInit();
			this->SuspendLayout();
			// 
			// panelContenedor
			// 
			this->panelContenedor->BackColor = System::Drawing::Color::White;
			this->panelContenedor->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelContenedor->Location = System::Drawing::Point(220, 35);
			this->panelContenedor->Name = L"panelContenedor";
			this->panelContenedor->Size = System::Drawing::Size(561, 586);
			this->panelContenedor->TabIndex = 4;
			// 
			// ptrRestaurar
			// 
			this->ptrRestaurar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->ptrRestaurar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ptrRestaurar.Image")));
			this->ptrRestaurar->Location = System::Drawing::Point(725, 3);
			this->ptrRestaurar->Name = L"ptrRestaurar";
			this->ptrRestaurar->Size = System::Drawing::Size(25, 25);
			this->ptrRestaurar->TabIndex = 2;
			this->ptrRestaurar->TabStop = false;
			this->ptrRestaurar->Visible = false;
			this->ptrRestaurar->Click += gcnew System::EventHandler(this, &frmPrincipal::ptrRestaurar_Click);
			// 
			// menuVertical
			// 
			this->menuVertical->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->menuVertical->Controls->Add(this->button2);
			this->menuVertical->Controls->Add(this->subMenu_Reportes);
			this->menuVertical->Controls->Add(this->btnReportes);
			this->menuVertical->Controls->Add(this->btnComprar);
			this->menuVertical->Controls->Add(this->btnVender);
			this->menuVertical->Controls->Add(this->btnProductos);
			this->menuVertical->Controls->Add(this->btnEmpleados);
			this->menuVertical->Controls->Add(this->btnClientes);
			this->menuVertical->Dock = System::Windows::Forms::DockStyle::Left;
			this->menuVertical->Location = System::Drawing::Point(0, 35);
			this->menuVertical->Name = L"menuVertical";
			this->menuVertical->Size = System::Drawing::Size(220, 586);
			this->menuVertical->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(164)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(12, 167);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(208, 32);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Proveedores";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &frmPrincipal::button2_Click);
			// 
			// subMenu_Reportes
			// 
			this->subMenu_Reportes->Controls->Add(this->btnReporte_compras);
			this->subMenu_Reportes->Controls->Add(this->btnReporte_venta);
			this->subMenu_Reportes->Location = System::Drawing::Point(44, 488);
			this->subMenu_Reportes->Name = L"subMenu_Reportes";
			this->subMenu_Reportes->Size = System::Drawing::Size(176, 80);
			this->subMenu_Reportes->TabIndex = 6;
			this->subMenu_Reportes->Visible = false;
			// 
			// btnReporte_compras
			// 
			this->btnReporte_compras->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->btnReporte_compras->FlatAppearance->BorderSize = 0;
			this->btnReporte_compras->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->btnReporte_compras->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnReporte_compras->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnReporte_compras->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnReporte_compras->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnReporte_compras.Image")));
			this->btnReporte_compras->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnReporte_compras->Location = System::Drawing::Point(3, 41);
			this->btnReporte_compras->Name = L"btnReporte_compras";
			this->btnReporte_compras->Size = System::Drawing::Size(173, 32);
			this->btnReporte_compras->TabIndex = 5;
			this->btnReporte_compras->Text = L"Reporte ingresos";
			this->btnReporte_compras->UseVisualStyleBackColor = false;
			// 
			// btnReporte_venta
			// 
			this->btnReporte_venta->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->btnReporte_venta->FlatAppearance->BorderSize = 0;
			this->btnReporte_venta->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->btnReporte_venta->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnReporte_venta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnReporte_venta->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnReporte_venta->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnReporte_venta.Image")));
			this->btnReporte_venta->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnReporte_venta->Location = System::Drawing::Point(3, 3);
			this->btnReporte_venta->Name = L"btnReporte_venta";
			this->btnReporte_venta->Size = System::Drawing::Size(173, 32);
			this->btnReporte_venta->TabIndex = 4;
			this->btnReporte_venta->Text = L"Reporte salidas";
			this->btnReporte_venta->UseVisualStyleBackColor = false;
			// 
			// btnReportes
			// 
			this->btnReportes->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(164)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->btnReportes->FlatAppearance->BorderSize = 0;
			this->btnReportes->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->btnReportes->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnReportes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnReportes->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnReportes->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnReportes.Image")));
			this->btnReportes->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnReportes->Location = System::Drawing::Point(12, 450);
			this->btnReportes->Name = L"btnReportes";
			this->btnReportes->Size = System::Drawing::Size(208, 32);
			this->btnReportes->TabIndex = 5;
			this->btnReportes->Text = L"Reportes";
			this->btnReportes->UseVisualStyleBackColor = false;
			// 
			// btnComprar
			// 
			this->btnComprar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(164)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->btnComprar->FlatAppearance->BorderSize = 0;
			this->btnComprar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->btnComprar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnComprar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnComprar->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnComprar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnComprar.Image")));
			this->btnComprar->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnComprar->Location = System::Drawing::Point(12, 376);
			this->btnComprar->Name = L"btnComprar";
			this->btnComprar->Size = System::Drawing::Size(208, 32);
			this->btnComprar->TabIndex = 4;
			this->btnComprar->Text = L"Ingresos";
			this->btnComprar->UseVisualStyleBackColor = false;
			// 
			// btnVender
			// 
			this->btnVender->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(164)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->btnVender->FlatAppearance->BorderSize = 0;
			this->btnVender->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->btnVender->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnVender->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnVender->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnVender->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnVender.Image")));
			this->btnVender->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnVender->Location = System::Drawing::Point(12, 307);
			this->btnVender->Name = L"btnVender";
			this->btnVender->Size = System::Drawing::Size(208, 32);
			this->btnVender->TabIndex = 3;
			this->btnVender->Text = L"Salidas";
			this->btnVender->UseVisualStyleBackColor = false;
			// 
			// btnProductos
			// 
			this->btnProductos->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(164)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->btnProductos->FlatAppearance->BorderSize = 0;
			this->btnProductos->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->btnProductos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnProductos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnProductos->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnProductos->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnProductos.Image")));
			this->btnProductos->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnProductos->Location = System::Drawing::Point(12, 235);
			this->btnProductos->Name = L"btnProductos";
			this->btnProductos->Size = System::Drawing::Size(208, 32);
			this->btnProductos->TabIndex = 2;
			this->btnProductos->Text = L"Productos";
			this->btnProductos->UseVisualStyleBackColor = false;
			this->btnProductos->Click += gcnew System::EventHandler(this, &frmPrincipal::btnProductos_Click);
			// 
			// btnEmpleados
			// 
			this->btnEmpleados->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(164)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->btnEmpleados->FlatAppearance->BorderSize = 0;
			this->btnEmpleados->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->btnEmpleados->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEmpleados->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnEmpleados->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnEmpleados->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEmpleados.Image")));
			this->btnEmpleados->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnEmpleados->Location = System::Drawing::Point(12, 100);
			this->btnEmpleados->Name = L"btnEmpleados";
			this->btnEmpleados->Size = System::Drawing::Size(208, 32);
			this->btnEmpleados->TabIndex = 1;
			this->btnEmpleados->Text = L"Empleados";
			this->btnEmpleados->UseVisualStyleBackColor = false;
			this->btnEmpleados->Click += gcnew System::EventHandler(this, &frmPrincipal::btnEmpleados_Click);
			// 
			// btnClientes
			// 
			this->btnClientes->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(164)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->btnClientes->FlatAppearance->BorderSize = 0;
			this->btnClientes->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->btnClientes->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClientes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnClientes->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnClientes->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnClientes.Image")));
			this->btnClientes->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnClientes->Location = System::Drawing::Point(12, 32);
			this->btnClientes->Name = L"btnClientes";
			this->btnClientes->Size = System::Drawing::Size(208, 32);
			this->btnClientes->TabIndex = 0;
			this->btnClientes->Text = L"Clientes";
			this->btnClientes->UseVisualStyleBackColor = false;
			this->btnClientes->Click += gcnew System::EventHandler(this, &frmPrincipal::btnClientes_Click);
			// 
			// barraTitulo
			// 
			this->barraTitulo->BackColor = System::Drawing::Color::Black;
			this->barraTitulo->Controls->Add(this->ptrRestaurar);
			this->barraTitulo->Controls->Add(this->button1);
			this->barraTitulo->Controls->Add(this->ptrMinimizar);
			this->barraTitulo->Controls->Add(this->ptrMaximizar);
			this->barraTitulo->Controls->Add(this->ptrCerrar);
			this->barraTitulo->Dock = System::Windows::Forms::DockStyle::Top;
			this->barraTitulo->Location = System::Drawing::Point(0, 0);
			this->barraTitulo->Name = L"barraTitulo";
			this->barraTitulo->Size = System::Drawing::Size(781, 35);
			this->barraTitulo->TabIndex = 3;
			this->barraTitulo->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmPrincipal::barraTitulo_MouseMove);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Silver;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(226, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(208, 32);
			this->button1->TabIndex = 1;
			this->button1->Text = L"MENU PRINCIPAL";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmPrincipal::button1_MouseMove);
			// 
			// ptrMinimizar
			// 
			this->ptrMinimizar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->ptrMinimizar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ptrMinimizar.Image")));
			this->ptrMinimizar->Location = System::Drawing::Point(694, 4);
			this->ptrMinimizar->Name = L"ptrMinimizar";
			this->ptrMinimizar->Size = System::Drawing::Size(25, 25);
			this->ptrMinimizar->TabIndex = 1;
			this->ptrMinimizar->TabStop = false;
			this->ptrMinimizar->Click += gcnew System::EventHandler(this, &frmPrincipal::ptrMinimizar_Click);
			// 
			// ptrMaximizar
			// 
			this->ptrMaximizar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->ptrMaximizar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ptrMaximizar.Image")));
			this->ptrMaximizar->Location = System::Drawing::Point(725, 4);
			this->ptrMaximizar->Name = L"ptrMaximizar";
			this->ptrMaximizar->Size = System::Drawing::Size(25, 25);
			this->ptrMaximizar->TabIndex = 0;
			this->ptrMaximizar->TabStop = false;
			this->ptrMaximizar->Click += gcnew System::EventHandler(this, &frmPrincipal::ptrMaximizar_Click);
			// 
			// ptrCerrar
			// 
			this->ptrCerrar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->ptrCerrar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ptrCerrar.Image")));
			this->ptrCerrar->Location = System::Drawing::Point(756, 4);
			this->ptrCerrar->Name = L"ptrCerrar";
			this->ptrCerrar->Size = System::Drawing::Size(25, 25);
			this->ptrCerrar->TabIndex = 0;
			this->ptrCerrar->TabStop = false;
			this->ptrCerrar->Click += gcnew System::EventHandler(this, &frmPrincipal::ptrCerrar_Click);
			// 
			// frmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(781, 621);
			this->Controls->Add(this->panelContenedor);
			this->Controls->Add(this->menuVertical);
			this->Controls->Add(this->barraTitulo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"frmPrincipal";
			this->Text = L"frmPrincipal";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ptrRestaurar))->EndInit();
			this->menuVertical->ResumeLayout(false);
			this->subMenu_Reportes->ResumeLayout(false);
			this->barraTitulo->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ptrMinimizar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ptrMaximizar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ptrCerrar))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ptrMinimizar_Click(System::Object^  sender, System::EventArgs^  e) {
		this->WindowState = FormWindowState::Minimized;
	}
	private: System::Void ptrRestaurar_Click(System::Object^  sender, System::EventArgs^  e) {
		this->WindowState = FormWindowState::Normal;
		ptrMaximizar->Visible = true;
		ptrRestaurar->Visible = false;
	}
	private: System::Void ptrMaximizar_Click(System::Object^  sender, System::EventArgs^  e) {
		this->WindowState = FormWindowState::Maximized;
		ptrMaximizar->Visible = false;
		ptrRestaurar->Visible = true;
	}
	private: System::Void ptrCerrar_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}

	private: int xmove = 0;
	private: int ymove = 0;
	private: void accionMoverVentana(System::Windows::Forms::MouseEventArgs^  e) {
		if (e->Button != System::Windows::Forms::MouseButtons::Left)
		{
			xmove = e->X;
			ymove = e->Y;
		}
		else
		{
			this->Left = this->Left + (e->X - xmove);
			this->Top = this->Top + (e->Y - ymove);
		}
	}
	private: System::Void barraTitulo_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		accionMoverVentana(e);
	}
	private: System::Void button1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		accionMoverVentana(e);
	}

	private: System::Windows::Forms::Form ^activeForm = nullptr;

			 /*Procedimiento para cargar una nueva ventana*/
	private: void cargarForm(System::Windows::Forms::Form ^childForm) {
		if (activeForm != nullptr)
			activeForm->Close();
		activeForm = childForm;
		childForm->TopLevel = false;
		childForm->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		childForm->Dock = DockStyle::Fill;
		this->panelContenedor->Controls->Add(childForm);
		this->panelContenedor->Tag = childForm;
		this->panelContenedor->BringToFront();
		childForm->Show();
	}
	private: System::Void btnClientes_Click(System::Object^  sender, System::EventArgs^  e) {
		cargarForm(gcnew frmCliente());
	}
	private: System::Void btnEmpleados_Click(System::Object^  sender, System::EventArgs^  e) {
		cargarForm(gcnew frmEmpleado());
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		cargarForm(gcnew frmProveedor());
	}
	private: System::Void btnProductos_Click(System::Object^  sender, System::EventArgs^  e) {
		cargarForm(gcnew frmProducto());

	}
	};
}
