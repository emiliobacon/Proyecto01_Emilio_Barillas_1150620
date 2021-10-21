#pragma once
#include "Playlist.h"
#include "LeerCSV.h"


namespace PartyMix {

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
		LeerCSV^ Leer = gcnew LeerCSV();

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
	private: System::Windows::Forms::ListBox^ listboxPlaylist;




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
			this->lblAhoraReproduciendo = (gcnew System::Windows::Forms::Label());
			this->txtAhoraReproduciendo = (gcnew System::Windows::Forms::TextBox());
			this->lblPlaylist = (gcnew System::Windows::Forms::Label());
			this->btnReproducir = (gcnew System::Windows::Forms::Button());
			this->listboxPlaylist = (gcnew System::Windows::Forms::ListBox());
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
			this->lblPlaylist->Location = System::Drawing::Point(652, 22);
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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(764, 399);
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
		Playlist1->Insertar("Silk", "Giselle");
		Playlist1->Insertar("Bungalow" , "Al Bairre");
		
		
	}
	
	
private: System::Void btnReproducir_Click(System::Object^ sender, System::EventArgs^ e) {


	if (Playlist1->PilaVacia() == false)
	{
		txtAhoraReproduciendo->Text = Playlist1->Quitar();
	}
	else
	{
		txtAhoraReproduciendo->Text = "Playlist Vacía";
	}


}
};
}
