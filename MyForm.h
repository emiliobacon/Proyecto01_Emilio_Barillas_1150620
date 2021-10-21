#pragma once
#include "Playlist.h"
#include "LeerCSV.h"
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
	private: System::Windows::Forms::Label^ lblTama�oPlaylist;
	private: System::Windows::Forms::Button^ btnBorrarPlaylist;
	public:
		LeerCSV^ Leer = gcnew LeerCSV();

		MyForm(void)
		{
			InitializeComponent();
			
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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
	private: System::Windows::Forms::ListBox^ listboxPlaylist;




	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lblAhoraReproduciendo = (gcnew System::Windows::Forms::Label());
			this->txtAhoraReproduciendo = (gcnew System::Windows::Forms::TextBox());
			this->lblPlaylist = (gcnew System::Windows::Forms::Label());
			this->btnReproducir = (gcnew System::Windows::Forms::Button());
			this->listboxPlaylist = (gcnew System::Windows::Forms::ListBox());
			this->lblTama�oPlaylist = (gcnew System::Windows::Forms::Label());
			this->btnBorrarPlaylist = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblAhoraReproduciendo
			// 
			this->lblAhoraReproduciendo->AutoSize = true;
			this->lblAhoraReproduciendo->Location = System::Drawing::Point(12, 9);
			this->lblAhoraReproduciendo->Name = L"lblAhoraReproduciendo";
			this->lblAhoraReproduciendo->Size = System::Drawing::Size(117, 13);
			this->lblAhoraReproduciendo->TabIndex = 0;
			this->lblAhoraReproduciendo->Text = L"Ahora Reproduciendo: ";
			// 
			// txtAhoraReproduciendo
			// 
			this->txtAhoraReproduciendo->Location = System::Drawing::Point(135, 6);
			this->txtAhoraReproduciendo->Name = L"txtAhoraReproduciendo";
			this->txtAhoraReproduciendo->Size = System::Drawing::Size(279, 20);
			this->txtAhoraReproduciendo->TabIndex = 1;
			// 
			// lblPlaylist
			// 
			this->lblPlaylist->AutoSize = true;
			this->lblPlaylist->Location = System::Drawing::Point(597, 6);
			this->lblPlaylist->Name = L"lblPlaylist";
			this->lblPlaylist->Size = System::Drawing::Size(39, 13);
			this->lblPlaylist->TabIndex = 2;
			this->lblPlaylist->Text = L"Playlist";
			// 
			// btnReproducir
			// 
			this->btnReproducir->Location = System::Drawing::Point(135, 51);
			this->btnReproducir->Name = L"btnReproducir";
			this->btnReproducir->Size = System::Drawing::Size(105, 33);
			this->btnReproducir->TabIndex = 4;
			this->btnReproducir->Text = L"Reproducir";
			this->btnReproducir->UseVisualStyleBackColor = true;
			this->btnReproducir->Click += gcnew System::EventHandler(this, &MyForm::btnReproducir_Click);
			// 
			// listboxPlaylist
			// 
			this->listboxPlaylist->FormattingEnabled = true;
			this->listboxPlaylist->Location = System::Drawing::Point(600, 38);
			this->listboxPlaylist->Name = L"listboxPlaylist";
			this->listboxPlaylist->Size = System::Drawing::Size(140, 342);
			this->listboxPlaylist->TabIndex = 5;
			// 
			// lblTama�oPlaylist
			// 
			this->lblTama�oPlaylist->AutoSize = true;
			this->lblTama�oPlaylist->Location = System::Drawing::Point(597, 22);
			this->lblTama�oPlaylist->Name = L"lblTama�oPlaylist";
			this->lblTama�oPlaylist->Size = System::Drawing::Size(66, 13);
			this->lblTama�oPlaylist->TabIndex = 6;
			this->lblTama�oPlaylist->Text = L"Canciones:  ";
			// 
			// btnBorrarPlaylist
			// 
			this->btnBorrarPlaylist->Location = System::Drawing::Point(246, 51);
			this->btnBorrarPlaylist->Name = L"btnBorrarPlaylist";
			this->btnBorrarPlaylist->Size = System::Drawing::Size(105, 33);
			this->btnBorrarPlaylist->TabIndex = 7;
			this->btnBorrarPlaylist->Text = L"Borrar Playlist";
			this->btnBorrarPlaylist->UseVisualStyleBackColor = true;
			this->btnBorrarPlaylist->Click += gcnew System::EventHandler(this, &MyForm::btnBorrarPlaylist_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(764, 399);
			this->Controls->Add(this->btnBorrarPlaylist);
			this->Controls->Add(this->lblTama�oPlaylist);
			this->Controls->Add(this->listboxPlaylist);
			this->Controls->Add(this->btnReproducir);
			this->Controls->Add(this->lblPlaylist);
			this->Controls->Add(this->txtAhoraReproduciendo);
			this->Controls->Add(this->lblAhoraReproduciendo);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		ifstream myFile; 
		myFile.open("datos.csv");

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

			if (linea == "" && token != "")
			{
				String^ pista = gcnew String(token.data());
				Playlist1->Insertar(pista, "DESCONOCIDO");

			}
			else if (token == "" && linea != "")
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
			}
		}

		lblTama�oPlaylist->Text = "Canciones: " + Playlist1->Size();
		
		
	}
	
	

	private: System::Void btnReproducir_Click(System::Object^ sender, System::EventArgs^ e) {
	
		lblTama�oPlaylist->Text = "Canciones: " + Playlist1->Size();

		if (Playlist1->PilaVacia() == false)
		{
			txtAhoraReproduciendo->Text = Playlist1->Quitar();
		}
		else
		{
			txtAhoraReproduciendo->Text = "Playlist Vac�a";
		}


}
private: System::Void btnBorrarPlaylist_Click(System::Object^ sender, System::EventArgs^ e) {

	Playlist1->Limpiar();
	lblTama�oPlaylist->Text = "Canciones: " + Playlist1->Size();
}
};
}
