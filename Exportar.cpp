#include "Exportar.h"


using namespace std; 
using namespace System;

void Exportar::Imprimir(String^ datos)
{
	string playlistparaimprimir = msclr::interop::marshal_as<std::string>(datos);

	ofstream myFile;
	myFile.open("Playlist.csv");
	myFile << playlistparaimprimir;
	myFile.close();
}
