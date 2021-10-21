#include "LeerCSV.h"
#include "Playlist.h"

#include <fstream>
#include <string>
#include <string>
#include <iostream>


using namespace System;
using namespace std; 

String^ LeerCSV::Leer()
{
    ifstream myFile;
    myFile.open("datos.csv");

    string Retorno; 

    while (myFile.good())
    {
        string linea; 
        getline(myFile, linea, ',');
        
        Retorno += linea + '\n';
    }

    String^ str3 = gcnew String(Retorno.data());
    return str3;
}
