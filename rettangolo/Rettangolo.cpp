#include<iostream>
#include<cmath>
using namespace std;
#include "Rettangolo.h"
    Rettangolo::Rettangolo()
    {
        base=1;
        altezza=1;
    }
    Rettangolo::Rettangolo(double base, double altezza)
    {
        this->base=base;
        this->altezza=altezza;
    }
    void Rettangolo::setBase(double base)
    {
        this->base=base;
    }
     void Rettangolo::setAltezza(double altezza)
    {
        this->altezza=altezza;
    }
    
    double Rettangolo::getBase()
    {
         return base;
    }
    double Rettangolo::getAltezza()
    {
        return altezza;
    }
    double Rettangolo::calcolaPerimetro()
    {
        double z;
        z=(altezza * 2)+(base * 2);
        return z;
    }
    double Rettangolo::calcolaArea()
    {
        double x;
        x=base*altezza;
        return x;
    }
    double Rettangolo::calcolaDiagonale()
    {
        return sqrt(base*base+altezza*altezza);
    }
    void Rettangolo::stampaTutto()
    {
        cout<<"base "<<base<<endl;
        cout<<"altezza "<<altezza<<endl;
        cout<<"perimetro "<<calcolaPerimetro()<<endl;
        cout<<"area "<<calcolaArea()<<endl;
        cout<<"diagonale "<<calcolaDiagonale()<<endl;
    }
