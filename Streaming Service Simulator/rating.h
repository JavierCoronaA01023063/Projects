#include <iostream>
using namespace std;

#pragma once
class Rating
{
public:
    int rating1[10];
    int countr = 0;
    int ratingfin = 0;

    //to get rating from movies...

    void rate()
    {
        cout << "Now can you please leave a rating from 0 to 5:" << endl;
        cin >> rating1[countr];
        while (rating1[countr] < 0 || rating1[countr] > 5)
        {
            cout << "Please a rating betwen 0-5, please:" << endl;
            cin >> rating1[countr];
        }
        countr++;   

    }   

    int ratingt()
    {   
        for (int i = 0; i < countr; i++)
        {
            ratingfin = ratingfin +rating1[i];
        }
        ratingfin = ratingfin/countr;
        cout << "This movie is rated:" << ratingfin << endl;
        return ratingfin;
    }

    
    
};