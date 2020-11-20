#pragma once

namespace ProjectFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmCliente
	/// </summary>
	public ref class frmCliente : public System::Windows::Forms::Form
	{
	public:
		frmCliente(void)
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
		~frmCliente()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:
	private: System::Windows::Forms::RadioButton^  rbFemenino;
	private: System::Windows::Forms::RadioButton^  rbMasculino;
	private: System::Windows::Forms::TextBox^  txtBuscar;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnBuscar;
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
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  lblCorreo;
	private: System::Windows::Forms::Label^  lblCelular;
	private: System::Windows::Forms::Label^  lblNombre;
	private: System::Windows::Forms::Label^  lblDNI;

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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->rbFemenino = (gcnew System::Windows::Forms::RadioButton());
			this->rbMasculino = (gcnew System::Windows::Forms::RadioButton());
			this->txtBuscar = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lblCorreo = (gcnew System::Windows::Forms::Label());
			this->lblCelular = (gcnew System::Windows::Forms::Label());
			this->lblNombre = (gcnew System::Windows::Forms::Label());
			this->lblDNI = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLista))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->rbFemenino);
			this->groupBox1->Controls->Add(this->rbMasculino);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(243, 111);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(109, 61);
			this->groupBox1->TabIndex = 86;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Genero";
			// 
			// rbFemenino
			// 
			this->rbFemenino->AutoSize = true;
			this->rbFemenino->Location = System::Drawing::Point(8, 38);
			this->rbFemenino->Name = L"rbFemenino";
			this->rbFemenino->Size = System::Drawing::Size(89, 21);
			this->rbFemenino->TabIndex = 38;
			this->rbFemenino->TabStop = true;
			this->rbFemenino->Text = L"Femenino";
			this->rbFemenino->UseVisualStyleBackColor = true;
			// 
			// rbMasculino
			// 
			this->rbMasculino->AutoSize = true;
			this->rbMasculino->Location = System::Drawing::Point(8, 15);
			this->rbMasculino->Name = L"rbMasculino";
			this->rbMasculino->Size = System::Drawing::Size(90, 21);
			this->rbMasculino->TabIndex = 37;
			this->rbMasculino->TabStop = true;
			this->rbMasculino->Text = L"Masculino";
			this->rbMasculino->UseVisualStyleBackColor = true;
			// 
			// txtBuscar
			// 
			this->txtBuscar->Enabled = false;
			this->txtBuscar->Location = System::Drawing::Point(133, 140);
			this->txtBuscar->MaxLength = 8;
			this->txtBuscar->Name = L"txtBuscar";
			this->txtBuscar->Size = System::Drawing::Size(16, 20);
			this->txtBuscar->TabIndex = 85;
			this->txtBuscar->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(21, 145);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 17);
			this->label1->TabIndex = 84;
			this->label1->Text = L"Modificar DNI";
			this->label1->Visible = false;
			// 
			// btnBuscar
			// 
			this->btnBuscar->Enabled = false;
			this->btnBuscar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBuscar->Location = System::Drawing::Point(379, 131);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(75, 23);
			this->btnBuscar->TabIndex = 83;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->UseVisualStyleBackColor = true;
			this->btnBuscar->Visible = false;
			// 
			// btnGrabar
			// 
			this->btnGrabar->Enabled = false;
			this->btnGrabar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGrabar->Location = System::Drawing::Point(379, 106);
			this->btnGrabar->Name = L"btnGrabar";
			this->btnGrabar->Size = System::Drawing::Size(75, 23);
			this->btnGrabar->TabIndex = 82;
			this->btnGrabar->Text = L"Grabar";
			this->btnGrabar->UseVisualStyleBackColor = true;
			// 
			// btnEliminar
			// 
			this->btnEliminar->Enabled = false;
			this->btnEliminar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEliminar->Location = System::Drawing::Point(379, 82);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(75, 23);
			this->btnEliminar->TabIndex = 81;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			// 
			// btnModificar
			// 
			this->btnModificar->Enabled = false;
			this->btnModificar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnModificar->Location = System::Drawing::Point(379, 58);
			this->btnModificar->Name = L"btnModificar";
			this->btnModificar->Size = System::Drawing::Size(75, 23);
			this->btnModificar->TabIndex = 80;
			this->btnModificar->Text = L"Modificar";
			this->btnModificar->UseVisualStyleBackColor = true;
			// 
			// btnCancelar
			// 
			this->btnCancelar->Enabled = false;
			this->btnCancelar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancelar->Location = System::Drawing::Point(379, 34);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(75, 23);
			this->btnCancelar->TabIndex = 79;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = true;
			// 
			// btnNuevo
			// 
			this->btnNuevo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNuevo->Location = System::Drawing::Point(379, 9);
			this->btnNuevo->Name = L"btnNuevo";
			this->btnNuevo->Size = System::Drawing::Size(75, 23);
			this->btnNuevo->TabIndex = 78;
			this->btnNuevo->Text = L"Nuevo";
			this->btnNuevo->UseVisualStyleBackColor = true;
			// 
			// dtpFecha
			// 
			this->dtpFecha->Enabled = false;
			this->dtpFecha->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpFecha->Location = System::Drawing::Point(133, 111);
			this->dtpFecha->Name = L"dtpFecha";
			this->dtpFecha->Size = System::Drawing::Size(97, 20);
			this->dtpFecha->TabIndex = 77;
			// 
			// txtNombre
			// 
			this->txtNombre->Enabled = false;
			this->txtNombre->Location = System::Drawing::Point(133, 37);
			this->txtNombre->MaxLength = 49;
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(219, 20);
			this->txtNombre->TabIndex = 76;
			// 
			// txtCelular
			// 
			this->txtCelular->Enabled = false;
			this->txtCelular->Location = System::Drawing::Point(133, 61);
			this->txtCelular->MaxLength = 9;
			this->txtCelular->Name = L"txtCelular";
			this->txtCelular->Size = System::Drawing::Size(219, 20);
			this->txtCelular->TabIndex = 75;
			// 
			// txtCorreo
			// 
			this->txtCorreo->Enabled = false;
			this->txtCorreo->Location = System::Drawing::Point(133, 85);
			this->txtCorreo->MaxLength = 40;
			this->txtCorreo->Name = L"txtCorreo";
			this->txtCorreo->Size = System::Drawing::Size(219, 20);
			this->txtCorreo->TabIndex = 74;
			// 
			// txtDNI
			// 
			this->txtDNI->Enabled = false;
			this->txtDNI->Location = System::Drawing::Point(133, 11);
			this->txtDNI->MaxLength = 8;
			this->txtDNI->Name = L"txtDNI";
			this->txtDNI->Size = System::Drawing::Size(219, 20);
			this->txtDNI->TabIndex = 73;
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
			this->dgvLista->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column1, this->Column2,
					this->Column3, this->Column4, this->Column5, this->Column6, this->Column7
			});
			this->dgvLista->EnableHeadersVisualStyles = false;
			this->dgvLista->GridColor = System::Drawing::Color::SteelBlue;
			this->dgvLista->Location = System::Drawing::Point(14, 188);
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
			this->dgvLista->Size = System::Drawing::Size(440, 253);
			this->dgvLista->TabIndex = 72;
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
			this->Column2->HeaderText = L"Nombre";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 84;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Celular";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 77;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Correo";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 76;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Fecha Nac.";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 105;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Genero";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Width = 79;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"idCliente";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->Width = 89;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(15, 116);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 17);
			this->label5->TabIndex = 71;
			this->label5->Text = L"Fecha Nac.";
			// 
			// lblCorreo
			// 
			this->lblCorreo->AutoSize = true;
			this->lblCorreo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCorreo->Location = System::Drawing::Point(15, 92);
			this->lblCorreo->Name = L"lblCorreo";
			this->lblCorreo->Size = System::Drawing::Size(129, 17);
			this->lblCorreo->TabIndex = 70;
			this->lblCorreo->Text = L"Correo Electronico";
			// 
			// lblCelular
			// 
			this->lblCelular->AutoSize = true;
			this->lblCelular->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCelular->Location = System::Drawing::Point(15, 68);
			this->lblCelular->Name = L"lblCelular";
			this->lblCelular->Size = System::Drawing::Size(54, 17);
			this->lblCelular->TabIndex = 69;
			this->lblCelular->Text = L"Celular";
			// 
			// lblNombre
			// 
			this->lblNombre->AutoSize = true;
			this->lblNombre->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNombre->Location = System::Drawing::Point(15, 40);
			this->lblNombre->Name = L"lblNombre";
			this->lblNombre->Size = System::Drawing::Size(61, 17);
			this->lblNombre->TabIndex = 68;
			this->lblNombre->Text = L"Nombre";
			// 
			// lblDNI
			// 
			this->lblDNI->AutoSize = true;
			this->lblDNI->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDNI->Location = System::Drawing::Point(15, 14);
			this->lblDNI->Name = L"lblDNI";
			this->lblDNI->Size = System::Drawing::Size(31, 17);
			this->lblDNI->TabIndex = 67;
			this->lblDNI->Text = L"DNI";
			// 
			// frmCliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(469, 450);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->txtBuscar);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnBuscar);
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
			this->Name = L"frmCliente";
			this->Text = L"frmCliente";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLista))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
