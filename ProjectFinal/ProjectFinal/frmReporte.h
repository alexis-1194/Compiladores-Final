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



	private: System::Windows::Forms::DateTimePicker^  dtpFecha;
	private: System::Windows::Forms::TextBox^  txtNumeroBoleta;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  lblF;
	private: System::Windows::Forms::Label^  lblH;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::Label^  lblSubtotal;
	private: System::Windows::Forms::TextBox^  txtSubTotal;


	private: System::Windows::Forms::Label^  lblIGV;
	private: System::Windows::Forms::TextBox^  txtIGV;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;
	private: System::Windows::Forms::Label^  lblLinea;









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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->btnImprimir = (gcnew System::Windows::Forms::Button());
			this->pdDocument = (gcnew System::Drawing::Printing::PrintDocument());
			this->ppPreview = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			this->txtTotal = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dtpFecha = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtNumeroBoleta = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lblF = (gcnew System::Windows::Forms::Label());
			this->lblH = (gcnew System::Windows::Forms::Label());
			this->lblSubtotal = (gcnew System::Windows::Forms::Label());
			this->txtSubTotal = (gcnew System::Windows::Forms::TextBox());
			this->lblIGV = (gcnew System::Windows::Forms::Label());
			this->txtIGV = (gcnew System::Windows::Forms::TextBox());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->lblLinea = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnImprimir
			// 
			this->btnImprimir->Location = System::Drawing::Point(408, 251);
			this->btnImprimir->Name = L"btnImprimir";
			this->btnImprimir->Size = System::Drawing::Size(77, 29);
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
			this->btnSalir->Location = System::Drawing::Point(408, 286);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Size = System::Drawing::Size(77, 29);
			this->btnSalir->TabIndex = 2;
			this->btnSalir->Text = L"Salir";
			this->btnSalir->UseVisualStyleBackColor = true;
			this->btnSalir->Click += gcnew System::EventHandler(this, &frmReporte::btnSalir_Click);
			// 
			// txtTotal
			// 
			this->txtTotal->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->txtTotal->Location = System::Drawing::Point(355, 418);
			this->txtTotal->Name = L"txtTotal";
			this->txtTotal->Size = System::Drawing::Size(61, 20);
			this->txtTotal->TabIndex = 13;
			this->txtTotal->TextChanged += gcnew System::EventHandler(this, &frmReporte::txtTotal_TextChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::RaisedHorizontal;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ControlLightLight;
			this->dataGridView1->Location = System::Drawing::Point(12, 142);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(404, 189);
			this->dataGridView1->TabIndex = 12;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Item";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Descripción";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"P. Unitario";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Cantidad";
			this->Column4->Name = L"Column4";
			// 
			// dtpFecha
			// 
			this->dtpFecha->Location = System::Drawing::Point(156, 116);
			this->dtpFecha->Name = L"dtpFecha";
			this->dtpFecha->Size = System::Drawing::Size(199, 20);
			this->dtpFecha->TabIndex = 11;
			this->dtpFecha->Visible = false;
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
			this->label2->Size = System::Drawing::Size(52, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Ticket N°";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(153, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(159, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"LA ECONOMICA COMPU S.A.C";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(301, 421);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 13);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Total";
			this->label3->Click += gcnew System::EventHandler(this, &frmReporte::label3_Click);
			// 
			// lblF
			// 
			this->lblF->AutoSize = true;
			this->lblF->Location = System::Drawing::Point(153, 67);
			this->lblF->Name = L"lblF";
			this->lblF->Size = System::Drawing::Size(40, 13);
			this->lblF->TabIndex = 15;
			this->lblF->Text = L"Fecha ";
			// 
			// lblH
			// 
			this->lblH->AutoSize = true;
			this->lblH->Location = System::Drawing::Point(153, 91);
			this->lblH->Name = L"lblH";
			this->lblH->Size = System::Drawing::Size(33, 13);
			this->lblH->TabIndex = 16;
			this->lblH->Text = L"Hora ";
			// 
			// lblSubtotal
			// 
			this->lblSubtotal->AutoSize = true;
			this->lblSubtotal->Location = System::Drawing::Point(285, 368);
			this->lblSubtotal->Name = L"lblSubtotal";
			this->lblSubtotal->Size = System::Drawing::Size(49, 13);
			this->lblSubtotal->TabIndex = 18;
			this->lblSubtotal->Text = L"Sub total";
			// 
			// txtSubTotal
			// 
			this->txtSubTotal->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->txtSubTotal->Location = System::Drawing::Point(355, 365);
			this->txtSubTotal->Name = L"txtSubTotal";
			this->txtSubTotal->Size = System::Drawing::Size(61, 20);
			this->txtSubTotal->TabIndex = 17;
			// 
			// lblIGV
			// 
			this->lblIGV->AutoSize = true;
			this->lblIGV->Location = System::Drawing::Point(312, 394);
			this->lblIGV->Name = L"lblIGV";
			this->lblIGV->Size = System::Drawing::Size(21, 13);
			this->lblIGV->TabIndex = 20;
			this->lblIGV->Text = L"igv";
			// 
			// txtIGV
			// 
			this->txtIGV->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->txtIGV->Location = System::Drawing::Point(355, 391);
			this->txtIGV->Name = L"txtIGV";
			this->txtIGV->Size = System::Drawing::Size(61, 20);
			this->txtIGV->TabIndex = 19;
			// 
			// lblLinea
			// 
			this->lblLinea->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->lblLinea->AutoSize = true;
			this->lblLinea->Location = System::Drawing::Point(12, 343);
			this->lblLinea->Name = L"lblLinea";
			this->lblLinea->Size = System::Drawing::Size(35, 13);
			this->lblLinea->TabIndex = 21;
			this->lblLinea->Text = L"label4";
			// 
			// frmReporte
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(497, 467);
			this->Controls->Add(this->lblLinea);
			this->Controls->Add(this->lblIGV);
			this->Controls->Add(this->txtIGV);
			this->Controls->Add(this->lblSubtotal);
			this->Controls->Add(this->txtSubTotal);
			this->Controls->Add(this->lblH);
			this->Controls->Add(this->lblF);
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
		/*20->distancia de izquiera a derecha*/
		/*15->distancia de arriba hacia abajo*/
		e->Graphics->DrawString(label1->Text, gcnew System::Drawing::Font("Verdana", 17, FontStyle::Bold), drawBrush, 20, 15, drawFormat);

		e->Graphics->DrawString(label2->Text, gcnew System::Drawing::Font("Helvetica", 14, FontStyle::Bold), drawBrush, 20, 55, drawFormat);
		e->Graphics->DrawString(txtNumeroBoleta->Text, drawFont, drawBrush, 135, 55, drawFormat);

		int d = dtpFecha->Value.Day;
		int m = dtpFecha->Value.Month;
		int a = dtpFecha->Value.Year;

		double h = dtpFecha->Value.Hour;
		double min = dtpFecha->Value.Minute;
		double s = dtpFecha->Value.Second;

		String ^fecha = d + " / " + m + " / " + a;
		String ^hora = h + " : " + min + " : " + s;

		String ^linea = "   --------------------------------------------------------------";
		
		lblLinea->Text = linea;

		e->Graphics->DrawString(lblF->Text, gcnew System::Drawing::Font("Helvetica", 14, FontStyle::Bold), drawBrush, 250, 55, drawFormat);
		e->Graphics->DrawString(lblH->Text, gcnew System::Drawing::Font("Helvetica", 14, FontStyle::Bold), drawBrush, 260, 95, drawFormat);

		e->Graphics->DrawString(fecha, drawFont, drawBrush, 320, 55, drawFormat);
		e->Graphics->DrawString(hora, drawFont, drawBrush, 320, 95, drawFormat);

		e->Graphics->DrawString(lblLinea->Text, drawFont, drawBrush, 0, 340, drawFormat);

		e->Graphics->DrawString(lblSubtotal->Text, gcnew System::Drawing::Font("Helvetica", 14, FontStyle::Bold), drawBrush, 280, 360, drawFormat);
		e->Graphics->DrawString(txtSubTotal->Text, drawFont, drawBrush, 390, 360, drawFormat);

		e->Graphics->DrawString(lblIGV->Text, gcnew System::Drawing::Font("Helvetica", 14, FontStyle::Bold), drawBrush, 340, 400, drawFormat);
		e->Graphics->DrawString(txtIGV->Text, drawFont, drawBrush, 390, 400, drawFormat);

		e->Graphics->DrawString(label3->Text, gcnew System::Drawing::Font("Helvetica", 14, FontStyle::Bold), drawBrush, 320, 440, drawFormat);
		e->Graphics->DrawString(txtTotal->Text, drawFont, drawBrush, 390, 440, drawFormat);

	}

	private: void imprimir(vector<Detalle> Ex) {
		double SubTotal = 0;
		dataGridView1->Rows->Clear();
		double importe = 0, igv = 0, tot = 0;

		for (int i = 0; i < (int)Ex.size(); i++) {
			dataGridView1->Rows->Add(i + 1,
				gcnew String(Ex[i].getDescripcion()),
				Convert::ToDouble(Ex[i].getPrecio()),
				Convert::ToInt32(Ex[i].getCantidad())
			);
			importe = Ex[i].getPrecio() * Ex[i].getCantidad();
			SubTotal += Convert::ToDouble(importe);
			igv = 0.18*SubTotal;
			tot = SubTotal + igv;
		}
		//
		txtSubTotal->Text = Convert::ToString(SubTotal);
		txtIGV->Text = Convert::ToString(igv);
		txtTotal->Text = Convert::ToString(tot);
	}

	private: System::Void frmReporte_Load(System::Object^  sender, System::EventArgs^  e) {
		listaDetalles = daoDetalle.consultar(codDetalle);
		txtNumeroBoleta->Text = Convert::ToString(int(rand() * 978551));
		imprimir(listaDetalles);
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
		catch (Exception ^exs) {
			cout << Global::StringToChar(exs->Message) << endl;
			MessageBox::Show("Error");
		}
	}
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
