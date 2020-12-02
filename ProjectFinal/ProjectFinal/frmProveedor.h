#pragma once

namespace ProjectFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmProveedor
	/// </summary>
	public ref class frmProveedor : public System::Windows::Forms::Form
	{
	public:
		frmProveedor(void)
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
		~frmProveedor()
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
	private: System::Windows::Forms::TextBox^  txtDireccion;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txtBuscar;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::TextBox^  txtNombre;
	private: System::Windows::Forms::TextBox^  txtCategoria;
	private: System::Windows::Forms::TextBox^  txtEmpresa;
	private: System::Windows::Forms::TextBox^  txtCodigo;

	private: System::Windows::Forms::Label^  lblCorreo;
	private: System::Windows::Forms::Label^  lblCelular;
	private: System::Windows::Forms::Label^  lblNombre;
	private: System::Windows::Forms::Label^  lblDNI;
	private: System::Windows::Forms::TextBox^  txtTelefono;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;



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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txtTelefono = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtDireccion = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtBuscar = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->txtCategoria = (gcnew System::Windows::Forms::TextBox());
			this->txtEmpresa = (gcnew System::Windows::Forms::TextBox());
			this->txtCodigo = (gcnew System::Windows::Forms::TextBox());
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
			this->btnGrabar->Location = System::Drawing::Point(522, 110);
			this->btnGrabar->Name = L"btnGrabar";
			this->btnGrabar->Size = System::Drawing::Size(75, 23);
			this->btnGrabar->TabIndex = 110;
			this->btnGrabar->Text = L"Grabar";
			this->btnGrabar->UseVisualStyleBackColor = true;
			this->btnGrabar->Click += gcnew System::EventHandler(this, &frmProveedor::btnGrabar_Click);
			// 
			// btnEliminar
			// 
			this->btnEliminar->Enabled = false;
			this->btnEliminar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEliminar->Location = System::Drawing::Point(522, 86);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(75, 23);
			this->btnEliminar->TabIndex = 109;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &frmProveedor::btnEliminar_Click);
			// 
			// btnModificar
			// 
			this->btnModificar->Enabled = false;
			this->btnModificar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnModificar->Location = System::Drawing::Point(522, 62);
			this->btnModificar->Name = L"btnModificar";
			this->btnModificar->Size = System::Drawing::Size(75, 23);
			this->btnModificar->TabIndex = 108;
			this->btnModificar->Text = L"Modificar";
			this->btnModificar->UseVisualStyleBackColor = true;
			this->btnModificar->Click += gcnew System::EventHandler(this, &frmProveedor::btnModificar_Click);
			// 
			// btnCancelar
			// 
			this->btnCancelar->Enabled = false;
			this->btnCancelar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancelar->Location = System::Drawing::Point(522, 38);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(75, 23);
			this->btnCancelar->TabIndex = 107;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = true;
			this->btnCancelar->Click += gcnew System::EventHandler(this, &frmProveedor::btnCancelar_Click);
			// 
			// btnNuevo
			// 
			this->btnNuevo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNuevo->Location = System::Drawing::Point(522, 13);
			this->btnNuevo->Name = L"btnNuevo";
			this->btnNuevo->Size = System::Drawing::Size(75, 23);
			this->btnNuevo->TabIndex = 106;
			this->btnNuevo->Text = L"Nuevo";
			this->btnNuevo->UseVisualStyleBackColor = true;
			this->btnNuevo->Click += gcnew System::EventHandler(this, &frmProveedor::btnNuevo_Click);
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
			this->dgvLista->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1, this->Column2,
					this->Column3, this->Column4, this->Column5, this->Column6
			});
			this->dgvLista->EnableHeadersVisualStyles = false;
			this->dgvLista->GridColor = System::Drawing::Color::SteelBlue;
			this->dgvLista->Location = System::Drawing::Point(16, 221);
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
			this->dgvLista->Size = System::Drawing::Size(581, 219);
			this->dgvLista->TabIndex = 100;
			this->dgvLista->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmProveedor::dgvLista_CellClick);
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
			this->Column2->HeaderText = L"NOMBRE";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 85;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"CATEGORIA";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 105;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"EMPRESA";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 87;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"DIRECCION";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 105;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"TELEFONO";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Width = 94;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->txtTelefono);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->txtDireccion);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->txtBuscar);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->txtNombre);
			this->groupBox1->Controls->Add(this->txtCategoria);
			this->groupBox1->Controls->Add(this->txtEmpresa);
			this->groupBox1->Controls->Add(this->txtCodigo);
			this->groupBox1->Controls->Add(this->lblCorreo);
			this->groupBox1->Controls->Add(this->lblCelular);
			this->groupBox1->Controls->Add(this->lblNombre);
			this->groupBox1->Controls->Add(this->lblDNI);
			this->groupBox1->Location = System::Drawing::Point(16, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(500, 202);
			this->groupBox1->TabIndex = 113;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"DATOS";
			// 
			// txtTelefono
			// 
			this->txtTelefono->Enabled = false;
			this->txtTelefono->Location = System::Drawing::Point(147, 156);
			this->txtTelefono->MaxLength = 40;
			this->txtTelefono->Name = L"txtTelefono";
			this->txtTelefono->Size = System::Drawing::Size(146, 20);
			this->txtTelefono->TabIndex = 133;
			this->txtTelefono->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmProveedor::txtTelefono_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 158);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 17);
			this->label3->TabIndex = 132;
			this->label3->Text = L"Telefono";
			// 
			// txtDireccion
			// 
			this->txtDireccion->Enabled = false;
			this->txtDireccion->Location = System::Drawing::Point(147, 130);
			this->txtDireccion->MaxLength = 40;
			this->txtDireccion->Name = L"txtDireccion";
			this->txtDireccion->Size = System::Drawing::Size(276, 20);
			this->txtDireccion->TabIndex = 129;
			this->txtDireccion->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmProveedor::txtDireccion_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 132);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 17);
			this->label2->TabIndex = 128;
			this->label2->Text = L"Direccion";
			// 
			// txtBuscar
			// 
			this->txtBuscar->Enabled = false;
			this->txtBuscar->Location = System::Drawing::Point(407, 158);
			this->txtBuscar->MaxLength = 8;
			this->txtBuscar->Name = L"txtBuscar";
			this->txtBuscar->Size = System::Drawing::Size(16, 20);
			this->txtBuscar->TabIndex = 127;
			this->txtBuscar->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(310, 161);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 17);
			this->label1->TabIndex = 126;
			this->label1->Text = L"Modificar DNI";
			this->label1->Visible = false;
			// 
			// txtNombre
			// 
			this->txtNombre->Enabled = false;
			this->txtNombre->Location = System::Drawing::Point(147, 51);
			this->txtNombre->MaxLength = 49;
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(276, 20);
			this->txtNombre->TabIndex = 124;
			this->txtNombre->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmProveedor::txtNombre_KeyPress);
			// 
			// txtCategoria
			// 
			this->txtCategoria->Enabled = false;
			this->txtCategoria->Location = System::Drawing::Point(147, 77);
			this->txtCategoria->MaxLength = 9;
			this->txtCategoria->Name = L"txtCategoria";
			this->txtCategoria->Size = System::Drawing::Size(276, 20);
			this->txtCategoria->TabIndex = 123;
			this->txtCategoria->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmProveedor::txtCategoria_KeyPress);
			// 
			// txtEmpresa
			// 
			this->txtEmpresa->Enabled = false;
			this->txtEmpresa->Location = System::Drawing::Point(147, 104);
			this->txtEmpresa->MaxLength = 40;
			this->txtEmpresa->Name = L"txtEmpresa";
			this->txtEmpresa->Size = System::Drawing::Size(276, 20);
			this->txtEmpresa->TabIndex = 122;
			this->txtEmpresa->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmProveedor::txtEmpresa_KeyPress);
			// 
			// txtCodigo
			// 
			this->txtCodigo->Enabled = false;
			this->txtCodigo->Location = System::Drawing::Point(147, 25);
			this->txtCodigo->MaxLength = 8;
			this->txtCodigo->Name = L"txtCodigo";
			this->txtCodigo->Size = System::Drawing::Size(276, 20);
			this->txtCodigo->TabIndex = 121;
			// 
			// lblCorreo
			// 
			this->lblCorreo->AutoSize = true;
			this->lblCorreo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCorreo->Location = System::Drawing::Point(12, 106);
			this->lblCorreo->Name = L"lblCorreo";
			this->lblCorreo->Size = System::Drawing::Size(63, 17);
			this->lblCorreo->TabIndex = 119;
			this->lblCorreo->Text = L"Empresa";
			// 
			// lblCelular
			// 
			this->lblCelular->AutoSize = true;
			this->lblCelular->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCelular->Location = System::Drawing::Point(12, 80);
			this->lblCelular->Name = L"lblCelular";
			this->lblCelular->Size = System::Drawing::Size(75, 17);
			this->lblCelular->TabIndex = 118;
			this->lblCelular->Text = L"Categoria";
			// 
			// lblNombre
			// 
			this->lblNombre->AutoSize = true;
			this->lblNombre->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNombre->Location = System::Drawing::Point(12, 53);
			this->lblNombre->Name = L"lblNombre";
			this->lblNombre->Size = System::Drawing::Size(72, 17);
			this->lblNombre->TabIndex = 117;
			this->lblNombre->Text = L"Contacto";
			// 
			// lblDNI
			// 
			this->lblDNI->AutoSize = true;
			this->lblDNI->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDNI->Location = System::Drawing::Point(12, 28);
			this->lblDNI->Name = L"lblDNI";
			this->lblDNI->Size = System::Drawing::Size(58, 17);
			this->lblDNI->TabIndex = 116;
			this->lblDNI->Text = L"Codigo";
			// 
			// frmProveedor
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
			this->Name = L"frmProveedor";
			this->Text = L"frmProveedor";
			this->Load += gcnew System::EventHandler(this, &frmProveedor::frmProveedor_Load);
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

		//txtCodigo->Enabled = true;
		txtNombre->Enabled = true; txtCategoria->Enabled = true;
		txtEmpresa->Enabled = true; txtDireccion->Enabled = true;
		txtTelefono->Enabled = true;

		txtBuscar->Enabled = true;
		txtCodigo->Text = ""; txtNombre->Text = ""; txtCategoria->Text = "";
		txtTelefono->Text = ""; txtDireccion->Text = ""; txtEmpresa->Text = "";
		txtNombre->Select();
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
		txtNombre->Enabled = false; txtCategoria->Enabled = false;
		txtEmpresa->Enabled = false; txtDireccion->Enabled = false;
		txtTelefono->Enabled = false;

		txtCodigo->Text = ""; txtNombre->Text = ""; txtCategoria->Text = "";
		txtTelefono->Text = ""; txtDireccion->Text = ""; txtEmpresa->Text = "";
		txtNombre->Select();
	}
	private: void Modificar() {
		opc = 2;
		btnNuevo->Enabled = false;
		btnModificar->Enabled = false;
		btnEliminar->Enabled = false;
		btnGrabar->Enabled = true;
		btnCancelar->Enabled = true;
		dgvLista->Enabled = false;


		txtCodigo->Enabled = true;
		txtNombre->Enabled = true; txtCategoria->Enabled = true;
		txtEmpresa->Enabled = true; txtDireccion->Enabled = true;
		txtTelefono->Enabled = true;

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
		Proveedor provider;
		provider.setCodigo(Global::StringToChar(txtCodigo->Text));
		daoProveedor.proveedorProcesar(provider, 3);
		//MessageBox::Show("Eliminado");
		deshabilitar();
		listaProveedores = daoProveedor.consultar();
		imprimir(listaProveedores);
	}

	private: void Codigo() {
		char cod[11]; int n = 0;
		vector<Proveedor> lista = daoProveedor.consultar();
		for (Proveedor pro : lista) {
			strcpy_s(cod, pro.getCodigo());
		}

		char replaceCod[11];
		strcpy_s(replaceCod, Global::replaceFirst(cod, 'P', '0'));
		strcpy_s(replaceCod, Global::replaceFirst(cod, 'R', '0'));
		strcpy_s(replaceCod, Global::replaceFirst(cod, 'O', '0'));
		strcpy_s(replaceCod, Global::replaceFirst(cod, 'V', '0'));
		strcpy_s(replaceCod, Global::replaceFirst(cod, '_', '0'));

		n = atoi(replaceCod);
		n++;
		if (n < 10)
			/*Se asigna un formato al codigo */
			txtCodigo->Text = gcnew String("PROV_0000" + n);
		else if (n < 100)
			txtCodigo->Text = gcnew String("PROV_000" + n);
		else if (n < 1000)
			txtCodigo->Text = gcnew String("PROV_00" + n);
		else if (n < 10000)
			txtCodigo->Text = gcnew String("PROV_0" + n);
		else if (n < 100000)
			txtCodigo->Text = gcnew String("PROV_" + n);
		else
			MessageBox::Show("Supero el maximo de proveedores");
	}
	private: System::Void btnGrabar_Click(System::Object^  sender, System::EventArgs^  e) {
		if (txtNombre->Text->Equals("")) {
			MessageBox::Show("Complete campo nombre");
		}
		else if (txtCategoria->Text->Equals("")) {
			MessageBox::Show("Complete campo categoria");
		}
		else if (txtEmpresa->Text->Equals("")) {
			MessageBox::Show("Complete campo empresa");
		}
		else if (txtDireccion->Text->Equals("")) {
			MessageBox::Show("Complete campo direccion");
		}
		else if (txtTelefono->Text->Equals("")) {
			MessageBox::Show("Complete campo telefono");
		}
		else {
			Proveedor provider;
			provider.setCodigo(Global::StringToChar(txtCodigo->Text));

			if (opc == 1) {
				if (provider.validar()) {
					provider.setNombreContacto(Global::StringToChar(txtNombre->Text));
					provider.setcategoria(Global::StringToChar(txtCategoria->Text));
					provider.setempresa(Global::StringToChar(txtEmpresa->Text));

					provider.setdireccion(Global::StringToChar(txtDireccion->Text));
					provider.settelefono(Global::StringToChar(txtTelefono->Text));


					daoProveedor.proveedorProcesar(provider, 1);

					//MessageBox::Show("Codigo valido");
					/*listaClientes = daoCliente.consultar();
					imprimir(listaClientes);*/
				}
				else {
					MessageBox::Show("Codigo no valido");
				}
			}
			else {
				if (provider.validar()) {
					provider.setNombreContacto(Global::StringToChar(txtNombre->Text));
					provider.setcategoria(Global::StringToChar(txtCategoria->Text));
					provider.setempresa(Global::StringToChar(txtEmpresa->Text));

					provider.setdireccion(Global::StringToChar(txtDireccion->Text));
					provider.settelefono(Global::StringToChar(txtTelefono->Text));

					daoProveedor.proveedorProcesar(provider, 2);
					/*listaClientes = daoCliente.consultar();
					imprimir(listaClientes);*/
					//MessageBox::Show("Actualizado");
				}
				else {
					MessageBox::Show("Codigo no valido");
				}
			}
			deshabilitar();
			listaProveedores = daoProveedor.consultar();
			imprimir(listaProveedores);
		}
	}

	private: void imprimir(vector<Proveedor> Ex) {
		dgvLista->Rows->Clear();
		for (int i = 0; i < (int)Ex.size(); i++) {
			dgvLista->Rows->Add(gcnew String(Ex[i].getCodigo()),
				gcnew String(Ex[i].getNombreContacto()),
				gcnew String(Ex[i].getCategoria()),
				gcnew String(Ex[i].getEmpresa()),
				gcnew String(Ex[i].getDireccion()),
				gcnew String(Ex[i].getTelefono())
			);
		}
	}
	private: System::Void frmProveedor_Load(System::Object^  sender, System::EventArgs^  e) {
		listaProveedores = daoProveedor.consultar();
		imprimir(listaProveedores);
	}
	private: System::Void dgvLista_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		txtCodigo->Text = dgvLista->CurrentRow->Cells[0]->Value->ToString();
		txtNombre->Text = dgvLista->CurrentRow->Cells[1]->Value->ToString();
		txtCategoria->Text = dgvLista->CurrentRow->Cells[2]->Value->ToString();
		txtEmpresa->Text = dgvLista->CurrentRow->Cells[3]->Value->ToString();
		txtDireccion->Text = dgvLista->CurrentRow->Cells[4]->Value->ToString();
		txtTelefono->Text = dgvLista->CurrentRow->Cells[5]->Value->ToString();

		btnModificar->Enabled = true;
		btnEliminar->Enabled = true;
	}
	private: System::Void txtNombre_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		Global::validarSoloLetras(e);
	}
	private: System::Void txtCategoria_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		Global::validarSoloLetras(e);
	}
	private: System::Void txtEmpresa_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		Global::validarSoloLetras(e);
	}
	private: System::Void txtDireccion_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		//Global::validarSoloLetras(e);
	}
	private: System::Void txtTelefono_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		Global::validarSoloNumeros(e);
	}
	};
}
