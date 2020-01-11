#include "masiv.h"
#include <math.h>

Masiv::Masiv(float Fs,float freq,float ph,float mashtab,int points)
{
     Masiv::cN = points;

     Masiv::arr = QVector<double>(Masiv::cN);

     Masiv::cFs =Fs;

     Masiv::cfreq=freq;

     Masiv::cph=ph;

     Masiv::cMashtab=mashtab;

     int i;

     for(i=0;i<Masiv::cN;i++)
        {
           Masiv::arr[i] = Masiv::cMashtab*cos(2*M_PI*Masiv::cfreq*i/Masiv::cFs+Masiv::cph);
           Masiv::ct=Masiv::cN/Masiv::cFs;
        }
}
/*void Masiv::step()
    {
         int i;
         for(i=0;i<Masiv::cN;i++)
         Masiv::arr[i] = Masiv::cMashtab*cos(2*M_PI*Masiv::cfreq*(i/Masiv::cFs+Masiv::ct)+Masiv::cph);
         Masiv::ct=Masiv::ct+Masiv::cN/Masiv::cFs;
    }
*/
Masiv::~Masiv()
{
    //delete Masiv::arr;
}
