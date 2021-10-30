#pragma once
#include "Playlist.h"
#include "Imprimir.h"
#include "Queue.h"
#include <fstream>
#include <string>
#include <iostream>



namespace PartyMix {
	using namespace std; 
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		
		Playlist^ Playlist1 = gcnew Playlist();
		Playlist^ Anteriores = gcnew Playlist();
		Imprimir^ Print = gcnew Imprimir();
		Cola^ Queue = gcnew Cola();
		

	private: System::Windows::Forms::Label^ lblTamañoPlaylist;
	private: System::Windows::Forms::Label^ lblMostrarPlaylist;
	private: System::Windows::Forms::TextBox^ txtTituloCola;
	private: System::Windows::Forms::TextBox^ txtArtistaCola;


	private: System::Windows::Forms::Label^ lblTitulo;
	private: System::Windows::Forms::Label^ lblArtista;
	private: System::Windows::Forms::Label^ lblBuscarCanciones;
	private: System::Windows::Forms::Button^ btnExportarPlaylist;
	private: System::Windows::Forms::Button^ btnAgregaraCola;
	private: System::Windows::Forms::Label^ lblMostrarCola;
	private: System::Windows::Forms::Label^ lblCola;
	private: System::Windows::Forms::Label^ lblCancionesCola;
	private: System::Windows::Forms::Button^ btnBorrarCola;
	private: System::Windows::Forms::Button^ btnDesencolar;
	private: System::Windows::Forms::Button^ btnReproducirAnterior;
	private: System::Windows::Forms::Button^ btnReproducirSiguiente;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblRecienSonadas;
	private: System::Windows::Forms::Button^ btnSync;





	private: System::Windows::Forms::Button^ btnBorrarPlaylist;
	public:
		

		MyForm(void)
		{
			InitializeComponent();
			
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblAhoraReproduciendo;
	protected:
	private: System::Windows::Forms::TextBox^ txtAhoraReproduciendo;
	private: System::Windows::Forms::Label^ lblPlaylist;

	private: System::Windows::Forms::Button^ btnReproducir;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->lblAhoraReproduciendo = (gcnew System::Windows::Forms::Label());
			this->txtAhoraReproduciendo = (gcnew System::Windows::Forms::TextBox());
			this->lblPlaylist = (gcnew System::Windows::Forms::Label());
			this->btnReproducir = (gcnew System::Windows::Forms::Button());
			this->lblTamañoPlaylist = (gcnew System::Windows::Forms::Label());
			this->btnBorrarPlaylist = (gcnew System::Windows::Forms::Button());
			this->lblMostrarPlaylist = (gcnew System::Windows::Forms::Label());
			this->txtTituloCola = (gcnew System::Windows::Forms::TextBox());
			this->txtArtistaCola = (gcnew System::Windows::Forms::TextBox());
			this->lblTitulo = (gcnew System::Windows::Forms::Label());
			this->lblArtista = (gcnew System::Windows::Forms::Label());
			this->lblBuscarCanciones = (gcnew System::Windows::Forms::Label());
			this->btnExportarPlaylist = (gcnew System::Windows::Forms::Button());
			this->btnAgregaraCola = (gcnew System::Windows::Forms::Button());
			this->lblMostrarCola = (gcnew System::Windows::Forms::Label());
			this->lblCola = (gcnew System::Windows::Forms::Label());
			this->lblCancionesCola = (gcnew System::Windows::Forms::Label());
			this->btnBorrarCola = (gcnew System::Windows::Forms::Button());
			this->btnDesencolar = (gcnew System::Windows::Forms::Button());
			this->btnReproducirAnterior = (gcnew System::Windows::Forms::Button());
			this->btnReproducirSiguiente = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblRecienSonadas = (gcnew System::Windows::Forms::Label());
			this->btnSync = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblAhoraReproduciendo
			// 
			this->lblAhoraReproduciendo->AutoSize = true;
			this->lblAhoraReproduciendo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblAhoraReproduciendo->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lblAhoraReproduciendo->Location = System::Drawing::Point(12, 9);
			this->lblAhoraReproduciendo->Name = L"lblAhoraReproduciendo";
			this->lblAhoraReproduciendo->Size = System::Drawing::Size(138, 13);
			this->lblAhoraReproduciendo->TabIndex = 0;
			this->lblAhoraReproduciendo->Text = L"Ahora Reproduciendo: ";
			// 
			// txtAhoraReproduciendo
			// 
			this->txtAhoraReproduciendo->Enabled = false;
			this->txtAhoraReproduciendo->Location = System::Drawing::Point(145, 6);
			this->txtAhoraReproduciendo->Name = L"txtAhoraReproduciendo";
			this->txtAhoraReproduciendo->Size = System::Drawing::Size(279, 20);
			this->txtAhoraReproduciendo->TabIndex = 1;
			// 
			// lblPlaylist
			// 
			this->lblPlaylist->AutoSize = true;
			this->lblPlaylist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPlaylist->ForeColor = System::Drawing::Color::White;
			this->lblPlaylist->Location = System::Drawing::Point(12, 120);
			this->lblPlaylist->Name = L"lblPlaylist";
			this->lblPlaylist->Size = System::Drawing::Size(47, 13);
			this->lblPlaylist->TabIndex = 2;
			this->lblPlaylist->Text = L"Playlist";
			// 
			// btnReproducir
			// 
			this->btnReproducir->BackColor = System::Drawing::Color::LimeGreen;
			this->btnReproducir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReproducir->ForeColor = System::Drawing::Color::Black;
			this->btnReproducir->Location = System::Drawing::Point(91, 51);
			this->btnReproducir->Name = L"btnReproducir";
			this->btnReproducir->Size = System::Drawing::Size(105, 33);
			this->btnReproducir->TabIndex = 4;
			this->btnReproducir->Text = L"Reproducir";
			this->btnReproducir->UseVisualStyleBackColor = false;
			this->btnReproducir->Click += gcnew System::EventHandler(this, &MyForm::btnReproducir_Click);
			// 
			// lblTamañoPlaylist
			// 
			this->lblTamañoPlaylist->AutoSize = true;
			this->lblTamañoPlaylist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTamañoPlaylist->ForeColor = System::Drawing::Color::White;
			this->lblTamañoPlaylist->Location = System::Drawing::Point(12, 136);
			this->lblTamañoPlaylist->Name = L"lblTamañoPlaylist";
			this->lblTamañoPlaylist->Size = System::Drawing::Size(78, 13);
			this->lblTamañoPlaylist->TabIndex = 6;
			this->lblTamañoPlaylist->Text = L"Canciones:  ";
			// 
			// btnBorrarPlaylist
			// 
			this->btnBorrarPlaylist->BackColor = System::Drawing::Color::LimeGreen;
			this->btnBorrarPlaylist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnBorrarPlaylist->ForeColor = System::Drawing::Color::Black;
			this->btnBorrarPlaylist->Location = System::Drawing::Point(202, 51);
			this->btnBorrarPlaylist->Name = L"btnBorrarPlaylist";
			this->btnBorrarPlaylist->Size = System::Drawing::Size(105, 33);
			this->btnBorrarPlaylist->TabIndex = 7;
			this->btnBorrarPlaylist->Text = L"Borrar Playlist";
			this->btnBorrarPlaylist->UseVisualStyleBackColor = false;
			this->btnBorrarPlaylist->Click += gcnew System::EventHandler(this, &MyForm::btnBorrarPlaylist_Click);
			// 
			// lblMostrarPlaylist
			// 
			this->lblMostrarPlaylist->AutoSize = true;
			this->lblMostrarPlaylist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMostrarPlaylist->ForeColor = System::Drawing::Color::White;
			this->lblMostrarPlaylist->Location = System::Drawing::Point(12, 161);
			this->lblMostrarPlaylist->Name = L"lblMostrarPlaylist";
			this->lblMostrarPlaylist->Size = System::Drawing::Size(0, 13);
			this->lblMostrarPlaylist->TabIndex = 8;
			// 
			// txtTituloCola
			// 
			this->txtTituloCola->Location = System::Drawing::Point(708, 47);
			this->txtTituloCola->Name = L"txtTituloCola";
			this->txtTituloCola->Size = System::Drawing::Size(98, 20);
			this->txtTituloCola->TabIndex = 10;
			// 
			// txtArtistaCola
			// 
			this->txtArtistaCola->Location = System::Drawing::Point(826, 47);
			this->txtArtistaCola->Name = L"txtArtistaCola";
			this->txtArtistaCola->Size = System::Drawing::Size(98, 20);
			this->txtArtistaCola->TabIndex = 11;
			// 
			// lblTitulo
			// 
			this->lblTitulo->AutoSize = true;
			this->lblTitulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitulo->ForeColor = System::Drawing::Color::White;
			this->lblTitulo->Location = System::Drawing::Point(705, 31);
			this->lblTitulo->Name = L"lblTitulo";
			this->lblTitulo->Size = System::Drawing::Size(41, 13);
			this->lblTitulo->TabIndex = 12;
			this->lblTitulo->Text = L"Título";
			// 
			// lblArtista
			// 
			this->lblArtista->AutoSize = true;
			this->lblArtista->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblArtista->ForeColor = System::Drawing::Color::White;
			this->lblArtista->Location = System::Drawing::Point(823, 31);
			this->lblArtista->Name = L"lblArtista";
			this->lblArtista->Size = System::Drawing::Size(43, 13);
			this->lblArtista->TabIndex = 13;
			this->lblArtista->Text = L"Artista";
			// 
			// lblBuscarCanciones
			// 
			this->lblBuscarCanciones->AutoSize = true;
			this->lblBuscarCanciones->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBuscarCanciones->ForeColor = System::Drawing::Color::White;
			this->lblBuscarCanciones->Location = System::Drawing::Point(705, 9);
			this->lblBuscarCanciones->Name = L"lblBuscarCanciones";
			this->lblBuscarCanciones->Size = System::Drawing::Size(109, 13);
			this->lblBuscarCanciones->TabIndex = 14;
			this->lblBuscarCanciones->Text = L"Buscar Canciones";
			// 
			// btnExportarPlaylist
			// 
			this->btnExportarPlaylist->BackColor = System::Drawing::Color::LimeGreen;
			this->btnExportarPlaylist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnExportarPlaylist->ForeColor = System::Drawing::Color::Black;
			this->btnExportarPlaylist->Location = System::Drawing::Point(313, 51);
			this->btnExportarPlaylist->Name = L"btnExportarPlaylist";
			this->btnExportarPlaylist->Size = System::Drawing::Size(111, 33);
			this->btnExportarPlaylist->TabIndex = 9;
			this->btnExportarPlaylist->Text = L"Exportar Playlist";
			this->btnExportarPlaylist->UseVisualStyleBackColor = false;
			this->btnExportarPlaylist->Click += gcnew System::EventHandler(this, &MyForm::btnExportarPlaylist_Click);
			// 
			// btnAgregaraCola
			// 
			this->btnAgregaraCola->BackColor = System::Drawing::Color::LimeGreen;
			this->btnAgregaraCola->Location = System::Drawing::Point(708, 73);
			this->btnAgregaraCola->Name = L"btnAgregaraCola";
			this->btnAgregaraCola->Size = System::Drawing::Size(105, 33);
			this->btnAgregaraCola->TabIndex = 15;
			this->btnAgregaraCola->Text = L"Agregar a la Cola";
			this->btnAgregaraCola->UseVisualStyleBackColor = false;
			this->btnAgregaraCola->Click += gcnew System::EventHandler(this, &MyForm::btnAgregaraCola_Click);
			// 
			// lblMostrarCola
			// 
			this->lblMostrarCola->AutoSize = true;
			this->lblMostrarCola->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMostrarCola->ForeColor = System::Drawing::Color::White;
			this->lblMostrarCola->Location = System::Drawing::Point(705, 200);
			this->lblMostrarCola->Name = L"lblMostrarCola";
			this->lblMostrarCola->Size = System::Drawing::Size(0, 13);
			this->lblMostrarCola->TabIndex = 16;
			// 
			// lblCola
			// 
			this->lblCola->AutoSize = true;
			this->lblCola->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCola->ForeColor = System::Drawing::Color::White;
			this->lblCola->Location = System::Drawing::Point(705, 157);
			this->lblCola->Name = L"lblCola";
			this->lblCola->Size = System::Drawing::Size(32, 13);
			this->lblCola->TabIndex = 17;
			this->lblCola->Text = L"Cola";
			// 
			// lblCancionesCola
			// 
			this->lblCancionesCola->AutoSize = true;
			this->lblCancionesCola->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCancionesCola->ForeColor = System::Drawing::Color::White;
			this->lblCancionesCola->Location = System::Drawing::Point(705, 173);
			this->lblCancionesCola->Name = L"lblCancionesCola";
			this->lblCancionesCola->Size = System::Drawing::Size(74, 13);
			this->lblCancionesCola->TabIndex = 18;
			this->lblCancionesCola->Text = L"Canciones: ";
			// 
			// btnBorrarCola
			// 
			this->btnBorrarCola->BackColor = System::Drawing::Color::LimeGreen;
			this->btnBorrarCola->Location = System::Drawing::Point(826, 112);
			this->btnBorrarCola->Name = L"btnBorrarCola";
			this->btnBorrarCola->Size = System::Drawing::Size(105, 33);
			this->btnBorrarCola->TabIndex = 19;
			this->btnBorrarCola->Text = L"Borrar Cola";
			this->btnBorrarCola->UseVisualStyleBackColor = false;
			this->btnBorrarCola->Click += gcnew System::EventHandler(this, &MyForm::btnBorrarCola_Click);
			// 
			// btnDesencolar
			// 
			this->btnDesencolar->BackColor = System::Drawing::Color::LimeGreen;
			this->btnDesencolar->Location = System::Drawing::Point(708, 112);
			this->btnDesencolar->Name = L"btnDesencolar";
			this->btnDesencolar->Size = System::Drawing::Size(105, 33);
			this->btnDesencolar->TabIndex = 20;
			this->btnDesencolar->Text = L"Eliminar de la Cola";
			this->btnDesencolar->UseVisualStyleBackColor = false;
			this->btnDesencolar->Click += gcnew System::EventHandler(this, &MyForm::btnDesencolar_Click);
			// 
			// btnReproducirAnterior
			// 
			this->btnReproducirAnterior->BackColor = System::Drawing::Color::LimeGreen;
			this->btnReproducirAnterior->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnReproducirAnterior->Location = System::Drawing::Point(786, 323);
			this->btnReproducirAnterior->Name = L"btnReproducirAnterior";
			this->btnReproducirAnterior->Size = System::Drawing::Size(105, 47);
			this->btnReproducirAnterior->TabIndex = 21;
			this->btnReproducirAnterior->Text = L"Reproducir Anterior";
			this->btnReproducirAnterior->UseVisualStyleBackColor = false;
			this->btnReproducirAnterior->Click += gcnew System::EventHandler(this, &MyForm::btnReproducirAnterior_Click);
			// 
			// btnReproducirSiguiente
			// 
			this->btnReproducirSiguiente->BackColor = System::Drawing::Color::LimeGreen;
			this->btnReproducirSiguiente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnReproducirSiguiente->Location = System::Drawing::Point(897, 323);
			this->btnReproducirSiguiente->Name = L"btnReproducirSiguiente";
			this->btnReproducirSiguiente->Size = System::Drawing::Size(105, 47);
			this->btnReproducirSiguiente->TabIndex = 22;
			this->btnReproducirSiguiente->Text = L"Reproducir Siguiente";
			this->btnReproducirSiguiente->UseVisualStyleBackColor = false;
			this->btnReproducirSiguiente->Click += gcnew System::EventHandler(this, &MyForm::btnReproducirSiguiente_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(320, 120);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(104, 13);
			this->label1->TabIndex = 23;
			this->label1->Text = L"Recién Sonadas:";
			// 
			// lblRecienSonadas
			// 
			this->lblRecienSonadas->AutoSize = true;
			this->lblRecienSonadas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRecienSonadas->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lblRecienSonadas->Location = System::Drawing::Point(320, 157);
			this->lblRecienSonadas->Name = L"lblRecienSonadas";
			this->lblRecienSonadas->Size = System::Drawing::Size(0, 13);
			this->lblRecienSonadas->TabIndex = 24;
			// 
			// btnSync
			// 
			this->btnSync->BackColor = System::Drawing::Color::LimeGreen;
			this->btnSync->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSync->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSync.Image")));
			this->btnSync->Location = System::Drawing::Point(711, 314);
			this->btnSync->Name = L"btnSync";
			this->btnSync->Size = System::Drawing::Size(58, 56);
			this->btnSync->TabIndex = 25;
			this->btnSync->UseVisualStyleBackColor = false;
			this->btnSync->Click += gcnew System::EventHandler(this, &MyForm::btnSync_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(1061, 391);
			this->Controls->Add(this->btnSync);
			this->Controls->Add(this->lblRecienSonadas);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblMostrarPlaylist);
			this->Controls->Add(this->lblPlaylist);
			this->Controls->Add(this->lblTamañoPlaylist);
			this->Controls->Add(this->btnReproducirSiguiente);
			this->Controls->Add(this->btnReproducirAnterior);
			this->Controls->Add(this->btnDesencolar);
			this->Controls->Add(this->btnBorrarCola);
			this->Controls->Add(this->lblCancionesCola);
			this->Controls->Add(this->lblCola);
			this->Controls->Add(this->lblMostrarCola);
			this->Controls->Add(this->btnAgregaraCola);
			this->Controls->Add(this->lblBuscarCanciones);
			this->Controls->Add(this->lblArtista);
			this->Controls->Add(this->lblTitulo);
			this->Controls->Add(this->txtArtistaCola);
			this->Controls->Add(this->txtTituloCola);
			this->Controls->Add(this->btnExportarPlaylist);
			this->Controls->Add(this->btnBorrarPlaylist);
			this->Controls->Add(this->btnReproducir);
			this->Controls->Add(this->txtAhoraReproduciendo);
			this->Controls->Add(this->lblAhoraReproduciendo);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Spotify";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		ifstream myFile; 
		myFile.open("archivo3.csv");

		while (myFile.good())
		{
			string linea; 
			getline(myFile, linea, ',');

			size_t pos = 0; 
			string limitador = "-";
			string token; 
			while ((pos = linea.find(limitador)) != std::string::npos)
			{
				token = linea.substr(0, pos);
				
				linea.erase(0, pos + limitador.length());
			}

			String^ pista = gcnew String(token.data());
			String^ artista = gcnew String(linea.data());
			Playlist1->Insertar(pista, artista);

			/*if (linea == "" && token != "")
			{
				String^ pista = gcnew String(token.data());
				Playlist1->Insertar(pista, "DESCONOCIDO");

			}
			else if (token == ""  linea != "")
			{
				String^ artista = gcnew String(linea.data());
				Playlist1->Insertar("DESCONOCIDO", artista);
			}
			else if (token == "" && linea == "")
			{
				Playlist1->Insertar("DESCONOCIDO", "DESCONOCIDO");
			}
			else 
			{
				String^ pista = gcnew String(token.data());
				String^ artista = gcnew String(linea.data());
				Playlist1->Insertar(pista, artista);
			}*/
		}

		lblTamañoPlaylist->Text = "Canciones: " + Playlist1->Size();
		lblMostrarPlaylist->Text = (Playlist1->Recorrer());
		lblCancionesCola->Text = "Canciones: " + Queue->Tamano();
		
	}
	
	
	

private: System::Void btnReproducir_Click(System::Object^ sender, System::EventArgs^ e) {
	
		if (Playlist1->PilaVacia() == false)
		{
			String^ Sonada = Playlist1->Quitar();
			txtAhoraReproduciendo->Text = Sonada;
			lblMostrarPlaylist->Text = (Playlist1->Recorrer());
			lblTamañoPlaylist->Text = "Canciones: " + Playlist1->Size();
			Anteriores->Insertar(Sonada);
			lblRecienSonadas->Text = Anteriores->Imprimir();
		}
		else if(!Queue->ColaVacia())
		{
			Sync();
		}
		else
		{
			txtAhoraReproduciendo->Text = "Playlist Vacía";
			lblMostrarPlaylist->Text = "Playlist Vacía";
		}
}
private: System::Void btnBorrarPlaylist_Click(System::Object^ sender, System::EventArgs^ e) {

	Playlist1->Limpiar();
	lblTamañoPlaylist->Text = "Canciones: " + Playlist1->Size();
	lblMostrarPlaylist->Text = (Playlist1->Recorrer());
	lblMostrarPlaylist->Text = "Playlist Vacía";
}
private: System::Void btnExportarPlaylist_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!Playlist1->PilaVacia())
	{
		Print->Exportar(Playlist1->Recorrer());
		MessageBox::Show("Archivo .csv exportado correctamente.");
	}
	else
		MessageBox::Show("Playlist Vacía");
}
private: System::Void btnAgregaraCola_Click(System::Object^ sender, System::EventArgs^ e) {
	
	Queue->EnColar(txtTituloCola->Text, txtArtistaCola->Text);
	lblMostrarCola->Text = Queue->Recorrer();
	txtTituloCola->Text = "";
	txtArtistaCola->Text = "";
	lblCancionesCola->Text = "Canciones: " + Queue->Tamano();
}
private: System::Void btnBorrarCola_Click(System::Object^ sender, System::EventArgs^ e) {
	Queue->Limpiar();
	lblCancionesCola->Text = "Canciones: " + Queue->Tamano();
	
	if (Queue->ColaVacia() == true) 
	{
		lblMostrarCola->Text = "Cola Vacía";
	}
}
private: System::Void btnDesencolar_Click(System::Object^ sender, System::EventArgs^ e) {

	Queue->Desencolar();
	lblMostrarCola->Text = Queue->Recorrer();
	lblCancionesCola->Text = "Canciones: " + Queue->Tamano();
	if (Queue->ColaVacia() == true)
	{
		lblMostrarCola->Text = "Cola Vacía";
	}

}


private: System::Void btnReproducirSiguiente_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
	if (Queue->ColaVacia() == true)
	{
		lblMostrarCola->Text = "Cola Vacía";
		txtAhoraReproduciendo->Text = "";
	}
	else
	{
		String^ RecienOido = Queue->Desencolar();
		txtAhoraReproduciendo->Text = RecienOido;

		lblMostrarCola->Text = Queue->Recorrer();
		
		lblCancionesCola->Text = "Canciones: " + Queue->Tamano();
		Anteriores->Insertar(RecienOido);
		lblRecienSonadas->Text = Anteriores->Imprimir();
	}
	
}
	   
private: System::Void btnReproducirAnterior_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!Anteriores->PilaVacia())
	{
		txtAhoraReproduciendo->Text = Anteriores->Quitar();
		lblRecienSonadas->Text = Anteriores->Imprimir();
	}
	else
		MessageBox::Show("No hay canciones");
}
private: System::Void btnSync_Click(System::Object^ sender, System::EventArgs^ e) {
	Sync();	
}

void Sync() {
	while (!Queue->ColaVacia())
	{
		Playlist1->Insertar(Queue->Desencolar());
		lblMostrarPlaylist->Text = Playlist1->Recorrer();
		lblMostrarCola->Text = Queue->Recorrer();
		lblCancionesCola->Text = "Canciones: " + Queue->Tamano();
		lblTamañoPlaylist->Text = "Canciones: " + Playlist1->Size();

	}
}
};
}
