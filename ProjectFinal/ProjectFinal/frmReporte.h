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
	private: System::Windows::Forms::ListBox^  lstDocumento;
	protected:

	private: System::Windows::Forms::Button^  btnImprimir;
	private: System::Drawing::Printing::PrintDocument^  pdDocument;
	private: System::Windows::Forms::PrintPreviewDialog^  ppPreview;


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
			this->lstDocumento = (gcnew System::Windows::Forms::ListBox());
			this->btnImprimir = (gcnew System::Windows::Forms::Button());
			this->pdDocument = (gcnew System::Drawing::Printing::PrintDocument());
			this->ppPreview = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->SuspendLayout();
			// 
			// lstDocumento
			// 
			this->lstDocumento->FormattingEnabled = true;
			this->lstDocumento->Location = System::Drawing::Point(12, 12);
			this->lstDocumento->Name = L"lstDocumento";
			this->lstDocumento->Size = System::Drawing::Size(473, 303);
			this->lstDocumento->TabIndex = 0;
			this->lstDocumento->SelectedIndexChanged += gcnew System::EventHandler(this, &frmReporte::listBox1_SelectedIndexChanged);
			// 
			// btnImprimir
			// 
			this->btnImprimir->Location = System::Drawing::Point(381, 321);
			this->btnImprimir->Name = L"btnImprimir";
			this->btnImprimir->Size = System::Drawing::Size(104, 29);
			this->btnImprimir->TabIndex = 1;
			this->btnImprimir->Text = L"Imprimir";
			this->btnImprimir->UseVisualStyleBackColor = true;
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
			// frmReporte
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(497, 362);
			this->Controls->Add(this->btnImprimir);
			this->Controls->Add(this->lstDocumento);
			this->Name = L"frmReporte";
			this->Text = L"frmReporte";
			this->Load += gcnew System::EventHandler(this, &frmReporte::frmReporte_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pdDocument_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {

	}
	private: System::Void frmReporte_Load(System::Object^  sender, System::EventArgs^  e) {

		listaDetalles = daoDetalle.consultar("V_00002");
		listaVentas = daoVenta.consultar();

		lstDocumento->Items->Add("COD. CLIENTE" + "COD. EMPLEADO" + "P. Unitario	" + "Cantidad");

		lstDocumento->Items->Add("		");

		lstDocumento->Items->Add("ITEM	" + "DESCRIPCIÓN	" + "P. Unitario	" + "Cantidad");

		for (int i = 0; i < (int)listaDetalles.size(); i++) {
			lstDocumento->Items->Add(i + 1 + "	" +
				gcnew String(listaDetalles[i].getDescripcion()) + "		" +
				listaDetalles[i].getPrecio() + "	" +
				listaDetalles[i].getCantidad());
		}



	}
	};
}
