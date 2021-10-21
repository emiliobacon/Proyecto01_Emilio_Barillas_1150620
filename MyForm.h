#pragma once
#include "Playlist.h"

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
	private: System::Windows::Forms::Label^ lblMostrarPlaylist;
	private: System::Windows::Forms::Button^ btnExportarPlaylist;

	private: System::Windows::Forms::Button^ btnBorrarPlaylist;
	public:
		

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
			this->lblTama�oPlaylist = (gcnew System::Windows::Forms::Label());
			this->btnBorrarPlaylist = (gcnew System::Windows::Forms::Button());
			this->lblMostrarPlaylist = (gcnew System::Windows::Forms::Label());
			this->btnExportarPlaylist = (gcnew System::Windows::Forms::Button());
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
			this->lblPlaylist->Location = System::Drawing::Point(12, 107);
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
			// lblTama�oPlaylist
			// 
			this->lblTama�oPlaylist->AutoSize = true;
			this->lblTama�oPlaylist->Location = System::Drawing::Point(12, 123);
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
			// lblMostrarPlaylist
			// 
			this->lblMostrarPlaylist->AutoSize = true;
			this->lblMostrarPlaylist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMostrarPlaylist->Location = System::Drawing::Point(12, 146);
			this->lblMostrarPlaylist->Name = L"lblMostrarPlaylist";
			this->lblMostrarPlaylist->Size = System::Drawing::Size(0, 13);
			this->lblMostrarPlaylist->TabIndex = 8;
			// 
			// btnExportarPlaylist
			// 
			this->btnExportarPlaylist->Location = System::Drawing::Point(357, 51);
			this->btnExportarPlaylist->Name = L"btnExportarPlaylist";
			this->btnExportarPlaylist->Size = System::Drawing::Size(105, 33);
			this->btnExportarPlaylist->TabIndex = 9;
			this->btnExportarPlaylist->Text = L"Exportar Playlist";
			this->btnExportarPlaylist->UseVisualStyleBackColor = true;
			this->btnExportarPlaylist->Click += gcnew System::EventHandler(this, &MyForm::btnExportarPlaylist_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(764, 399);
			this->Controls->Add(this->btnExportarPlaylist);
			this->Controls->Add(this->lblMostrarPlaylist);
			this->Controls->Add(this->btnBorrarPlaylist);
			this->Controls->Add(this->lblTama�oPlaylist);
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

		lblTama�oPlaylist->Text = "Canciones: " + Playlist1->Size();
		lblMostrarPlaylist->Text = (Playlist1->Recorrer());
		
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

		lblMostrarPlaylist->Text = (Playlist1->Recorrer());

}
private: System::Void btnBorrarPlaylist_Click(System::Object^ sender, System::EventArgs^ e) {

	Playlist1->Limpiar();
	lblTama�oPlaylist->Text = "Canciones: " + Playlist1->Size();
	lblMostrarPlaylist->Text = (Playlist1->Recorrer());
}
private: System::Void btnExportarPlaylist_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
