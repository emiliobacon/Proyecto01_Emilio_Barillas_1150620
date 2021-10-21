#pragma once
#include "Cancion.h"
ref class Playlist
{
	Cancion^ Cabeza; 

public: 
	void Insertar(String^ pista, String^ artista);
	void Limpiar();
	int Size();
	String^ Quitar();
	String^ Peek();
	bool PilaVacia();
};

