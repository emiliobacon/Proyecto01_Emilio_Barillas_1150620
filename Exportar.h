#pragma once
#include <iostream>
#include <fstream>
#include <vcclr.h>
#include <msclr\marshal_cppstd.h>

using namespace System; 

ref class Exportar
{
public: 

	void Imprimir(String^ datos);
};

