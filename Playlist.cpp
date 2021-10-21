#include "Playlist.h"

void Playlist::Insertar(String^ pista, String^ artista)
{
    Cancion^ Nuevo = gcnew Cancion();
    Nuevo->Artista = artista; 
    Nuevo->Pista = pista; 
    Nuevo->Siguiente = Cabeza; 
    Cabeza = Nuevo; 
}

String^ Playlist::Quitar()
{
    if (Cabeza == nullptr)
        return nullptr; 
    String^ Retorno = Cabeza->Pista + " " + Cabeza->Artista;
    
    Cancion^ Top = Cabeza; 
    Cabeza = Cabeza->Siguiente; 
    delete(Top);
    
    return Retorno;
}

void Playlist::Limpiar()
{
    while (!PilaVacia())
    {
        Quitar();
    }
}

bool Playlist::PilaVacia()
{
    if (Cabeza == nullptr)
    {
        return true; 
    }
    else
    {
        return false;
    }
    
}

int Playlist::Size()
{
    int Cantidad = 0;
    for (Cancion^ i = Cabeza; i != nullptr; i = i->Siguiente)
    {
        Cantidad++;
    }
    return Cantidad; 
}   

String^ Playlist::Peek()
{
    if (!PilaVacia()) 
    {
        String^ Retorno = Cabeza->Artista + " " + Cabeza->Pista;
        return Retorno;
    }
    else
    {
        return nullptr; 
    }    
}
