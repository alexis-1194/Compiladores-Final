#pragma once

namespace ProjectFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmProducto
	/// </summary>
	public ref class frmProducto : public System::Windows::Forms::Form
	{
	public:
		frmProducto(void)
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
		~frmProducto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label3;
	protected:
	private: System::Windows::Forms::ComboBox^  cboProveedor;
	private: System::Windows::Forms::TextBox^  txtCantidad;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  cboLinea;
	private: System::Windows::Forms::TextBox^  txtPrecio_venta;
	private: System::Windows::Forms::TextBox^  txtBuscar;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnGrabar;
	private: System::Windows::Forms::Button^  btnEliminar;
	private: System::Windows::Forms::Button^  btnModificar;
	private: System::Windows::Forms::Button^  btnCancelar;
	private: System::Windows::Forms::Button^  btnNuevo;
	private: System::Windows::Forms::TextBox^  txtNombre;
	private: System::Windows::Forms::TextBox^  txtPrecio_compra;
	private: System::Windows::Forms::TextBox^  txtCodigo;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  lblCorreo;
	private: System::Windows::Forms::Label^  lblCelular;
	private: System::Windows::Forms::Label^  lblNombre;
	private: System::Windows::Forms::Label^  lblDNI;
	private: System::Windows::Forms::DataGridView^  dgvLista;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
	private: System::Windows::Forms::Button^  btnImprimir;


	protected:






























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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cboProveedor = (gcnew System::Windows::Forms::ComboBox());
			this->txtCantidad = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cboLinea = (gcnew System::Windows::Forms::ComboBox());
			this->txtPrecio_venta = (gcnew System::Windows::Forms::TextBox());
			this->txtBuscar = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnGrabar = (gcnew System::Windows::Forms::Button());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->btnModificar = (gcnew System::Windows::Forms::Button());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->btnNuevo = (gcnew System::Windows::Forms::Button());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->txtPrecio_compra = (gcnew System::Windows::Forms::TextBox());
			this->txtCodigo = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lblCorreo = (gcnew System::Windows::Forms::Label());
			this->lblCelular = (gcnew System::Windows::Forms::Label());
			this->lblNombre = (gcnew System::Windows::Forms::Label());
			this->lblDNI = (gcnew System::Windows::Forms::Label());
			this->dgvLista = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnImprimir = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLista))->BeginInit();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 416);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 17);
			this->label3->TabIndex = 149;
			this->label3->Text = L"Proveedor";
			// 
			// cboProveedor
			// 
			this->cboProveedor->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cboProveedor->FormattingEnabled = true;
			this->cboProveedor->Location = System::Drawing::Point(15, 445);
			this->cboProveedor->Name = L"cboProveedor";
			this->cboProveedor->Size = System::Drawing::Size(219, 21);
			this->cboProveedor->TabIndex = 148;
			// 
			// txtCantidad
			// 
			this->txtCantidad->Enabled = false;
			this->txtCantidad->Location = System::Drawing::Point(15, 383);
			this->txtCantidad->MaxLength = 40;
			this->txtCantidad->Name = L"txtCantidad";
			this->txtCantidad->Size = System::Drawing::Size(219, 20);
			this->txtCantidad->TabIndex = 147;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 353);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 17);
			this->label2->TabIndex = 146;
			this->label2->Text = L"Cantidad";
			// 
			// cboLinea
			// 
			this->cboLinea->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cboLinea->FormattingEnabled = true;
			this->cboLinea->Location = System::Drawing::Point(15, 162);
			this->cboLinea->Name = L"cboLinea";
			this->cboLinea->Size = System::Drawing::Size(219, 21);
			this->cboLinea->TabIndex = 145;
			// 
			// txtPrecio_venta
			// 
			this->txtPrecio_venta->Enabled = false;
			this->txtPrecio_venta->Location = System::Drawing::Point(15, 310);
			this->txtPrecio_venta->MaxLength = 40;
			this->txtPrecio_venta->Name = L"txtPrecio_venta";
			this->txtPrecio_venta->Size = System::Drawing::Size(219, 20);
			this->txtPrecio_venta->TabIndex = 144;
			// 
			// txtBuscar
			// 
			this->txtBuscar->Enabled = false;
			this->txtBuscar->Location = System::Drawing::Point(306, 186);
			this->txtBuscar->MaxLength = 8;
			this->txtBuscar->Name = L"txtBuscar";
			this->txtBuscar->Size = System::Drawing::Size(11, 20);
			this->txtBuscar->TabIndex = 143;
			this->txtBuscar->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(237, 186);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 17);
			this->label1->TabIndex = 142;
			this->label1->Text = L"mdfcod";
			this->label1->Visible = false;
			// 
			// btnGrabar
			// 
			this->btnGrabar->Enabled = false;
			this->btnGrabar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGrabar->Location = System::Drawing::Point(240, 135);
			this->btnGrabar->Name = L"btnGrabar";
			this->btnGrabar->Size = System::Drawing::Size(75, 23);
			this->btnGrabar->TabIndex = 141;
			this->btnGrabar->Text = L"Grabar";
			this->btnGrabar->UseVisualStyleBackColor = true;
			this->btnGrabar->Click += gcnew System::EventHandler(this, &frmProducto::btnGrabar_Click);
			// 
			// btnEliminar
			// 
			this->btnEliminar->Enabled = false;
			this->btnEliminar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEliminar->Location = System::Drawing::Point(240, 111);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(75, 23);
			this->btnEliminar->TabIndex = 140;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &frmProducto::btnEliminar_Click);
			// 
			// btnModificar
			// 
			this->btnModificar->Enabled = false;
			this->btnModificar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnModificar->Location = System::Drawing::Point(240, 87);
			this->btnModificar->Name = L"btnModificar";
			this->btnModificar->Size = System::Drawing::Size(75, 23);
			this->btnModificar->TabIndex = 139;
			this->btnModificar->Text = L"Modificar";
			this->btnModificar->UseVisualStyleBackColor = true;
			this->btnModificar->Click += gcnew System::EventHandler(this, &frmProducto::btnModificar_Click);
			// 
			// btnCancelar
			// 
			this->btnCancelar->Enabled = false;
			this->btnCancelar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancelar->Location = System::Drawing::Point(240, 63);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(75, 23);
			this->btnCancelar->TabIndex = 138;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = true;
			this->btnCancelar->Click += gcnew System::EventHandler(this, &frmProducto::btnCancelar_Click);
			// 
			// btnNuevo
			// 
			this->btnNuevo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNuevo->Location = System::Drawing::Point(240, 38);
			this->btnNuevo->Name = L"btnNuevo";
			this->btnNuevo->Size = System::Drawing::Size(75, 23);
			this->btnNuevo->TabIndex = 137;
			this->btnNuevo->Text = L"Nuevo";
			this->btnNuevo->UseVisualStyleBackColor = true;
			this->btnNuevo->Click += gcnew System::EventHandler(this, &frmProducto::btnNuevo_Click);
			// 
			// txtNombre
			// 
			this->txtNombre->Enabled = false;
			this->txtNombre->Location = System::Drawing::Point(15, 95);
			this->txtNombre->MaxLength = 49;
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(219, 20);
			this->txtNombre->TabIndex = 136;
			// 
			// txtPrecio_compra
			// 
			this->txtPrecio_compra->Enabled = false;
			this->txtPrecio_compra->Location = System::Drawing::Point(15, 235);
			this->txtPrecio_compra->MaxLength = 40;
			this->txtPrecio_compra->Name = L"txtPrecio_compra";
			this->txtPrecio_compra->Size = System::Drawing::Size(219, 20);
			this->txtPrecio_compra->TabIndex = 135;
			// 
			// txtCodigo
			// 
			this->txtCodigo->Enabled = false;
			this->txtCodigo->Location = System::Drawing::Point(15, 41);
			this->txtCodigo->MaxLength = 10;
			this->txtCodigo->Name = L"txtCodigo";
			this->txtCodigo->Size = System::Drawing::Size(219, 20);
			this->txtCodigo->TabIndex = 134;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 280);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(91, 17);
			this->label5->TabIndex = 133;
			this->label5->Text = L"precio venta";
			// 
			// lblCorreo
			// 
			this->lblCorreo->AutoSize = true;
			this->lblCorreo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCorreo->Location = System::Drawing::Point(12, 205);
			this->lblCorreo->Name = L"lblCorreo";
			this->lblCorreo->Size = System::Drawing::Size(105, 17);
			this->lblCorreo->TabIndex = 132;
			this->lblCorreo->Text = L"precio compra";
			// 
			// lblCelular
			// 
			this->lblCelular->AutoSize = true;
			this->lblCelular->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCelular->Location = System::Drawing::Point(12, 133);
			this->lblCelular->Name = L"lblCelular";
			this->lblCelular->Size = System::Drawing::Size(42, 17);
			this->lblCelular->TabIndex = 131;
			this->lblCelular->Text = L"Linea";
			// 
			// lblNombre
			// 
			this->lblNombre->AutoSize = true;
			this->lblNombre->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNombre->Location = System::Drawing::Point(12, 75);
			this->lblNombre->Name = L"lblNombre";
			this->lblNombre->Size = System::Drawing::Size(61, 17);
			this->lblNombre->TabIndex = 130;
			this->lblNombre->Text = L"Nombre";
			// 
			// lblDNI
			// 
			this->lblDNI->AutoSize = true;
			this->lblDNI->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDNI->Location = System::Drawing::Point(12, 10);
			this->lblDNI->Name = L"lblDNI";
			this->lblDNI->Size = System::Drawing::Size(55, 17);
			this->lblDNI->TabIndex = 129;
			this->lblDNI->Text = L"codigo";
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
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::HotTrack;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvLista->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dgvLista->ColumnHeadersHeight = 30;
			this->dgvLista->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dgvLista->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column1, this->Column2,
					this->Column3, this->Column4, this->Column5, this->Column6, this->Column8, this->Column7
			});
			this->dgvLista->EnableHeadersVisualStyles = false;
			this->dgvLista->GridColor = System::Drawing::Color::SteelBlue;
			this->dgvLista->Location = System::Drawing::Point(321, 10);
			this->dgvLista->Name = L"dgvLista";
			this->dgvLista->ReadOnly = true;
			this->dgvLista->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)));
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::SteelBlue;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvLista->RowHeadersDefaultCellStyle = dataGridViewCellStyle5;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)));
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::Color::SteelBlue;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::Color::White;
			this->dgvLista->RowsDefaultCellStyle = dataGridViewCellStyle6;
			this->dgvLista->Size = System::Drawing::Size(442, 456);
			this->dgvLista->TabIndex = 128;
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
			// Column3
			// 
			this->Column3->HeaderText = L"Linea";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 65;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Precio compra";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 127;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Precio venta";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 113;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Cantidad";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Width = 94;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Codigo Proveedor";
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			this->Column8->Width = 152;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"idProducto";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->Width = 103;
			// 
			// btnImprimir
			// 
			this->btnImprimir->Enabled = false;
			this->btnImprimir->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnImprimir->Location = System::Drawing::Point(242, 232);
			this->btnImprimir->Name = L"btnImprimir";
			this->btnImprimir->Size = System::Drawing::Size(75, 23);
			this->btnImprimir->TabIndex = 150;
			this->btnImprimir->Text = L"Imprimir";
			this->btnImprimir->UseVisualStyleBackColor = true;
			this->btnImprimir->Click += gcnew System::EventHandler(this, &frmProducto::btnImprimir_Click);
			// 
			// frmProducto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(775, 477);
			this->Controls->Add(this->btnImprimir);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->cboProveedor);
			this->Controls->Add(this->txtCantidad);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->cboLinea);
			this->Controls->Add(this->txtPrecio_venta);
			this->Controls->Add(this->txtBuscar);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnGrabar);
			this->Controls->Add(this->btnEliminar);
			this->Controls->Add(this->btnModificar);
			this->Controls->Add(this->btnCancelar);
			this->Controls->Add(this->btnNuevo);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->txtPrecio_compra);
			this->Controls->Add(this->txtCodigo);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->lblCorreo);
			this->Controls->Add(this->lblCelular);
			this->Controls->Add(this->lblNombre);
			this->Controls->Add(this->lblDNI);
			this->Controls->Add(this->dgvLista);
			this->Name = L"frmProducto";
			this->Text = L"frmProducto";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLista))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: int opc;

	private: System::Void btnNuevo_Click(System::Object^  sender, System::EventArgs^  e) {
		opc = 1;
		btnNuevo->Enabled = false;
		btnModificar->Enabled = false;
		btnEliminar->Enabled = false;
		btnGrabar->Enabled = true;
		btnCancelar->Enabled = true;

		txtCodigo->Enabled = true;
		txtPrecio_venta->Enabled = true;
		txtPrecio_compra->Enabled = true; txtCantidad->Enabled = true;
		txtNombre->Enabled = true; cboLinea->Enabled = true;
		cboProveedor->Enabled = true;
		txtPrecio_venta->Text = "";
		txtPrecio_compra->Text = ""; txtCantidad->Text = ""; txtNombre->Text = "";
		txtCodigo->Select();
	}
	private: System::Void btnCancelar_Click(System::Object^  sender, System::EventArgs^  e) {
		opc = 0;
		btnNuevo->Enabled = true;
		btnModificar->Enabled = false;
		btnEliminar->Enabled = false;
		btnGrabar->Enabled = false;
		btnCancelar->Enabled = false;

		txtPrecio_venta->Enabled = false;
		txtPrecio_compra->Enabled = false;
		txtCantidad->Enabled = false;
		txtNombre->Enabled = false;
		cboLinea->Enabled = false;
		cboProveedor->Enabled = false;

		txtPrecio_venta->Text = "";
		txtPrecio_compra->Text = ""; txtCantidad->Text = ""; txtNombre->Text = "", cboLinea->SelectedIndex = -1;
		cboProveedor->SelectedIndex = -1;
	}
	private: System::Void btnModificar_Click(System::Object^  sender, System::EventArgs^  e) {
		opc = 2;
		btnNuevo->Enabled = false;
		btnModificar->Enabled = false;
		btnEliminar->Enabled = false;
		btnGrabar->Enabled = true;
		btnCancelar->Enabled = true;
		/*txtCodigo->Enabled = false;*/
		txtPrecio_venta->Enabled = true;
		txtPrecio_compra->Enabled = true;
		txtCantidad->Enabled = true;
		txtNombre->Enabled = true;
		cboLinea->Enabled = true;
		cboProveedor->Enabled = true;
		/*txtCodigo->Select();*/
		txtNombre->Select();
	}
	private: System::Void btnEliminar_Click(System::Object^  sender, System::EventArgs^  e) {

	}
	private: void subCadena(char * arr, int ini, int fin, char *x)
	{
		for (int i = ini + 1, j = 0; i < fin; i++, j++)
		{
			x[j] = arr[i];
			x[j + 1] = 0;
		}
	}
	private: void Codigo() {
		char cod[11]; int n;
		list<Producto> lista = daoProducto.consultar();
		for (Producto pro : lista) {
			strcpy_s(cod, pro.getCodigo());
		}
		char codAux[11];
		subCadena(cod, 0, 5, codAux);//00001
		char completo[11];
		strcpy_s(completo, '1' + codAux);//100001
		n = Convert::ToInt32(completo);
		n++;//incrementa en 1
		if (n < 10)
			/*Se asigna un formato al codigo */
			txtCodigo->Text = gcnew String("PROD_0000" + n);
		else if (n < 100)
			txtCodigo->Text = gcnew String("PROD_000" + n);
		else if (n < 1000)
			txtCodigo->Text = gcnew String("PROD_00" + n);
		else
			MessageBox::Show("Supero el maximo de productos");
	}

	private: System::Void btnGrabar_Click(System::Object^  sender, System::EventArgs^  e) {
		if (txtCodigo->Text->Equals("")) {
			MessageBox::Show("Complete campo Codigo");
		}
		else if (txtNombre->Text->Equals("")) {
			MessageBox::Show("Complete campo nombre");
		}
		/*else if (cboLinea->SelectedIndex == -1) {
			MessageBox::Show("Seleccione linea");
		}*/
		/*else if (txtPrecio_compra->Text->Equals("")) {
			MessageBox::Show("Complete precio de compra");
		}*/
		else if (txtPrecio_venta->Text->Equals("")) {
			MessageBox::Show("Complete precio de venta");
		}
		else if (txtCantidad->Text->Equals("")) {
			MessageBox::Show("Complete campo cantidad");
		}
		/*else if (cboProveedor->SelectedIndex == -1) {
			MessageBox::Show("Seleccione proveedor");
		}*/
		else {
			Producto pro;
			//daoProducto = ProductodaoProducto();
			pro.setCodigo(daoProducto.StringToChar(txtCodigo->Text));
			if (pro.validar()) {
				pro.setDescripcion(daoProducto.StringToChar(txtNombre->Text));
				pro.setCantidad(Convert::ToInt32(txtCantidad->Text));
				pro.setPrecio(Convert::ToDouble(txtPrecio_venta->Text));
				daoProducto.productoProcesar(pro, 1);
				MessageBox::Show("Codigo valido");
			}
			else {
				MessageBox::Show("Codigo no valido");
			}
		}
	}
	private: System::Void btnImprimir_Click(System::Object^  sender, System::EventArgs^  e) {
		
	}
	};
}
