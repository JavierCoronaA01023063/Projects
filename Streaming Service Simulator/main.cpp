#include "pelicula.h"
#include "info.h"
#include "series.h"
#include "rating.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
    Pelicula Shrek;
    Shrek.Pelis(001, "Shrek", 130, "Accion");

    Pelicula StarWars;
    StarWars.Pelis(002, "Star Wars", 160, "Fantasia");

    Pelicula IndianaJones;
    IndianaJones.Pelis(003, "Indiana Jones", 150, "Accion");

    Series Suits;
    Suits.Serie(0011, "Suits", 40, "Accion");

    Series Friends;
    Friends.Serie(0012, "Friends", 25, "Familia");

    Rating SW;
    Rating Shreck;
    Rating IJ;

    char choice;
    char m='m';
    char s='s';
    string sh="sh";
    string swars="swars";
    string indjones="indjones";
    string suts="suts";
    string frends="frends";

    string mchoice;
    string schoice;
    string tchoice;
    string epchoice;
    string selectepisodio;

    string t1;
    string t2;
    string t3;
    string t4;
   
    int newratingg;

    Suits.setTemporada("Temporada 1");
    Suits.setTemporada("Temporada 2");
    Suits.setTemporada("Temporada 3");
    Suits.setTemporada("Temporada 4");

    Friends.setTemporada("Temporada 1");
    Friends.setTemporada("Temporada 2");
    Friends.setTemporada("Temporada 3");
    Friends.setTemporada("Temporada 4");

    Suits.setEpisodios("one", 5, 51);
    Suits.setEpisodios("two", 3, 43);
    Suits.setEpisodios("three", 2, 45);
    Suits.setEpisodios("four", 4, 48);
    Suits.setEpisodios("five", 2, 47);
    Suits.setEpisodios("six", 4, 40);
    Suits.setEpisodios("seven", 3, 39);
    Suits.setEpisodios("eight", 5, 33);
    Suits.setEpisodios("nine", 4, 38);
    Suits.setEpisodios("teen", 2, 37);

    Friends.setEpisodios("one", 5, 20);
    Friends.setEpisodios("two", 2, 22);
    Friends.setEpisodios("three", 4, 23);
    Friends.setEpisodios("four", 3, 25);
    Friends.setEpisodios("five", 5, 28);
    Friends.setEpisodios("six", 5, 29);
    Friends.setEpisodios("seven", 3, 21);
    Friends.setEpisodios("eight", 5, 18);
    Friends.setEpisodios("nine", 3, 22);
    Friends.setEpisodios("teen", 4, 28);  

    cout << "Do you want to see a movie or a series? m or s" << endl;
    cin >> choice;
    if (choice == m)
    {
        Shrek.play(); // abstract class on main!
        cout << "What movie do you want to see?" << endl;
        cout << "Options: For Shrek input sh, for Starwars input swars and for Indianajones input indjones" << endl;
        cin >> mchoice;
        if (mchoice == sh)
        {
            cout << "Playing Shrek!" << endl;
            Shreck.rate();
            Shreck.ratingt();
        }
        else if (mchoice == swars)
        {
            Pelicula StarWars;
            cout << "Playing Star Wars!" << endl;
            SW.rate();
            SW.ratingt();
        }
        else if (mchoice == indjones)
        {
            Pelicula IndianaJones;
            cout << "Playing Indiana Jones!" << endl;
            IJ.rate();
            IJ.ratingt();
        }
        else
        {
            cout << "Not in the options" << endl;
        }
    }
    else if (choice == s)
    {
        Suits.play(); //abstract class on main!
        cout << "What series do you want to see?" << endl;
        cout << "Options: For Suits input suts and for Friends input frends" << endl;
        cin >> schoice;
        if (schoice == suts)
        {
            cout << "Which season of Suits you want to see?" << endl;
            cout << "Options t1, t2, t3, t4" << endl;
            cin >> tchoice;
            cout << "What episode you want to see?: one to teen" << endl;
            cin >> epchoice;

            cout << "Playing episode, " << epchoice << endl;

            cout << "Leave a rating for the episode, please" << endl;
            cin >> newratingg;
            cout << "Thanks" << endl;
            cout << "Now the rating is: " << endl;
            Suits.insertRating(epchoice, newratingg); 
            Suits.promedio(epchoice);
        }
        else if (schoice == frends)
        {
            Series Friends;
            cout << "Which season of Friends you want to see?" << endl;
            cout << "Options t1, t2, t3, t4" << endl;
            cin >> tchoice;
            cout << "What episode you want to see?: one to teen" << endl;
            cin >> epchoice;
            
            cout << "Playing episode, " << epchoice << endl;

            cout << "Leave a rating for the episode, please" << endl;
            cin >> newratingg;
            cout << "Thanks" << endl;
            cout << "Now the rating is: " << endl;
            Friends.insertRating(epchoice, newratingg); 
            Friends.promedio(epchoice);
        }
    }
    return 1;
};