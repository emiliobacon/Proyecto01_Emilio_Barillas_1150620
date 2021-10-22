#include "Imprimir.h"
#include <fstream>

using namespace std; 

void MarshalString(String^ s, string& os) {
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}

void Imprimir::Exportar(String^ datos)
{
	string datosprint;
	MarshalString(datos, datosprint);

	ofstream myFile;
	myFile.open("list.csv");
	myFile << datosprint;
	myFile.close();
}
