#include "masiv.h"
#include <QMainWindow>
#ifndef FIGURA_H
#define FIGURA_H

class Figura
{
    Masiv *firstSignal;
    Masiv *secondSignal;
    int Num;
public:
    Figura(float Fs,float freq1,float ph1,float mashtab1,float freq2,float ph2,float mashtab2,int points);
   // void step();
    QVector<double> getX();
    QVector<double> getY();
    int getN();
    ~Figura();
};
#endif // FIGURA_H
