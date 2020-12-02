#pragma once

namespace ProjectFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmReporte
	/// </summary>
	public ref class frmReporte : public System::Windows::Forms::Form
	{
	public:
		frmReporte(void)
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
		~frmReporte()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Button^  btnImprimir;
	private: System::Drawing::Printing::PrintDocument^  pdDocument;
	private: System::Windows::Forms::PrintPreviewDialog^  ppPreview;
	private: System::Windows::Forms::Button^  btnSalir;

	private: System::Windows::Forms::TextBox^  txtTotal;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DateTimePicker^  dtpFecha;
	private: System::Windows::Forms::TextBox^  txtNumeroBoleta;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;


	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(frmReporte::typeid));
			this->btnImprimir = (gcnew System::Windows::Forms::Button());
			this->pdDocument = (gcnew System::Drawing::Printing::PrintDocument());
			this->ppPreview = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			this->txtTotal = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dtpFecha = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtNumeroBoleta = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnImprimir
			// 
			this->btnImprimir->Location = System::Drawing::Point(381, 251);
			this->btnImprimir->Name = L"btnImprimir";
			this->btnImprimir->Size = System::Drawing::Size(104, 29);
			this->btnImprimir->TabIndex = 1;
			this->btnImprimir->Text = L"Imprimir";
			this->btnImprimir->UseVisualStyleBackColor = true;
			this->btnImprimir->Click += gcnew System::EventHandler(this, &frmReporte::btnImprimir_Click);
			// 
			// pdDocument
			// 
			this->pdDocument->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &frmReporte::pdDocument_PrintPage);
			// 
			// ppPreview
			// 
			this->ppPreview->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->ppPreview->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->ppPreview->ClientSize = System::Drawing::Size(400, 300);
			this->ppPreview->Enabled = true;
			this->ppPreview->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"ppPreview.Icon")));
			this->ppPreview->Name = L"ppPreview";
			this->ppPreview->Visible = false;
			// 
			// btnSalir
			// 
			this->btnSalir->Location = System::Drawing::Point(381, 286);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Size = System::Drawing::Size(104, 29);
			this->btnSalir->TabIndex = 2;
			this->btnSalir->Text = L"Salir";
			this->btnSalir->UseVisualStyleBackColor = true;
			this->btnSalir->Click += gcnew System::EventHandler(this, &frmReporte::btnSalir_Click);
			// 
			// txtTotal
			// 
			this->txtTotal->Location = System::Drawing::Point(255, 326);
			this->txtTotal->Name = L"txtTotal";
			this->txtTotal->Size = System::Drawing::Size(100, 20);
			this->txtTotal->TabIndex = 13;
			this->txtTotal->TextChanged += gcnew System::EventHandler(this, &frmReporte::txtTotal_TextChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 142);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(343, 173);
			this->dataGridView1->TabIndex = 12;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"CODIGO PRODUCTO";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"NOMBRE PRODUCTO";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"PRECIO PRODUCTO";
			this->Column3->Name = L"Column3";
			// 
			// dtpFecha
			// 
			this->dtpFecha->Location = System::Drawing::Point(156, 67);
			this->dtpFecha->Name = L"dtpFecha";
			this->dtpFecha->Size = System::Drawing::Size(199, 20);
			this->dtpFecha->TabIndex = 11;
			// 
			// txtNumeroBoleta
			// 
			this->txtNumeroBoleta->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->txtNumeroBoleta->Enabled = false;
			this->txtNumeroBoleta->Location = System::Drawing::Point(63, 64);
			this->txtNumeroBoleta->Name = L"txtNumeroBoleta";
			this->txtNumeroBoleta->Size = System::Drawing::Size(67, 20);
			this->txtNumeroBoleta->TabIndex = 10;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"TICKET";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(153, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"NOMBRE BODEGA";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(197, 329);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 13);
			this->label3->TabIndex = 14;
			this->label3->Text = L"TOTAL";
			// 
			// frmReporte
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(497, 362);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtTotal);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->dtpFecha);
			this->Controls->Add(this->txtNumeroBoleta);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnSalir);
			this->Controls->Add(this->btnImprimir);
			this->Name = L"frmReporte";
			this->Text = L"frmReporte";
			this->Load += gcnew System::EventHandler(this, &frmReporte::frmReporte_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pdDocument_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {

		System::Drawing::Font^ drawFont = gcnew System::Drawing::Font("Arial", 14);
		SolidBrush^ drawBrush = gcnew SolidBrush(Color::Black);
		StringFormat^ drawFormat = gcnew StringFormat();
		drawFormat->FormatFlags = StringFormatFlags::NoWrap;

		Bitmap ^objBmp = gcnew Bitmap(this->dataGridView1->Width, this->dataGridView1->Height);
		dataGridView1->DrawToBitmap(objBmp, System::Drawing::Rectangle(0, 0, this->dataGridView1->Width, this->dataGridView1->Height));

		e->Graphics->DrawImage(objBmp, 20, 120);
		/*20->distancia de izquiera a de recha*/
		/*15->distancia de arriba hacia abajo*/
		e->Graphics->DrawString(label1->Text, drawFont, drawBrush, 20, 15, drawFormat);

		e->Graphics->DrawString(label2->Text, drawFont, drawBrush, 20, 55, drawFormat);
		e->Graphics->DrawString(txtNumeroBoleta->Text, drawFont, drawBrush, 135, 55, drawFormat);

		int d = dtpFecha->Value.Day;
		int m = dtpFecha->Value.Month;
		int a = dtpFecha->Value.Year;

		e->Graphics->DrawString("" + d + " / " + m.ToString() + " / " + a, drawFont, drawBrush, 200, 85, drawFormat);

		e->Graphics->DrawString(label3->Text, drawFont, drawBrush, 200, 360, drawFormat);
		e->Graphics->DrawString(txtTotal->Text, drawFont, drawBrush, 270, 360, drawFormat);
	}
	private: System::Void frmReporte_Load(System::Object^  sender, System::EventArgs^  e) {


	}
	private: System::Void btnSalir_Click(System::Object^  sender, System::EventArgs^  e) {
		//ppPreview = nullptr;
		this->Close();
	}
	private: System::Void txtTotal_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void btnImprimir_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			ppPreview->Document = pdDocument;
			ppPreview->Show();
		}
		catch (Exception^ exs) {
			MessageBox::Show("Error");
		}
	}
};
}
