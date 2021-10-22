#pragma once
#include "Cancion.h"

using namespace System; 

ref class Cola
{
	Cancion^ Cabeza; 
	Cancion^ Cola;
public: 
	void EnColar(String^ pista, String^ artista);
	String^ Desencolar();
	int Tamano();
	bool ColaVacia();
	void Limpiar();
	String^ Recorrer();
};

