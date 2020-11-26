#pragma once

namespace ProjectFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmLogin
	/// </summary>
	public ref class frmLogin : public System::Windows::Forms::Form
	{
	public:
		frmLogin(void)
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
		~frmLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblError;
	protected:
	private: System::Windows::Forms::Button^  btnINGRESAR;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txtPassword;
	private: System::Windows::Forms::TextBox^  txtUser;
	private: System::Windows::Forms::PictureBox^  ptrMinimizar;
	private: System::Windows::Forms::PictureBox^  ptrCerrar;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(frmLogin::typeid));
			this->lblError = (gcnew System::Windows::Forms::Label());
			this->btnINGRESAR = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtUser = (gcnew System::Windows::Forms::TextBox());
			this->ptrMinimizar = (gcnew System::Windows::Forms::PictureBox());
			this->ptrCerrar = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ptrMinimizar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ptrCerrar))->BeginInit();
			this->SuspendLayout();
			// 
			// lblError
			// 
			this->lblError->AutoSize = true;
			this->lblError->BackColor = System::Drawing::Color::White;
			this->lblError->Location = System::Drawing::Point(97, 251);
			this->lblError->Name = L"lblError";
			this->lblError->Size = System::Drawing::Size(0, 13);
			this->lblError->TabIndex = 10;
			// 
			// btnINGRESAR
			// 
			this->btnINGRESAR->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(113)),
				static_cast<System::Int32>(static_cast<System::Byte>(164)));
			this->btnINGRESAR->FlatAppearance->BorderSize = 0;
			this->btnINGRESAR->FlatAppearance->MouseDownBackColor = System::Drawing::Color::SteelBlue;
			this->btnINGRESAR->FlatAppearance->MouseOverBackColor = System::Drawing::Color::CadetBlue;
			this->btnINGRESAR->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnINGRESAR->ForeColor = System::Drawing::SystemColors::Desktop;
			this->btnINGRESAR->Location = System::Drawing::Point(42, 208);
			this->btnINGRESAR->Name = L"btnINGRESAR";
			this->btnINGRESAR->Size = System::Drawing::Size(358, 40);
			this->btnINGRESAR->TabIndex = 9;
			this->btnINGRESAR->Text = L"INGRESAR";
			this->btnINGRESAR->UseVisualStyleBackColor = false;
			this->btnINGRESAR->Click += gcnew System::EventHandler(this, &frmLogin::btnINGRESAR_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DimGray;
			this->label1->Location = System::Drawing::Point(181, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 22);
			this->label1->TabIndex = 8;
			this->label1->Text = L"LOGIN";
			// 
			// txtPassword
			// 
			this->txtPassword->BackColor = System::Drawing::Color::White;
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPassword->ForeColor = System::Drawing::Color::DimGray;
			this->txtPassword->Location = System::Drawing::Point(42, 157);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(358, 27);
			this->txtPassword->TabIndex = 7;
			this->txtPassword->Text = L"CONTRASEÑA";
			this->txtPassword->UseSystemPasswordChar = true;
			// 
			// txtUser
			// 
			this->txtUser->BackColor = System::Drawing::Color::White;
			this->txtUser->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtUser->ForeColor = System::Drawing::Color::DimGray;
			this->txtUser->Location = System::Drawing::Point(42, 102);
			this->txtUser->Name = L"txtUser";
			this->txtUser->Size = System::Drawing::Size(358, 27);
			this->txtUser->TabIndex = 6;
			this->txtUser->Text = L"USUARIO";
			// 
			// ptrMinimizar
			// 
			this->ptrMinimizar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ptrMinimizar.Image")));
			this->ptrMinimizar->Location = System::Drawing::Point(407, 0);
			this->ptrMinimizar->Name = L"ptrMinimizar";
			this->ptrMinimizar->Size = System::Drawing::Size(15, 15);
			this->ptrMinimizar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->ptrMinimizar->TabIndex = 12;
			this->ptrMinimizar->TabStop = false;
			this->ptrMinimizar->Click += gcnew System::EventHandler(this, &frmLogin::ptrMinimizar_Click);
			// 
			// ptrCerrar
			// 
			this->ptrCerrar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ptrCerrar.Image")));
			this->ptrCerrar->Location = System::Drawing::Point(428, 0);
			this->ptrCerrar->Name = L"ptrCerrar";
			this->ptrCerrar->Size = System::Drawing::Size(15, 15);
			this->ptrCerrar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->ptrCerrar->TabIndex = 11;
			this->ptrCerrar->TabStop = false;
			this->ptrCerrar->Click += gcnew System::EventHandler(this, &frmLogin::ptrCerrar_Click);
			// 
			// frmLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(443, 286);
			this->Controls->Add(this->ptrMinimizar);
			this->Controls->Add(this->ptrCerrar);
			this->Controls->Add(this->lblError);
			this->Controls->Add(this->btnINGRESAR);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtUser);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"frmLogin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"frmLogin";
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmLogin::frmLogin_MouseMove);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ptrMinimizar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ptrCerrar))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnINGRESAR_Click(System::Object^  sender, System::EventArgs^  e) {
		if (txtUser->Text->Equals("")) {
			MessageBox::Show("Complete campo Usuario");
		}
		else if (txtPassword->Text->Equals("")) {
			MessageBox::Show("Complete campo Contraseña");
		}
		else {
			vector<Usuario> listaUsuarios;
			UsuarioDAO dao;

			listaUsuarios = dao.consultar();//cargar datos de usuario
			for (Usuario user : listaUsuarios) {
				if (txtUser->Text == gcnew String(user.getUserName()) &&
					txtPassword->Text == gcnew String(user.getPassWord())) {
					this->Visible = false;
					//Esconder ventana login
					/*strcpy_s(usuarioActual, lista_empAux[i].nombre);*/
					//Abrir ventana principal
					//strcpy_s(empleadoActual, strcat(strcat(user.getNombre()," "),user.getApellidos()));

					strcpy_s(empleadoActual, user.getCodigo());
					//MessageBox::Show(gcnew String(empleadoActual));
					frmPrincipal ^m = gcnew frmPrincipal();
					m->StartPosition = FormStartPosition::CenterScreen;
					m->Show();
					break;
				}
				else {
					lblError->Text = "USUARIO Y/O CONTRASEÑA INCORRECTOS";
				}
			}
		}
	}
	private: System::Void ptrMinimizar_Click(System::Object^  sender, System::EventArgs^  e) {
		this->WindowState = FormWindowState::Minimized;
	}
	private: System::Void ptrCerrar_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
	private: static int xmove = 0;
	private: static int ymove = 0;
	private: void accionMoverVentana(System::Windows::Forms::MouseEventArgs^  e) {
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
	private: System::Void frmLogin_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		accionMoverVentana(e);
	}
	};
}
