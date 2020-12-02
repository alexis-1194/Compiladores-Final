#pragma once
vector<Producto> listaProdAux;
int cantTotal = 0;

namespace ProjectFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmRegistrarVenta
	/// </summary>
	public ref class frmRegistrarVenta : public System::Windows::Forms::Form
	{
	public:
		frmRegistrarVenta(void)
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
		~frmRegistrarVenta()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  txtTOTAL;
	protected:
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  txtIGV;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  txtSUBTOTAL;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::DateTimePicker^  dtpFecha;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  lblUsuario;
	private: System::Windows::Forms::ComboBox^  cboCliente;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  txtStock;
	private: System::Windows::Forms::TextBox^  txtCantidad;
	private: System::Windows::Forms::TextBox^  txtPrecio;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  txtCodigo;
	private: System::Windows::Forms::ComboBox^  cboProducto;
	private: System::Windows::Forms::ComboBox^  cboTipoDoc;
	private: System::Windows::Forms::TextBox^  txtNumeroVenta;
	private: System::Windows::Forms::TextBox^  txtNumeroDoc;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  lblCorreo;
	private: System::Windows::Forms::Label^  lblCelular;
	private: System::Windows::Forms::Button^  btnQuitar;
	private: System::Windows::Forms::Button^  btnRegistrar;
	private: System::Windows::Forms::Button^  btnAgregar;
	private: System::Windows::Forms::Label^  lblNombre;
	private: System::Windows::Forms::Label^  lblDNI;
	private: System::Windows::Forms::DataGridView^  dgvLista;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::Button^  btnPrueba;



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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->txtTOTAL = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtIGV = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txtSUBTOTAL = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->dtpFecha = (gcnew System::Windows::Forms::DateTimePicker());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblUsuario = (gcnew System::Windows::Forms::Label());
			this->cboCliente = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtStock = (gcnew System::Windows::Forms::TextBox());
			this->txtCantidad = (gcnew System::Windows::Forms::TextBox());
			this->txtPrecio = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtCodigo = (gcnew System::Windows::Forms::TextBox());
			this->cboProducto = (gcnew System::Windows::Forms::ComboBox());
			this->cboTipoDoc = (gcnew System::Windows::Forms::ComboBox());
			this->txtNumeroVenta = (gcnew System::Windows::Forms::TextBox());
			this->txtNumeroDoc = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lblCorreo = (gcnew System::Windows::Forms::Label());
			this->lblCelular = (gcnew System::Windows::Forms::Label());
			this->btnQuitar = (gcnew System::Windows::Forms::Button());
			this->btnRegistrar = (gcnew System::Windows::Forms::Button());
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->lblNombre = (gcnew System::Windows::Forms::Label());
			this->lblDNI = (gcnew System::Windows::Forms::Label());
			this->dgvLista = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnPrueba = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLista))->BeginInit();
			this->SuspendLayout();
			// 
			// txtTOTAL
			// 
			this->txtTOTAL->Enabled = false;
			this->txtTOTAL->Location = System::Drawing::Point(151, 342);
			this->txtTOTAL->MaxLength = 40;
			this->txtTOTAL->Name = L"txtTOTAL";
			this->txtTOTAL->Size = System::Drawing::Size(125, 20);
			this->txtTOTAL->TabIndex = 211;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(232, 316);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(44, 17);
			this->label13->TabIndex = 210;
			this->label13->Text = L"TOTAL";
			// 
			// txtIGV
			// 
			this->txtIGV->Enabled = false;
			this->txtIGV->Location = System::Drawing::Point(151, 293);
			this->txtIGV->MaxLength = 40;
			this->txtIGV->Name = L"txtIGV";
			this->txtIGV->Size = System::Drawing::Size(125, 20);
			this->txtIGV->TabIndex = 209;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(245, 273);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(31, 17);
			this->label12->TabIndex = 208;
			this->label12->Text = L"IGV";
			// 
			// txtSUBTOTAL
			// 
			this->txtSUBTOTAL->Enabled = false;
			this->txtSUBTOTAL->Location = System::Drawing::Point(150, 248);
			this->txtSUBTOTAL->MaxLength = 40;
			this->txtSUBTOTAL->Name = L"txtSUBTOTAL";
			this->txtSUBTOTAL->Size = System::Drawing::Size(126, 20);
			this->txtSUBTOTAL->TabIndex = 207;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(211, 228);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(65, 17);
			this->label11->TabIndex = 206;
			this->label11->Text = L"SUBTOTAL";
			// 
			// dtpFecha
			// 
			this->dtpFecha->Enabled = false;
			this->dtpFecha->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpFecha->Location = System::Drawing::Point(90, 99);
			this->dtpFecha->Name = L"dtpFecha";
			this->dtpFecha->Size = System::Drawing::Size(96, 20);
			this->dtpFecha->TabIndex = 205;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(13, 99);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 17);
			this->label2->TabIndex = 204;
			this->label2->Text = L"Fecha";
			// 
			// lblUsuario
			// 
			this->lblUsuario->AutoSize = true;
			this->lblUsuario->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUsuario->Location = System::Drawing::Point(111, 63);
			this->lblUsuario->Name = L"lblUsuario";
			this->lblUsuario->Size = System::Drawing::Size(54, 17);
			this->lblUsuario->TabIndex = 203;
			this->lblUsuario->Text = L"Usuario";
			// 
			// cboCliente
			// 
			this->cboCliente->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cboCliente->FormattingEnabled = true;
			this->cboCliente->Location = System::Drawing::Point(11, 30);
			this->cboCliente->Name = L"cboCliente";
			this->cboCliente->Size = System::Drawing::Size(255, 21);
			this->cboCliente->TabIndex = 202;
			this->cboCliente->SelectedIndexChanged += gcnew System::EventHandler(this, &frmRegistrarVenta::cboCliente_SelectedIndexChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(12, 63);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(75, 17);
			this->label9->TabIndex = 201;
			this->label9->Text = L"Empleado";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(210, 102);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(19, 17);
			this->label8->TabIndex = 200;
			this->label8->Text = L"C";
			this->label8->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(181, 178);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(71, 17);
			this->label7->TabIndex = 199;
			this->label7->Text = L"Cantidad";
			// 
			// txtStock
			// 
			this->txtStock->BackColor = System::Drawing::Color::Silver;
			this->txtStock->Enabled = false;
			this->txtStock->Location = System::Drawing::Point(235, 99);
			this->txtStock->Name = L"txtStock";
			this->txtStock->Size = System::Drawing::Size(10, 20);
			this->txtStock->TabIndex = 198;
			this->txtStock->Visible = false;
			// 
			// txtCantidad
			// 
			this->txtCantidad->Location = System::Drawing::Point(181, 198);
			this->txtCantidad->MaxLength = 49;
			this->txtCantidad->Name = L"txtCantidad";
			this->txtCantidad->Size = System::Drawing::Size(95, 20);
			this->txtCantidad->TabIndex = 197;
			this->txtCantidad->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmRegistrarVenta::txtCantidad_KeyPress);
			this->txtCantidad->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &frmRegistrarVenta::txtCantidad_KeyUp);
			// 
			// txtPrecio
			// 
			this->txtPrecio->BackColor = System::Drawing::Color::Silver;
			this->txtPrecio->Enabled = false;
			this->txtPrecio->Location = System::Drawing::Point(91, 198);
			this->txtPrecio->MaxLength = 49;
			this->txtPrecio->Name = L"txtPrecio";
			this->txtPrecio->Size = System::Drawing::Size(74, 20);
			this->txtPrecio->TabIndex = 196;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(102, 178);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(48, 17);
			this->label6->TabIndex = 195;
			this->label6->Text = L"Precio";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(13, 178);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 17);
			this->label4->TabIndex = 194;
			this->label4->Text = L"Codigo";
			// 
			// txtCodigo
			// 
			this->txtCodigo->BackColor = System::Drawing::Color::Silver;
			this->txtCodigo->Enabled = false;
			this->txtCodigo->Location = System::Drawing::Point(11, 198);
			this->txtCodigo->MaxLength = 49;
			this->txtCodigo->Name = L"txtCodigo";
			this->txtCodigo->Size = System::Drawing::Size(74, 20);
			this->txtCodigo->TabIndex = 193;
			// 
			// cboProducto
			// 
			this->cboProducto->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cboProducto->FormattingEnabled = true;
			this->cboProducto->Location = System::Drawing::Point(11, 154);
			this->cboProducto->Name = L"cboProducto";
			this->cboProducto->Size = System::Drawing::Size(257, 21);
			this->cboProducto->TabIndex = 192;
			this->cboProducto->SelectedIndexChanged += gcnew System::EventHandler(this, &frmRegistrarVenta::cboProducto_SelectedIndexChanged);
			// 
			// cboTipoDoc
			// 
			this->cboTipoDoc->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cboTipoDoc->FormattingEnabled = true;
			this->cboTipoDoc->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"BOLETA", L"FACTURA" });
			this->cboTipoDoc->Location = System::Drawing::Point(12, 247);
			this->cboTipoDoc->Name = L"cboTipoDoc";
			this->cboTipoDoc->Size = System::Drawing::Size(126, 21);
			this->cboTipoDoc->TabIndex = 191;
			this->cboTipoDoc->SelectedIndexChanged += gcnew System::EventHandler(this, &frmRegistrarVenta::cboTipoDoc_SelectedIndexChanged);
			// 
			// txtNumeroVenta
			// 
			this->txtNumeroVenta->BackColor = System::Drawing::Color::Silver;
			this->txtNumeroVenta->Location = System::Drawing::Point(12, 342);
			this->txtNumeroVenta->MaxLength = 40;
			this->txtNumeroVenta->Name = L"txtNumeroVenta";
			this->txtNumeroVenta->Size = System::Drawing::Size(125, 20);
			this->txtNumeroVenta->TabIndex = 190;
			// 
			// txtNumeroDoc
			// 
			this->txtNumeroDoc->BackColor = System::Drawing::Color::Silver;
			this->txtNumeroDoc->Enabled = false;
			this->txtNumeroDoc->Location = System::Drawing::Point(12, 293);
			this->txtNumeroDoc->MaxLength = 40;
			this->txtNumeroDoc->Name = L"txtNumeroDoc";
			this->txtNumeroDoc->Size = System::Drawing::Size(126, 20);
			this->txtNumeroDoc->TabIndex = 189;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(13, 316);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 17);
			this->label5->TabIndex = 188;
			this->label5->Text = L"Venta Nro.";
			// 
			// lblCorreo
			// 
			this->lblCorreo->AutoSize = true;
			this->lblCorreo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCorreo->Location = System::Drawing::Point(12, 273);
			this->lblCorreo->Name = L"lblCorreo";
			this->lblCorreo->Size = System::Drawing::Size(133, 17);
			this->lblCorreo->TabIndex = 187;
			this->lblCorreo->Text = L"Nro. Comprobante";
			// 
			// lblCelular
			// 
			this->lblCelular->AutoSize = true;
			this->lblCelular->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCelular->Location = System::Drawing::Point(13, 228);
			this->lblCelular->Name = L"lblCelular";
			this->lblCelular->Size = System::Drawing::Size(132, 17);
			this->lblCelular->TabIndex = 186;
			this->lblCelular->Text = L"Tipo Comprobante";
			// 
			// btnQuitar
			// 
			this->btnQuitar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnQuitar->Location = System::Drawing::Point(151, 406);
			this->btnQuitar->Name = L"btnQuitar";
			this->btnQuitar->Size = System::Drawing::Size(125, 23);
			this->btnQuitar->TabIndex = 185;
			this->btnQuitar->Text = L"Eliminar";
			this->btnQuitar->UseVisualStyleBackColor = true;
			this->btnQuitar->Click += gcnew System::EventHandler(this, &frmRegistrarVenta::btnQuitar_Click);
			// 
			// btnRegistrar
			// 
			this->btnRegistrar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegistrar->Location = System::Drawing::Point(151, 435);
			this->btnRegistrar->Name = L"btnRegistrar";
			this->btnRegistrar->Size = System::Drawing::Size(126, 23);
			this->btnRegistrar->TabIndex = 184;
			this->btnRegistrar->Text = L"Registrar venta";
			this->btnRegistrar->UseVisualStyleBackColor = true;
			this->btnRegistrar->Click += gcnew System::EventHandler(this, &frmRegistrarVenta::btnRegistrar_Click);
			// 
			// btnAgregar
			// 
			this->btnAgregar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAgregar->Location = System::Drawing::Point(150, 377);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(126, 23);
			this->btnAgregar->TabIndex = 183;
			this->btnAgregar->Text = L"Agregar";
			this->btnAgregar->UseVisualStyleBackColor = true;
			this->btnAgregar->Click += gcnew System::EventHandler(this, &frmRegistrarVenta::btnAgregar_Click);
			// 
			// lblNombre
			// 
			this->lblNombre->AutoSize = true;
			this->lblNombre->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNombre->Location = System::Drawing::Point(13, 134);
			this->lblNombre->Name = L"lblNombre";
			this->lblNombre->Size = System::Drawing::Size(68, 17);
			this->lblNombre->TabIndex = 182;
			this->lblNombre->Text = L"Producto";
			// 
			// lblDNI
			// 
			this->lblDNI->AutoSize = true;
			this->lblDNI->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDNI->Location = System::Drawing::Point(13, 10);
			this->lblDNI->Name = L"lblDNI";
			this->lblDNI->Size = System::Drawing::Size(54, 17);
			this->lblDNI->TabIndex = 181;
			this->lblDNI->Text = L"Cliente";
			// 
			// dgvLista
			// 
			this->dgvLista->AllowUserToAddRows = false;
			this->dgvLista->AllowUserToDeleteRows = false;
			this->dgvLista->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvLista->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dgvLista->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dgvLista->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)));
			this->dgvLista->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dgvLista->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::HotTrack;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvLista->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dgvLista->ColumnHeadersHeight = 30;
			this->dgvLista->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dgvLista->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1, this->Column2,
					this->Column4, this->Column5, this->Column6
			});
			this->dgvLista->EnableHeadersVisualStyles = false;
			this->dgvLista->GridColor = System::Drawing::Color::SteelBlue;
			this->dgvLista->Location = System::Drawing::Point(282, 30);
			this->dgvLista->Name = L"dgvLista";
			this->dgvLista->ReadOnly = true;
			this->dgvLista->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::SteelBlue;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvLista->RowHeadersDefaultCellStyle = dataGridViewCellStyle2;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::SteelBlue;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::White;
			this->dgvLista->RowsDefaultCellStyle = dataGridViewCellStyle3;
			this->dgvLista->Size = System::Drawing::Size(442, 462);
			this->dgvLista->TabIndex = 180;
			this->dgvLista->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmRegistrarVenta::dgvLista_CellClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Codigo";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 81;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombre";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 84;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Precio";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 71;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Cantidad";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 94;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Monto";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Width = 73;
			// 
			// btnPrueba
			// 
			this->btnPrueba->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPrueba->Location = System::Drawing::Point(150, 464);
			this->btnPrueba->Name = L"btnPrueba";
			this->btnPrueba->Size = System::Drawing::Size(126, 23);
			this->btnPrueba->TabIndex = 212;
			this->btnPrueba->Text = L"Prueba";
			this->btnPrueba->UseVisualStyleBackColor = true;
			this->btnPrueba->Click += gcnew System::EventHandler(this, &frmRegistrarVenta::btnPrueba_Click);
			// 
			// frmRegistrarVenta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(735, 503);
			this->Controls->Add(this->btnPrueba);
			this->Controls->Add(this->txtTOTAL);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->txtIGV);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->txtSUBTOTAL);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->dtpFecha);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lblUsuario);
			this->Controls->Add(this->cboCliente);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtStock);
			this->Controls->Add(this->txtCantidad);
			this->Controls->Add(this->txtPrecio);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtCodigo);
			this->Controls->Add(this->cboProducto);
			this->Controls->Add(this->cboTipoDoc);
			this->Controls->Add(this->txtNumeroVenta);
			this->Controls->Add(this->txtNumeroDoc);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->lblCorreo);
			this->Controls->Add(this->lblCelular);
			this->Controls->Add(this->btnQuitar);
			this->Controls->Add(this->btnRegistrar);
			this->Controls->Add(this->btnAgregar);
			this->Controls->Add(this->lblNombre);
			this->Controls->Add(this->lblDNI);
			this->Controls->Add(this->dgvLista);
			this->Name = L"frmRegistrarVenta";
			this->Text = L"frmRegistrarVenta";
			this->Load += gcnew System::EventHandler(this, &frmRegistrarVenta::frmRegistrarVenta_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLista))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: static int opc = 0;
	private: static int tipoDoc = 0, tipoProducto = 0, cCliente = 0;

	private: void cargarCliente() {
		listaClientes = daoCliente.consultar();
		for (int i = 0; i < (int)listaClientes.size(); i++) {
			cboCliente->Items->Add(gcnew String(listaClientes[i].getNombre())
				+ " " + gcnew String(listaClientes[i].getApellidos()));
		}
	}

			 /*private: void codigoCliente(vector<Cliente> lista) {
				 lista = daoCliente.consultar();
				 for (int i = 0; i < (int)lista.size(); i++) {
					 if (cboCliente->SelectedItem->Equals)
				 }
			 }*/

	private: void cargarProducto() {
		listaProductos = daoProducto.consultar();
		for (int i = 0; i < (int)listaProductos.size(); i++) {
			cboProducto->Items->Add(gcnew String(listaProductos[i].getDescripcion()));
		}
	}

	private: void CodigoBoleta() {
		char cod[11]; int n = 0;
		vector<Boleta> lista = daoBoleta.consultar();
		for (Boleta pro : lista) {//B_00001 -> 0000010
			strcpy_s(cod, pro.getCodigo());//copia hasta quedar con el ultimo
		}

		char replaceCod[11];
		strcpy_s(replaceCod, Global::replaceFirst(cod, 'B', '0'));
		strcpy_s(replaceCod, Global::replaceFirst(cod, '_', '0'));

		n = Convert::ToInt32(replaceCod);
		n++;

		if (n < 10)
			/*Se asigna un formato al codigo */
			txtNumeroDoc->Text = gcnew String("B_0000" + n);
		else if (n < 100)
			txtNumeroDoc->Text = gcnew String("B_000" + n);
		else if (n < 1000)
			txtNumeroDoc->Text = gcnew String("B_00" + n);
		else if (n < 10000)
			txtNumeroDoc->Text = gcnew String("B_0" + n);
		else if (n < 100000)
			txtNumeroDoc->Text = gcnew String("B_" + n);
		else
			MessageBox::Show("Supero el maximo de boletas");
	}

	private: void CodigoFactura() {//F_00001
		char cod[11]; int n = 0;
		vector<Factura> lista = daoFactura.consultar();
		for (Factura pro : lista) {
			strcpy_s(cod, pro.getCodigo());//copia hasta quedar con el ultimo
		}

		char replaceCod[11];;
		strcpy_s(replaceCod, Global::replaceFirst(cod, 'F', '0'));
		strcpy_s(replaceCod, Global::replaceFirst(cod, '_', '0'));

		n = atoi(replaceCod);
		n++;

		if (n < 10)
			/*Se asigna un formato al codigo */
			txtNumeroDoc->Text = gcnew String("F_0000" + n);
		else if (n < 100)
			txtNumeroDoc->Text = gcnew String("F_000" + n);
		else if (n < 1000)
			txtNumeroDoc->Text = gcnew String("F_00" + n);
		else if (n < 10000)
			txtNumeroDoc->Text = gcnew String("F_0" + n);
		else if (n < 100000)
			txtNumeroDoc->Text = gcnew String("F_" + n);
		else
			MessageBox::Show("Supero el maximo de facturas");
	}

	private: void Codigo() {//Cargar codigo venta
		char cod[11]; int n = 0;
		vector<Venta> lista = daoVenta.consultar();
		for (Venta pro : lista) {//V_00001
			strcpy_s(cod, pro.getCodigo());//copia hasta quedar con el ultimo
		}

		char replaceCod[11];
		strcpy_s(replaceCod, Global::replaceFirst(cod, 'V', '0'));
		strcpy_s(replaceCod, Global::replaceFirst(cod, '_', '0'));

		n = atoi(replaceCod);
		n++;
		if (n < 10)
			/*Se asigna un formato al codigo */
			txtNumeroVenta->Text = gcnew String("V_0000" + n);
		else if (n < 100)
			txtNumeroVenta->Text = gcnew String("V_000" + n);
		else if (n < 1000)
			txtNumeroVenta->Text = gcnew String("V_00" + n);
		else if (n < 10000)
			txtNumeroVenta->Text = gcnew String("V_0" + n);
		else if (n < 100000)
			txtNumeroVenta->Text = gcnew String("V_" + n);
		else
			MessageBox::Show("Supero el maximo de facturas");
	}


	private: static String^ codigo_Cliente;//campo a guardar en la tabla venta(COD_CLIENTE)

	private: System::Void cboCliente_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

		cCliente = cboCliente->SelectedIndex + 1;//

		codigo_Cliente = gcnew String(listaClientes[cCliente - 1].getCodigo());

	}
	private: System::Void cboTipoDoc_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		tipoDoc = cboTipoDoc->SelectedIndex + 1;//boleta - factura
		if (tipoDoc == 1) {
			CodigoBoleta();
		}
		else if (tipoDoc == 2) {
			CodigoFactura();
		}
	}


	private: System::Void cboProducto_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		tipoProducto = cboProducto->SelectedIndex + 1;
		txtCodigo->Text = gcnew String(listaProductos[tipoProducto - 1].getCodigo());
		txtPrecio->Text = Convert::ToString(listaProductos[tipoProducto - 1].getPrecioVenta());
		txtStock->Text = Convert::ToString(listaProductos[tipoProducto - 1].getCantidad());
		txtCantidad->Enabled = true;
	}
	private: System::Void frmRegistrarVenta_Load(System::Object^  sender, System::EventArgs^  e) {
		lblUsuario->Text = gcnew String(empleadoActual);
		cargarCliente();//combobox cliente
		cargarProducto();//combox producto
		Codigo();//codigo venta
		txtCantidad->Enabled = false;
	}
			 //Agregar detalle producto
	private: void agregarProductoAux(Producto dato) {

		Producto aux;
		aux.setCodigo(dato.getCodigo());
		aux.setDescripcion(dato.getDescripcion());
		aux.setPrecioVenta(dato.getPrecioVenta());
		aux.setCantidad(dato.getCantidad());

		listaProdAux.push_back(aux);
	}
			 //Quitar detalle producto
	private: void eliminarProductoAux(Producto dato) {
		for (int i = 0; i < (int)listaProdAux.size(); i++) {
			if (strcmp(listaProdAux[i].getCodigo(), dato.getCodigo()) == 0) {
				listaProdAux.erase(listaProdAux.begin() + i);//borrar elemento
				break;
			}
		}
	}

	private: void imprimir(vector<Producto> Ex) {
		double SubTotal = 0;
		dgvLista->Rows->Clear();
		double importe = 0, igv = 0, tot = 0;

		for (int i = 0; i < (int)Ex.size(); i++) {
			dgvLista->Rows->Add(gcnew String(Ex[i].getCodigo()),
				gcnew String(Ex[i].getDescripcion()),
				Convert::ToDouble(Ex[i].getPrecioVenta()),
				Convert::ToInt32(Ex[i].getCantidad()),
				importe = Ex[i].getPrecioVenta() * Ex[i].getCantidad()
			);
			SubTotal += Convert::ToDouble(importe);
			igv = 0.18*SubTotal;
			tot = SubTotal + igv;
		}
		//
		txtSUBTOTAL->Text = Convert::ToString(SubTotal);
		txtIGV->Text = Convert::ToString(igv);
		txtTOTAL->Text = Convert::ToString(tot);
	}

	private: System::Void btnAgregar_Click(System::Object^  sender, System::EventArgs^  e) {
		//opc = 1;
		if (txtCodigo->Text == "") {
			MessageBox::Show("Elija tipo producto.");
		}
		else if (txtPrecio->Text == "") {
			MessageBox::Show("Elija tipo de producto.");
		}
		else if (txtCantidad->Text == "") {
			MessageBox::Show("Proporcione una cantidad de producto.");
		}
		else if (Convert::ToInt32(txtCantidad->Text) == 0) {
			MessageBox::Show("Agrege cantidad diferente de 0.");
		}
		else {
			Producto pro;
			//ProductoDAO dao;
			pro.setCodigo(Global::StringToChar(txtCodigo->Text));
			pro.setDescripcion(Global::StringToChar(cboProducto->SelectedItem->ToString()));
			pro.setPrecioVenta(Convert::ToDouble(txtPrecio->Text));
			pro.setCantidad(Convert::ToInt32(txtCantidad->Text));

			agregarProductoAux(pro);
			imprimir(listaProdAux);//dataGrid
		}
	}
	private: System::Void btnQuitar_Click(System::Object^  sender, System::EventArgs^  e) {
		if (dgvLista->RowCount == NULL) {
			MessageBox::Show("Detalle vacio");
		}
		else if (txtCodigo->Text == "") {
			MessageBox::Show("Seleccione producto");
		}
		else {
			Producto pro;
			//ProductoDAO dao;

			pro.setCodigo(Global::StringToChar(txtCodigo->Text));
			eliminarProductoAux(pro);
			imprimir(listaProdAux);

			txtCodigo->Text = "";
			txtPrecio->Text = "";
			txtCantidad->Text = "";

		}
	}

	private: static int acumCantidad = 0;

	private: bool modificarStockPrueba(vector<Producto> listaOrigen) {
		int ctaux = 0;
		vector<Producto> lista(listaOrigen);
		//vector<Producto> lista = daoProducto.consultar();
		bool estado = true;
		for (int i = 0; i < dgvLista->RowCount; i++) {
			Producto datopro;
			String ^m1;
			m1 = Convert::ToString(dgvLista->Rows[i]->Cells[0]->Value);//codigo
			datopro.setCodigo(Global::StringToChar(m1));
			int cant = Convert::ToInt32(dgvLista->Rows[i]->Cells[3]->Value);
			ctaux += cant;/*acumula las cantidades
						  de los productos del mismo tipo*/
			datopro.setCantidad(ctaux);//Se establece la cantidad total a vender

			/*bool estado = false;*/
			for (int i = 0; i < (int)lista.size(); i++) {

				if (strcmp(lista[i].getCodigo(), datopro.getCodigo()) == 0) {

					//Cantidad mayor a Stock registrado

					if (lista[i].getCantidad() < datopro.getCantidad()) {
						MessageBox::Show("Se ha superado el limite de productos "
							+ "Codigo: " + gcnew String(lista[i].getCodigo()));
						return false;
					}

					//Cantidad igual Stock registrado 
					else if (lista[i].getCantidad() == datopro.getCantidad()) {
						MessageBox::Show("Se agotaron los productos "
							+ "Codigo: " + gcnew String(lista[i].getCodigo()));
						lista[i].setCantidad(lista[i].getCantidad() - datopro.getCantidad());
						acumCantidad = lista[i].getCantidad();
						bool estado = true;
					}
					//Cantidad menor a Stock registrado
					else {
						lista[i].setCantidad(lista[i].getCantidad() - datopro.getCantidad());
						acumCantidad = lista[i].getCantidad();
						bool estado = true;
					}
				}
			}
			if (estado == false) {
				MessageBox::Show("Verifique Stock de productos");
			}
		}
		return estado;
	}
			 //modifico en la base de datos
	private: void modifcarBD() {

		int st = 0;
		for (int i = 0; i < dgvLista->RowCount; i++) {
			Producto datopro;
			datopro.setCodigo(Global::StringToChar(dgvLista->Rows[i]->Cells[0]->Value->ToString()));
			int st = Convert::ToInt32(dgvLista->Rows[i]->Cells[3]->Value);
			cantTotal += st;
			datopro.setCantidad(st);
			/*Actualizar tabla producto*/
			try {

				SqlConnection ^cn = Conexion::getConnection();
				cn->Open();
				SqlCommand ^command = gcnew SqlCommand();
				command->Connection = cn;
				command->CommandText =
					"UPDATE Productos SET cantidad=@cantidad" +
					" WHERE codigo = @codigo";
				command->Parameters->AddWithValue("@codigo", dgvLista->Rows[i]->Cells[0]->Value->ToString());
				command->Parameters->AddWithValue("@cantidad", acumCantidad);
				command->ExecuteNonQuery();
				cn->Close();

			}

			catch (Exception ^exs) {
				MessageBox::Show(exs->Message);
			}
		}

	}

	private: System::Void btnRegistrar_Click(System::Object^  sender, System::EventArgs^  e) {
		if (cboCliente->SelectedIndex == -1) {
			MessageBox::Show("Seleccione cliente.");
		}
		else if (cboTipoDoc->SelectedIndex == -1) {
			MessageBox::Show("Seleccione comprobante.");
		}
		else if (cboProducto->SelectedIndex == -1) {
			MessageBox::Show("Elija tipo producto.");
		}
		else if (txtCantidad->Text->Trim() == "") {
			MessageBox::Show("Digite cantidad.");
		}
		else if (dgvLista->RowCount == NULL) {
			MessageBox::Show("Agregar detalle.");
		}
		else {
			Venta dato;
			VentaDAO dao;
			dato.setCodigo(Global::StringToChar(txtNumeroVenta->Text));
			dato.setCliente(Global::StringToChar(codigo_Cliente));
			dato.setEmpleado(Global::StringToChar(lblUsuario->Text));

			dato.setTipoComprobante(Global::StringToChar(cboTipoDoc->SelectedItem->ToString()));
			dato.setCodigoComprobante(Global::StringToChar(txtNumeroDoc->Text));

			dato.setSubTotal(Convert::ToDouble(txtSUBTOTAL->Text));
			dato.setIgv(Convert::ToDouble(txtIGV->Text));
			dato.setTotal(Convert::ToDouble(txtTOTAL->Text));

			DateTime f = dtpFecha->Value;
			int dia = Convert::ToInt32(f.Day);
			int mes = Convert::ToInt32(f.Month);
			int anio = Convert::ToInt32(f.Year);

			String ^fecha = anio + "-" + mes + "-" + dia;

			dato.setFecha(Global::StringToChar(fecha));


			//Trae la lista original
			vector<Producto> listaAux = daoProducto.consultar();

			bool estado = modificarStockPrueba(listaAux);//se ejececuta modificar prueba

			if (estado) {
				modifcarBD();//modificando la base de datos
				Boleta bo;
				Factura fa;

				if (tipoDoc == 1) {//boleta -> codigo boleta
					bo.setCodigo(Global::StringToChar(txtNumeroDoc->Text));
					bo.setNumero("B879-9789");//
					daoBoleta.boletaProcesar(bo, 1);
				}
				else {//factura -> codigo boleta
					fa.setCodigo(Global::StringToChar(txtNumeroDoc->Text));
					fa.setNumero("F879-9789");//
					daoFactura.facturaProcesar(fa, 1);
				}

				daoVenta.ventaProcesar(dato, 1);//insertar en la tabla venta
				for (int i = 0; i < dgvLista->RowCount; i++) {
					Detalle datoPro;

					datoPro.setCodigo(Global::StringToChar(dgvLista->Rows[i]->Cells[0]->Value->ToString()));
					datoPro.setDescripcion(Global::StringToChar(dgvLista->Rows[i]->Cells[1]->Value->ToString()));
					datoPro.setPrecio(Convert::ToDouble(dgvLista->Rows[i]->Cells[2]->Value));
					datoPro.setCantidad(Convert::ToInt32(dgvLista->Rows[i]->Cells[3]->Value));
					datoPro.setSubTotal(Convert::ToDouble(dgvLista->Rows[i]->Cells[4]->Value));
					datoPro.setCodigoVenta(dato.getCodigo());//

					daoDetalle.procesarDetalle(datoPro, 1);

					/*frmReporte ^m = gcnew frmReporte();
					m->TopLevel = false;
					m->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
					this->Controls->Add(m);
					this->Tag = m;

					m->BringToFront();

					m->Show();*/
				}
			}

			/*txtCantidad->Text = "";
			txtCodigo->Text = "", txtPrecio->Text = "",
				txtSUBTOTAL->Text = "", txtIGV->Text = "", txtTOTAL->Text = "",
				dgvLista->Rows->Clear();*/

			Codigo();//codigo venta
		}
	}

	private: System::Void dgvLista_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		if (dgvLista->RowCount != 0) {
			txtCodigo->Text = dgvLista->CurrentRow->Cells[0]->Value->ToString();
			cboProducto->SelectedItem = dgvLista->CurrentRow->Cells[1]->Value->ToString();
			txtPrecio->Text = dgvLista->CurrentRow->Cells[2]->Value->ToString();
			txtCantidad->Text = dgvLista->CurrentRow->Cells[3]->Value->ToString();
			txtStock->Text = dgvLista->CurrentRow->Cells[3]->Value->ToString();
		}
	}

	private: bool compararStock(vector<Producto> lista, Producto dato) {
		bool estado = true;
		for (int i = 0; i < (int)lista.size(); i++) {
			if (strcmp(lista[i].getCodigo(), dato.getCodigo()) == 0) {
				if (lista[i].getCantidad() < dato.getCantidad()) {
					MessageBox::Show("Solo quedan: " + lista[i].getCantidad()
						+ " en stock");
					txtCantidad->Text = "1";
					return false;
				}
			}
		}
		return estado;
	}
			 //
	private: System::Void txtCantidad_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		Producto dato;
		try {
			dato.setCodigo(Global::StringToChar(txtCodigo->Text));
			if (!txtCantidad->Text->Trim()->Equals("")) {
				dato.setCantidad(Convert::ToInt32(txtCantidad->Text->Trim()));
				compararStock(listaProductos, dato);
			}
		}
		catch (Exception ^exs) {
			MessageBox::Show("Error");
			txtCantidad->Text = "1";
		}

	}

	private: System::Void btnPrueba_Click(System::Object^  sender, System::EventArgs^  e) {
		frmReporte ^m = gcnew frmReporte();
		m->TopLevel = false;
		m->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		this->Controls->Add(m);
		this->Tag = m;

		m->BringToFront();

		m->Show();
	}

	private: System::Void txtCantidad_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (Char::IsDigit(e->KeyChar)) {
			e->Handled = false;
		}
		else if (Char::IsControl(e->KeyChar)) {
			e->Handled = false;
		}
		else {
			e->Handled = true;
			/*MessageBox::Show("Solo numeros");*/
		}
	}
	};
}
