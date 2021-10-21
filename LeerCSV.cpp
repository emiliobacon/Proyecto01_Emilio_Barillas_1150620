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

    while (myFile.good())
    {
        string linea; 
        getline(myFile, linea, ',');

       
        String^ retorno = gcnew String(linea.data());
        
        return retorno;
    }
}
