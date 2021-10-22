#include "Queue.h"

void Cola::EnColar(String^ pista, String^ artista)
{
    Cancion^ Nuevo = gcnew Cancion();
    if(artista == "")
        Nuevo->Artista = "DESCONOCIDO"; 
    else Nuevo->Artista = artista;
    if(pista =="")
        Nuevo->Pista = "DESCONOCIDO"; 
    else  Nuevo->Pista = pista;

    if (Cabeza == nullptr)
    {
        Cabeza = Nuevo; 
        Cola = Nuevo; 
    }
    else
    {
        Cola->Siguiente = Nuevo; 
        Cola = Nuevo; 
    }
}

String^ Cola::Desencolar()
{
    String^ Retorno = nullptr;
    String^ Eliminado;
    if (Cabeza != nullptr)
    {
        Retorno = Cabeza->Artista;
        Retorno = Cabeza->Pista;
        Eliminado = Cabeza->Pista + "-" + Cabeza->Artista;
        Cancion^ Top = Cabeza;
        Cabeza = Cabeza->Siguiente;
        
        if (Cabeza == nullptr)
        {
            Cola = nullptr;
        }
        delete (Top);
        
    }
    
    return Eliminado; 
}

int Cola::Tamano()
{
    int Cantidad = 0; 
    for  (Cancion^ i  = Cabeza; i != nullptr; i = i->Siguiente) 
    {
        Cantidad++;
    }
    return Cantidad; 
}

bool Cola::ColaVacia()
{
    return Cabeza == nullptr;
}

void Cola::Limpiar()
{
    while (!ColaVacia())
    {
        Desencolar();
    }
}

String^ Cola::Recorrer()
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
