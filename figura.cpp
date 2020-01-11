#include "figura.h"

   Figura::Figura(float Fs,float freq1,float ph1,float mashtab1,float freq2,float ph2,float mashtab2,int points)
    {
        Figura::firstSignal = new Masiv(Fs,freq1,ph1,mashtab1,points);

        Figura::secondSignal = new Masiv(Fs,freq2,ph2,mashtab2,points);

        Figura::Num = points;
    }
    /*void Figura::step()
    {
        Figura::firstSignal->step();

        Figura::secondSignal->step();
    }*/
    QVector<double> Figura::getX()
    {
        return Figura::firstSignal->arr;
    }

    QVector<double> Figura::getY()
    {
        return Figura::secondSignal->arr;
    }

    int Figura::getN()
    {
        return Figura::Num;
    }

    Figura::~Figura()
    {
        delete Figura::firstSignal;

        delete Figura::secondSignal;
    }

