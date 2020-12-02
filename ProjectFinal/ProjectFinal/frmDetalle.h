#pragma once

namespace ProjectFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmDetalle
	/// </summary>
	public ref class frmDetalle : public System::Windows::Forms::Form
	{
	public:
		frmDetalle(void)
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
		~frmDetalle()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dgvLista;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::Button^  btnCerrar;





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
			this->dgvLista = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnCerrar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLista))->BeginInit();
			this->SuspendLayout();
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
			this->dgvLista->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1, this->Column2,
					this->Column3, this->Column4, this->Column5
			});
			this->dgvLista->EnableHeadersVisualStyles = false;
			this->dgvLista->GridColor = System::Drawing::Color::SteelBlue;
			this->dgvLista->Location = System::Drawing::Point(11, 22);
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
			this->dgvLista->Size = System::Drawing::Size(510, 375);
			this->dgvLista->TabIndex = 130;
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
			this->Column2->HeaderText = L"DESCRIPCIÓN";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 119;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"PRECIO";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 79;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"CANTIDAD";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 98;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"IMPORTE";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 84;
			// 
			// btnCerrar
			// 
			this->btnCerrar->Location = System::Drawing::Point(446, 403);
			this->btnCerrar->Name = L"btnCerrar";
			this->btnCerrar->Size = System::Drawing::Size(75, 28);
			this->btnCerrar->TabIndex = 131;
			this->btnCerrar->Text = L"Cerrar";
			this->btnCerrar->UseVisualStyleBackColor = true;
			this->btnCerrar->Click += gcnew System::EventHandler(this, &frmDetalle::btnCerrar_Click);
			// 
			// frmDetalle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(533, 440);
			this->Controls->Add(this->btnCerrar);
			this->Controls->Add(this->dgvLista);
			this->Name = L"frmDetalle";
			this->Text = L"frmDetalle";
			this->Load += gcnew System::EventHandler(this, &frmDetalle::frmDetalle_Load);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmDetalle::frmDetalle_MouseMove);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLista))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: static int xmove = 0;
	private: static int ymove = 0;

	private: System::Void frmDetalle_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
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

	private: void imprimir(std::vector<Detalle> Ex) {
		dgvLista->Rows->Clear();
		for (int i = 0; i < (int)Ex.size(); i++) {
			/*if (Ex[i].id == idDetalle) {*/
			dgvLista->Rows->Add(gcnew String(Ex[i].getCodigo()),
				gcnew String(Ex[i].getDescripcion()),
				Convert::ToDouble(Ex[i].getPrecio()),
				Convert::ToInt32(Ex[i].getCantidad()),
				Convert::ToDouble(Ex[i].getSubTotal())
			);
			//}
		}
	}

	private: System::Void frmDetalle_Load(System::Object^  sender, System::EventArgs^  e) {
		listaDetalles = daoDetalle.consultar(codDetalle);
		imprimir(listaDetalles);
	}
	private: System::Void btnCerrar_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	};
}
