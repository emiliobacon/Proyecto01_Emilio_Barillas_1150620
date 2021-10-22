#include "Playlist.h"

void Playlist::Insertar(String^ pista, String^ artista)
{
    Cancion^ Nuevo = gcnew Cancion();
    if (artista == "")
        Nuevo->Artista = "DESCONOCIDO";
    else
        Nuevo->Artista = artista; 
    if (pista == "")
        Nuevo->Pista = "DESCONOCIDO";
    else
        Nuevo->Pista = pista; 

    Nuevo->Siguiente = Cabeza; 
    Cabeza = Nuevo; 
}

void Playlist::Insertar(String^ datos)
{
    Cancion^ Nuevo = gcnew Cancion();
    Nuevo->Artista = datos; 
    Nuevo->Siguiente = Cabeza;
    Cabeza = Nuevo;
}

String^ Playlist::Quitar()
{
    if (Cabeza == nullptr)
        return nullptr; 
    String^ Retorno = Cabeza->Pista + "-" + Cabeza->Artista;
    
    Cancion^ Top = Cabeza; 
    Cabeza = Cabeza->Siguiente; 
    delete(Top);
    
    return Retorno;
}


String^ Playlist::Recorrer()
{
    Cancion^ Recorrer = gcnew Cancion();
    String^ Datos; 
    Recorrer = Cabeza; 
    while (Recorrer != nullptr)
    {
        Datos += Recorrer->Pista + "-" + Recorrer->Artista + "\n";
        Recorrer = Recorrer->Siguiente;
    }
    return Datos;
}

String^ Playlist::Imprimir()
{
    Cancion^ Recorrer = gcnew Cancion();
    String^ Datos;
    Recorrer = Cabeza;
    while (Recorrer != nullptr)
    {
        Datos += Recorrer->Artista + "\n";
        Recorrer = Recorrer->Siguiente;
    }
    return Datos;
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
