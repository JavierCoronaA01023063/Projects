#include <iostream>
using namespace std;

#pragma once
class Info
{
public:

    virtual void setId(int id)
    {
        id = id;
    }

    virtual void setNombre(string nombre)
    {
        nombre = nombre;
    }

    virtual void setDuracion(int duracion)
    {
        duracion = duracion;
    }

    virtual void setGenero(string genero)
    {
        genero = genero;
    }

    virtual void play()=0;


    

protected:
    int id;
    string nombre;
    int duracion;
    string genero;

};