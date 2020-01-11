#include <QMainWindow>
#ifndef MASIV_H
#define MASIV_H


class Masiv
{
    float ct;
    float cFs,cfreq,cph,cMashtab;
    int cN;
public:
    QVector<double> arr;
    Masiv(float Fs,float freq,float ph,float mashtab,int points);

   //void step();

    ~Masiv();

};

#endif // MASIV_H
