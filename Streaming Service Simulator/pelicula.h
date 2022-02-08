#include <iostream>
using namespace std;
#include "info.h"

#pragma once
class Pelicula:public Info
{
public: 
    void Pelis(int id, string nombre, int duracion, string genero)
    {
        setId(id);
        setNombre(nombre);
        setDuracion(duracion);
        setGenero(genero);
    }

    string getNombre()
    {
    return nombre;
    }

    int getId()
    {
    return id;
    }

    int getDuracion()
    {
    return duracion;
    }

    string getGenero ()
    {
    return genero;
    }


    void play()
    {
        cout << "Playing movies" << endl;

    }


};