#pragma once
#include "Cancion.h"
ref class Playlist
{
	Cancion^ Cabeza; 

public: 
	void Insertar(String^ pista, String^ artista);
	String^ Quitar();
	void Limpiar();
	bool PilaVacia();
	int Size();
	String^ Peek();
};

