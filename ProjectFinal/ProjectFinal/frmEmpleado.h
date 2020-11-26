#pragma once

namespace ProjectFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmEmpleado
	/// </summary>
	public ref class frmEmpleado : public System::Windows::Forms::Form
	{
	public:
		frmEmpleado(void)
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
		~frmEmpleado()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:





	private: System::Windows::Forms::Button^  btnGrabar;
	private: System::Windows::Forms::Button^  btnEliminar;
	private: System::Windows::Forms::Button^  btnModificar;
	private: System::Windows::Forms::Button^  btnCancelar;
	private: System::Windows::Forms::Button^  btnNuevo;





	private: System::Windows::Forms::DataGridView^  dgvLista;








	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  txtCodigo;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txtPass;
	private: System::Windows::Forms::TextBox^  txtUsu;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  txtBuscar;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DateTimePicker^  dtpFecha;
	private: System::Windows::Forms::TextBox^  txtNombre;
	private: System::Windows::Forms::TextBox^  txtCelular;
	private: System::Windows::Forms::TextBox^  txtCorreo;
	private: System::Windows::Forms::TextBox^  txtDNI;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  lblCorreo;
	private: System::Windows::Forms::Label^  lblCelular;
	private: System::Windows::Forms::Label^  lblNombre;
	private: System::Windows::Forms::Label^  lblDNI;
	private: System::Windows::Forms::TextBox^  txtApellidos;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column9;








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
			this->btnGrabar = (gcnew System::Windows::Forms::Button());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->btnModificar = (gcnew System::Windows::Forms::Button());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->btnNuevo = (gcnew System::Windows::Forms::Button());
			this->dgvLista = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txtApellidos = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtCodigo = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtPass = (gcnew System::Windows::Forms::TextBox());
			this->txtUsu = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtBuscar = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dtpFecha = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->txtCelular = (gcnew System::Windows::Forms::TextBox());
			this->txtCorreo = (gcnew System::Windows::Forms::TextBox());
			this->txtDNI = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lblCorreo = (gcnew System::Windows::Forms::Label());
			this->lblCelular = (gcnew System::Windows::Forms::Label());
			this->lblNombre = (gcnew System::Windows::Forms::Label());
			this->lblDNI = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLista))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnGrabar
			// 
			this->btnGrabar->Enabled = false;
			this->btnGrabar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGrabar->Location = System::Drawing::Point(522, 109);
			this->btnGrabar->Name = L"btnGrabar";
			this->btnGrabar->Size = System::Drawing::Size(75, 23);
			this->btnGrabar->TabIndex = 110;
			this->btnGrabar->Text = L"Grabar";
			this->btnGrabar->UseVisualStyleBackColor = true;
			this->btnGrabar->Click += gcnew System::EventHandler(this, &frmEmpleado::btnGrabar_Click);
			// 
			// btnEliminar
			// 
			this->btnEliminar->Enabled = false;
			this->btnEliminar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEliminar->Location = System::Drawing::Point(522, 85);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(75, 23);
			this->btnEliminar->TabIndex = 109;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &frmEmpleado::btnEliminar_Click);
			// 
			// btnModificar
			// 
			this->btnModificar->Enabled = false;
			this->btnModificar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnModificar->Location = System::Drawing::Point(522, 61);
			this->btnModificar->Name = L"btnModificar";
			this->btnModificar->Size = System::Drawing::Size(75, 23);
			this->btnModificar->TabIndex = 108;
			this->btnModificar->Text = L"Modificar";
			this->btnModificar->UseVisualStyleBackColor = true;
			this->btnModificar->Click += gcnew System::EventHandler(this, &frmEmpleado::btnModificar_Click);
			// 
			// btnCancelar
			// 
			this->btnCancelar->Enabled = false;
			this->btnCancelar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancelar->Location = System::Drawing::Point(522, 37);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(75, 23);
			this->btnCancelar->TabIndex = 107;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = true;
			this->btnCancelar->Click += gcnew System::EventHandler(this, &frmEmpleado::btnCancelar_Click);
			// 
			// btnNuevo
			// 
			this->btnNuevo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNuevo->Location = System::Drawing::Point(522, 12);
			this->btnNuevo->Name = L"btnNuevo";
			this->btnNuevo->Size = System::Drawing::Size(75, 23);
			this->btnNuevo->TabIndex = 106;
			this->btnNuevo->Text = L"Nuevo";
			this->btnNuevo->UseVisualStyleBackColor = true;
			this->btnNuevo->Click += gcnew System::EventHandler(this, &frmEmpleado::btnNuevo_Click);
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
			this->dgvLista->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Column1, this->Column2,
					this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9
			});
			this->dgvLista->EnableHeadersVisualStyles = false;
			this->dgvLista->GridColor = System::Drawing::Color::SteelBlue;
			this->dgvLista->Location = System::Drawing::Point(16, 241);
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
			this->dgvLista->Size = System::Drawing::Size(581, 199);
			this->dgvLista->TabIndex = 100;
			this->dgvLista->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmEmpleado::dgvLista_CellClick);
			this->dgvLista->CellFormatting += gcnew System::Windows::Forms::DataGridViewCellFormattingEventHandler(this, &frmEmpleado::dgvLista_CellFormatting);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"CODIGO";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 88;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"DNI";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 54;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"USERNAME";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 97;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"PASSWORD";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 102;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"NOMBRES";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 91;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"APELLIDOS";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Width = 97;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"TELEFONO";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->Width = 94;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"EMAIL";
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			this->Column8->Width = 67;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"FECHANAC";
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
			this->Column9->Width = 103;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->txtApellidos);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->txtCodigo);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->txtPass);
			this->groupBox1->Controls->Add(this->txtUsu);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->txtBuscar);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->dtpFecha);
			this->groupBox1->Controls->Add(this->txtNombre);
			this->groupBox1->Controls->Add(this->txtCelular);
			this->groupBox1->Controls->Add(this->txtCorreo);
			this->groupBox1->Controls->Add(this->txtDNI);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->lblCorreo);
			this->groupBox1->Controls->Add(this->lblCelular);
			this->groupBox1->Controls->Add(this->lblNombre);
			this->groupBox1->Controls->Add(this->lblDNI);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(504, 210);
			this->groupBox1->TabIndex = 119;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"DATOS";
			// 
			// txtApellidos
			// 
			this->txtApellidos->Enabled = false;
			this->txtApellidos->Location = System::Drawing::Point(143, 100);
			this->txtApellidos->MaxLength = 49;
			this->txtApellidos->Name = L"txtApellidos";
			this->txtApellidos->Size = System::Drawing::Size(219, 20);
			this->txtApellidos->TabIndex = 129;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(8, 102);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(66, 17);
			this->label6->TabIndex = 128;
			this->label6->Text = L"Apellidos";
			// 
			// txtCodigo
			// 
			this->txtCodigo->Enabled = false;
			this->txtCodigo->Location = System::Drawing::Point(143, 19);
			this->txtCodigo->MaxLength = 10;
			this->txtCodigo->Name = L"txtCodigo";
			this->txtCodigo->Size = System::Drawing::Size(219, 20);
			this->txtCodigo->TabIndex = 136;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(8, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 17);
			this->label2->TabIndex = 135;
			this->label2->Text = L"Codigo";
			// 
			// txtPass
			// 
			this->txtPass->Enabled = false;
			this->txtPass->Location = System::Drawing::Point(380, 96);
			this->txtPass->MaxLength = 29;
			this->txtPass->Name = L"txtPass";
			this->txtPass->Size = System::Drawing::Size(115, 20);
			this->txtPass->TabIndex = 134;
			this->txtPass->UseSystemPasswordChar = true;
			// 
			// txtUsu
			// 
			this->txtUsu->Enabled = false;
			this->txtUsu->Location = System::Drawing::Point(380, 45);
			this->txtUsu->MaxLength = 29;
			this->txtUsu->Name = L"txtUsu";
			this->txtUsu->Size = System::Drawing::Size(115, 20);
			this->txtUsu->TabIndex = 133;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(377, 73);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(94, 17);
			this->label4->TabIndex = 132;
			this->label4->Text = L"CONTRASEÑA";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(377, 21);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 17);
			this->label3->TabIndex = 131;
			this->label3->Text = L"USUARIO";
			// 
			// txtBuscar
			// 
			this->txtBuscar->Enabled = false;
			this->txtBuscar->Location = System::Drawing::Point(390, 182);
			this->txtBuscar->MaxLength = 8;
			this->txtBuscar->Name = L"txtBuscar";
			this->txtBuscar->Size = System::Drawing::Size(16, 20);
			this->txtBuscar->TabIndex = 130;
			this->txtBuscar->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(265, 183);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(119, 17);
			this->label1->TabIndex = 129;
			this->label1->Text = L"Modificar codigo";
			this->label1->Visible = false;
			// 
			// dtpFecha
			// 
			this->dtpFecha->Enabled = false;
			this->dtpFecha->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpFecha->Location = System::Drawing::Point(143, 179);
			this->dtpFecha->Name = L"dtpFecha";
			this->dtpFecha->Size = System::Drawing::Size(98, 20);
			this->dtpFecha->TabIndex = 128;
			// 
			// txtNombre
			// 
			this->txtNombre->Enabled = false;
			this->txtNombre->Location = System::Drawing::Point(143, 71);
			this->txtNombre->MaxLength = 49;
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(219, 20);
			this->txtNombre->TabIndex = 127;
			// 
			// txtCelular
			// 
			this->txtCelular->Enabled = false;
			this->txtCelular->Location = System::Drawing::Point(143, 126);
			this->txtCelular->MaxLength = 9;
			this->txtCelular->Name = L"txtCelular";
			this->txtCelular->Size = System::Drawing::Size(219, 20);
			this->txtCelular->TabIndex = 126;
			// 
			// txtCorreo
			// 
			this->txtCorreo->Enabled = false;
			this->txtCorreo->Location = System::Drawing::Point(143, 153);
			this->txtCorreo->MaxLength = 40;
			this->txtCorreo->Name = L"txtCorreo";
			this->txtCorreo->Size = System::Drawing::Size(219, 20);
			this->txtCorreo->TabIndex = 125;
			// 
			// txtDNI
			// 
			this->txtDNI->Enabled = false;
			this->txtDNI->Location = System::Drawing::Point(143, 45);
			this->txtDNI->MaxLength = 8;
			this->txtDNI->Name = L"txtDNI";
			this->txtDNI->Size = System::Drawing::Size(219, 20);
			this->txtDNI->TabIndex = 124;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(8, 183);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 17);
			this->label5->TabIndex = 123;
			this->label5->Text = L"Fecha Nac.";
			// 
			// lblCorreo
			// 
			this->lblCorreo->AutoSize = true;
			this->lblCorreo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCorreo->Location = System::Drawing::Point(8, 155);
			this->lblCorreo->Name = L"lblCorreo";
			this->lblCorreo->Size = System::Drawing::Size(129, 17);
			this->lblCorreo->TabIndex = 122;
			this->lblCorreo->Text = L"Correo Electronico";
			// 
			// lblCelular
			// 
			this->lblCelular->AutoSize = true;
			this->lblCelular->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCelular->Location = System::Drawing::Point(8, 129);
			this->lblCelular->Name = L"lblCelular";
			this->lblCelular->Size = System::Drawing::Size(54, 17);
			this->lblCelular->TabIndex = 121;
			this->lblCelular->Text = L"Celular";
			// 
			// lblNombre
			// 
			this->lblNombre->AutoSize = true;
			this->lblNombre->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNombre->Location = System::Drawing::Point(8, 73);
			this->lblNombre->Name = L"lblNombre";
			this->lblNombre->Size = System::Drawing::Size(61, 17);
			this->lblNombre->TabIndex = 120;
			this->lblNombre->Text = L"Nombre";
			// 
			// lblDNI
			// 
			this->lblDNI->AutoSize = true;
			this->lblDNI->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDNI->Location = System::Drawing::Point(8, 48);
			this->lblDNI->Name = L"lblDNI";
			this->lblDNI->Size = System::Drawing::Size(31, 17);
			this->lblDNI->TabIndex = 119;
			this->lblDNI->Text = L"DNI";
			// 
			// frmEmpleado
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(610, 450);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->btnGrabar);
			this->Controls->Add(this->btnEliminar);
			this->Controls->Add(this->btnModificar);
			this->Controls->Add(this->btnCancelar);
			this->Controls->Add(this->btnNuevo);
			this->Controls->Add(this->dgvLista);
			this->Name = L"frmEmpleado";
			this->Text = L"frmEmpleado";
			this->Load += gcnew System::EventHandler(this, &frmEmpleado::frmEmpleado_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLista))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: static int opc;//cambiar a "private: static in opc;"

	private: void habilitar() {
		opc = 1;
		btnNuevo->Enabled = false;
		btnModificar->Enabled = false;
		btnEliminar->Enabled = false;
		btnGrabar->Enabled = true;
		btnCancelar->Enabled = true;
		dgvLista->Enabled = false;
		dtpFecha->Enabled = true;

		//txtCodigo->Enabled = true;
		txtDNI->Enabled = true; txtUsu->Enabled = true; txtPass->Enabled = true; txtNombre->Enabled = true;
		txtApellidos->Enabled = true; txtCelular->Enabled = true; txtCorreo->Enabled = true;
		txtBuscar->Enabled = true;

		txtCodigo->Text = "";	txtDNI->Text = "";	txtNombre->Text = "";
		txtApellidos->Text = ""; txtCelular->Text = ""; txtCorreo->Text = ""; txtBuscar->Text = "";
		txtDNI->Select(); txtUsu->Text = ""; txtPass->Text = "";
	}

	private: void deshabilitar() {
		opc = 0;
		btnNuevo->Enabled = true;
		btnModificar->Enabled = false;
		btnEliminar->Enabled = false;
		btnGrabar->Enabled = false;
		btnCancelar->Enabled = false;
		dgvLista->Enabled = true;

		txtCodigo->Enabled = false;
		txtDNI->Enabled = false;
		txtNombre->Enabled = false;
		txtApellidos->Enabled = false;
		txtCelular->Enabled = false;
		txtCorreo->Enabled = false;
		dtpFecha->Enabled = false;
		txtUsu->Enabled = false; txtPass->Enabled = false;
		txtBuscar->Enabled = false;
		txtCodigo->Text = ""; txtDNI->Text = "";	txtNombre->Text = "";
		txtApellidos->Text = ""; txtUsu->Text = ""; txtPass->Text = "";
		txtCelular->Text = ""; txtCorreo->Text = ""; txtBuscar->Text = "";
	}

	private: void Modificar() {
		opc = 2;
		btnNuevo->Enabled = false;
		btnModificar->Enabled = false;
		btnEliminar->Enabled = false;
		btnGrabar->Enabled = true;
		btnCancelar->Enabled = true;
		dgvLista->Enabled = false;
		dtpFecha->Enabled = true;

		txtCodigo->Enabled = true;
		txtDNI->Enabled = true; txtUsu->Enabled = true; txtPass->Enabled = true; txtNombre->Enabled = true;
		txtApellidos->Enabled = true; txtCelular->Enabled = true; txtCorreo->Enabled = true;
		txtBuscar->Enabled = true;
		txtDNI->Select();
	}

	private: System::Void btnNuevo_Click(System::Object^  sender, System::EventArgs^  e) {
		habilitar();
		Codigo();
	}

	private: System::Void btnCancelar_Click(System::Object^  sender, System::EventArgs^  e) {
		deshabilitar();
	}

	private: System::Void btnModificar_Click(System::Object^  sender, System::EventArgs^  e) {
		Modificar();
	}

	private: System::Void btnEliminar_Click(System::Object^  sender, System::EventArgs^  e) {
		Usuario user;
		user.setCodigo(Global::StringToChar(txtCodigo->Text));
		daoUsuario.usuarioProcesar(user, 3);
		//MessageBox::Show("Eliminado");
		deshabilitar();
		listaUsuarios = daoUsuario.consultar();
		imprimir(listaUsuarios);
	}

	private: void Codigo() {
		char cod[11]; int n = 0;
		vector<Producto> lista = daoProducto.consultar();
		for (Producto pro : lista) {
			strcpy_s(cod, pro.getCodigo());
		}

		char *replaceCod = Global::replaceFirst(cod, 'E', '0');
		strcpy(replaceCod, Global::replaceFirst(cod, 'M', '0'));
		strcpy(replaceCod, Global::replaceFirst(cod, 'P', '0'));
		strcpy(replaceCod, Global::replaceFirst(cod, '_', '0'));

		n = Convert::ToInt32(replaceCod);
		n++;
		if (n < 10)
			/*Se asigna un formato al codigo */
			txtCodigo->Text = gcnew String("EMP_00000" + n);
		else if (n < 100)
			txtCodigo->Text = gcnew String("EMP_0000" + n);
		else if (n < 1000)
			txtCodigo->Text = gcnew String("EMP_000" + n);
		else if (n < 10000)
			txtCodigo->Text = gcnew String("EMP_00" + n);
		else if (n < 100000)
			txtCodigo->Text = gcnew String("EMP_0" + n);
		else if (n < 1000000)
			txtCodigo->Text = gcnew String("EMP_" + n);
		else
			MessageBox::Show("Supero el maximo de empleados");
	}

	private: System::Void btnGrabar_Click(System::Object^  sender, System::EventArgs^  e) {
		if (txtDNI->Text->Equals("")) {
			MessageBox::Show("Complete campo DNI");
		}
		else if (txtNombre->Text->Equals("")) {
			MessageBox::Show("Complete campo nombre");
		}
		else if (txtApellidos->Text->Equals("")) {
			MessageBox::Show("Complete campo apellidos");
		}
		else if (txtCelular->Text->Equals("")) {
			MessageBox::Show("Complete campo celular");
		}
		else if (txtCorreo->Text->Equals("")) {
			MessageBox::Show("Complete campo correo");
		}
		else if (txtUsu->Text->Equals("")) {
			MessageBox::Show("Complete campo usuario");
		}
		else if (txtPass->Text->Equals("")) {
			MessageBox::Show("Complete campo password");
		}
		else {
			Usuario user;
			user.setCodigo(Global::StringToChar(txtCodigo->Text));

			if (opc == 1) {
				if (user.validar()) {
					user.setDni(Global::StringToChar(txtDNI->Text));
					user.setUserName(Global::StringToChar(txtUsu->Text));
					user.setPassWord(Global::StringToChar(txtPass->Text));
					user.setNombre(Global::StringToChar(txtNombre->Text));
					user.setApellidos(Global::StringToChar(txtApellidos->Text));

					user.setTelefono(Global::StringToChar(txtCelular->Text));
					user.setEmail(Global::StringToChar(txtCorreo->Text));
					DateTime f = dtpFecha->Value;
					int dia = Convert::ToInt16(f.Day);
					int mes = Convert::ToInt16(f.Month);
					int anio = Convert::ToInt16(f.Year);
					String ^fecha = anio + "-" + mes + "-" + dia;
					user.setFecha(Global::StringToChar(fecha));
					daoUsuario.usuarioProcesar(user, 1);

					//MessageBox::Show("Codigo valido");
					listaUsuarios = daoUsuario.consultar();
					imprimir(listaUsuarios);
					//MessageBox::Show("Registrado");
				}
				else {
					MessageBox::Show("Codigo no valido");
				}
			}
			else { //opc igual a 2
				if (user.validar()) {
					user.setDni(Global::StringToChar(txtDNI->Text));
					user.setUserName(Global::StringToChar(txtUsu->Text));
					user.setPassWord(Global::StringToChar(txtPass->Text));
					user.setNombre(Global::StringToChar(txtNombre->Text));
					user.setApellidos(Global::StringToChar(txtApellidos->Text));

					user.setTelefono(Global::StringToChar(txtCelular->Text));
					user.setEmail(Global::StringToChar(txtCorreo->Text));
					DateTime f = dtpFecha->Value;
					int dia = Convert::ToInt16(f.Day);
					int mes = Convert::ToInt16(f.Month);
					int anio = Convert::ToInt16(f.Year);
					String ^fecha = anio + "-" + mes + "-" + dia;
					user.setFecha(Global::StringToChar(fecha));
					daoUsuario.usuarioProcesar(user, 2);
					listaUsuarios = daoUsuario.consultar();
					imprimir(listaUsuarios);
					//MessageBox::Show("Actualizado");
				}
				else {
					MessageBox::Show("Codigo no valido");
				}
			}
			deshabilitar();
		}
	}

	private: void imprimir(vector<Usuario> Ex) {
		dgvLista->Rows->Clear();
		for (int i = 0; i < (int)Ex.size(); i++) {
			dgvLista->Rows->Add(gcnew String(Ex[i].getCodigo()),
				gcnew String(Ex[i].getDni()),
				gcnew String(Ex[i].getUserName()),
				gcnew String(Ex[i].getPassWord()),
				gcnew String(Ex[i].getNombre()),
				gcnew String(Ex[i].getApellidos()),
				gcnew String(Ex[i].getTelefono()),
				gcnew String(Ex[i].getEmail()),
				gcnew String(Ex[i].getFecha())
			);
		}
	}

	private: System::Void frmEmpleado_Load(System::Object^  sender, System::EventArgs^  e) {
		listaUsuarios = daoUsuario.consultar();
		imprimir(listaUsuarios);
	}

	private: System::Void dgvLista_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		txtCodigo->Text = dgvLista->CurrentRow->Cells[0]->Value->ToString();
		txtDNI->Text = dgvLista->CurrentRow->Cells[1]->Value->ToString();
		txtUsu->Text = dgvLista->CurrentRow->Cells[2]->Value->ToString();
		txtPass->Text = dgvLista->CurrentRow->Cells[3]->Value->ToString();
		txtNombre->Text = dgvLista->CurrentRow->Cells[4]->Value->ToString();
		txtApellidos->Text = dgvLista->CurrentRow->Cells[5]->Value->ToString();
		txtCelular->Text = dgvLista->CurrentRow->Cells[6]->Value->ToString();
		txtCorreo->Text = dgvLista->CurrentRow->Cells[7]->Value->ToString();
		btnModificar->Enabled = true;
		btnEliminar->Enabled = true;
	}
	private: System::Void dgvLista_CellFormatting(System::Object^  sender, System::Windows::Forms::DataGridViewCellFormattingEventArgs^  e) {
		if (e->ColumnIndex == 3) {
			if (e->Value != nullptr) {
				e->Value = gcnew String('*', e->Value->ToString()->Length);
			}
		}
	}
	};
}
