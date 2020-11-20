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
	private: System::Windows::Forms::TextBox^  txtPass;
	protected:
	private: System::Windows::Forms::TextBox^  txtUsu;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  txtBuscar;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnGrabar;
	private: System::Windows::Forms::Button^  btnEliminar;
	private: System::Windows::Forms::Button^  btnModificar;
	private: System::Windows::Forms::Button^  btnCancelar;
	private: System::Windows::Forms::Button^  btnNuevo;
	private: System::Windows::Forms::DateTimePicker^  dtpFecha;
	private: System::Windows::Forms::TextBox^  txtNombre;
	private: System::Windows::Forms::TextBox^  txtCelular;
	private: System::Windows::Forms::TextBox^  txtCorreo;
	private: System::Windows::Forms::TextBox^  txtDNI;
	private: System::Windows::Forms::DataGridView^  dgvLista;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  lblCorreo;
	private: System::Windows::Forms::Label^  lblCelular;
	private: System::Windows::Forms::Label^  lblNombre;
	private: System::Windows::Forms::Label^  lblDNI;

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
			this->txtPass = (gcnew System::Windows::Forms::TextBox());
			this->txtUsu = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtBuscar = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnGrabar = (gcnew System::Windows::Forms::Button());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->btnModificar = (gcnew System::Windows::Forms::Button());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->btnNuevo = (gcnew System::Windows::Forms::Button());
			this->dtpFecha = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->txtCelular = (gcnew System::Windows::Forms::TextBox());
			this->txtCorreo = (gcnew System::Windows::Forms::TextBox());
			this->txtDNI = (gcnew System::Windows::Forms::TextBox());
			this->dgvLista = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lblCorreo = (gcnew System::Windows::Forms::Label());
			this->lblCelular = (gcnew System::Windows::Forms::Label());
			this->lblNombre = (gcnew System::Windows::Forms::Label());
			this->lblDNI = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLista))->BeginInit();
			this->SuspendLayout();
			// 
			// txtPass
			// 
			this->txtPass->Enabled = false;
			this->txtPass->Location = System::Drawing::Point(389, 88);
			this->txtPass->MaxLength = 29;
			this->txtPass->Name = L"txtPass";
			this->txtPass->Size = System::Drawing::Size(115, 20);
			this->txtPass->TabIndex = 116;
			this->txtPass->UseSystemPasswordChar = true;
			// 
			// txtUsu
			// 
			this->txtUsu->Enabled = false;
			this->txtUsu->Location = System::Drawing::Point(389, 37);
			this->txtUsu->MaxLength = 29;
			this->txtUsu->Name = L"txtUsu";
			this->txtUsu->Size = System::Drawing::Size(115, 20);
			this->txtUsu->TabIndex = 115;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(386, 65);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(94, 17);
			this->label4->TabIndex = 114;
			this->label4->Text = L"CONTRASEÑA";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(386, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 17);
			this->label3->TabIndex = 113;
			this->label3->Text = L"USUARIO";
			// 
			// txtBuscar
			// 
			this->txtBuscar->Enabled = false;
			this->txtBuscar->Location = System::Drawing::Point(110, 164);
			this->txtBuscar->MaxLength = 8;
			this->txtBuscar->Name = L"txtBuscar";
			this->txtBuscar->Size = System::Drawing::Size(16, 20);
			this->txtBuscar->TabIndex = 112;
			this->txtBuscar->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 167);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 17);
			this->label1->TabIndex = 111;
			this->label1->Text = L"Modificar DNI";
			this->label1->Visible = false;
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
			// 
			// dtpFecha
			// 
			this->dtpFecha->Enabled = false;
			this->dtpFecha->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpFecha->Location = System::Drawing::Point(152, 115);
			this->dtpFecha->Name = L"dtpFecha";
			this->dtpFecha->Size = System::Drawing::Size(98, 20);
			this->dtpFecha->TabIndex = 105;
			// 
			// txtNombre
			// 
			this->txtNombre->Enabled = false;
			this->txtNombre->Location = System::Drawing::Point(152, 36);
			this->txtNombre->MaxLength = 49;
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(219, 20);
			this->txtNombre->TabIndex = 104;
			// 
			// txtCelular
			// 
			this->txtCelular->Enabled = false;
			this->txtCelular->Location = System::Drawing::Point(152, 62);
			this->txtCelular->MaxLength = 9;
			this->txtCelular->Name = L"txtCelular";
			this->txtCelular->Size = System::Drawing::Size(219, 20);
			this->txtCelular->TabIndex = 103;
			// 
			// txtCorreo
			// 
			this->txtCorreo->Enabled = false;
			this->txtCorreo->Location = System::Drawing::Point(152, 89);
			this->txtCorreo->MaxLength = 40;
			this->txtCorreo->Name = L"txtCorreo";
			this->txtCorreo->Size = System::Drawing::Size(219, 20);
			this->txtCorreo->TabIndex = 102;
			// 
			// txtDNI
			// 
			this->txtDNI->Enabled = false;
			this->txtDNI->Location = System::Drawing::Point(152, 10);
			this->txtDNI->MaxLength = 8;
			this->txtDNI->Name = L"txtDNI";
			this->txtDNI->Size = System::Drawing::Size(219, 20);
			this->txtDNI->TabIndex = 101;
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
			this->dgvLista->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column1, this->Column2,
					this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8
			});
			this->dgvLista->EnableHeadersVisualStyles = false;
			this->dgvLista->GridColor = System::Drawing::Color::SteelBlue;
			this->dgvLista->Location = System::Drawing::Point(16, 187);
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
			this->dgvLista->Size = System::Drawing::Size(581, 253);
			this->dgvLista->TabIndex = 100;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"DNI";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 54;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Usuario";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 77;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Contraseña";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 107;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Nombre";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 84;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Teléfono";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 85;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Email";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Width = 66;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"fechaNac";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->Width = 95;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"idEmpleado";
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			this->Column8->Width = 110;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(17, 119);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 17);
			this->label5->TabIndex = 99;
			this->label5->Text = L"Fecha Nac.";
			// 
			// lblCorreo
			// 
			this->lblCorreo->AutoSize = true;
			this->lblCorreo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCorreo->Location = System::Drawing::Point(17, 91);
			this->lblCorreo->Name = L"lblCorreo";
			this->lblCorreo->Size = System::Drawing::Size(129, 17);
			this->lblCorreo->TabIndex = 98;
			this->lblCorreo->Text = L"Correo Electronico";
			// 
			// lblCelular
			// 
			this->lblCelular->AutoSize = true;
			this->lblCelular->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCelular->Location = System::Drawing::Point(17, 65);
			this->lblCelular->Name = L"lblCelular";
			this->lblCelular->Size = System::Drawing::Size(54, 17);
			this->lblCelular->TabIndex = 97;
			this->lblCelular->Text = L"Celular";
			// 
			// lblNombre
			// 
			this->lblNombre->AutoSize = true;
			this->lblNombre->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNombre->Location = System::Drawing::Point(17, 38);
			this->lblNombre->Name = L"lblNombre";
			this->lblNombre->Size = System::Drawing::Size(61, 17);
			this->lblNombre->TabIndex = 96;
			this->lblNombre->Text = L"Nombre";
			// 
			// lblDNI
			// 
			this->lblDNI->AutoSize = true;
			this->lblDNI->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDNI->Location = System::Drawing::Point(17, 13);
			this->lblDNI->Name = L"lblDNI";
			this->lblDNI->Size = System::Drawing::Size(31, 17);
			this->lblDNI->TabIndex = 95;
			this->lblDNI->Text = L"DNI";
			// 
			// frmProveedor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(610, 450);
			this->Controls->Add(this->txtPass);
			this->Controls->Add(this->txtUsu);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtBuscar);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnGrabar);
			this->Controls->Add(this->btnEliminar);
			this->Controls->Add(this->btnModificar);
			this->Controls->Add(this->btnCancelar);
			this->Controls->Add(this->btnNuevo);
			this->Controls->Add(this->dtpFecha);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->txtCelular);
			this->Controls->Add(this->txtCorreo);
			this->Controls->Add(this->txtDNI);
			this->Controls->Add(this->dgvLista);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->lblCorreo);
			this->Controls->Add(this->lblCelular);
			this->Controls->Add(this->lblNombre);
			this->Controls->Add(this->lblDNI);
			this->Name = L"frmProveedor";
			this->Text = L"frmProveedor";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLista))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
