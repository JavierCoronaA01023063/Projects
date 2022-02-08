#include <iostream>
#include <string>
using namespace std;
#include "info.h"


#pragma once
class Series:public Info
{
public: 
    
    int countt = 0;
    int counte = 0; 
    string nombreS[40];
    string nombret[4];
    int duracionS[40];
    int ratingS[40];


    void Serie(int id, string nombre, int duracion, string genero)
    {
        setId(id);
        setNombre(nombre);
        setDuracion(duracion);
        setGenero(genero);
    }

    void setEpisodios(string nombre, int rating, int duracion)
    {
        nombreS[counte]=nombre;
        ratingS[counte]=rating;
        duracionS[counte]=duracion;
        counte++;
    }

    string getEpisodios(int episodio)
    {
        return nombreS[episodio];
    }

    int searchEp(string nombre)
    {
        for (int i = 0; i < counte; i++)
        {
            if (nombreS[i].compare(nombre)==0)
            {
                return i;
            }
        }
        return -1;
    }


    int ratingsfin = 0;
    int newratingg;
    int conters=0;

    void promedio(string cap)
    {
        int id = searchEp(cap);
        cout<<ratingS[id]<<endl;
    }

    void insertRating(string cap, int newRating)
    {
        int id = searchEp(cap);
        ratingS[id] = (ratingS[id]+newRating)/2;
    }

    void setTemporada(string nombret)
    {
        this-> nombret[countt] = nombret;
        countt++;
    }

    void play()
    {
        cout << "Playing series" << endl;
    }
    

};