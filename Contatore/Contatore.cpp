#include<iostream>
#include<cmath>
using namespace std;
#include "Contatore.h"
    Contatore::Contatore()
    {
        Valore=10;
        Passo=1;
    }
    Contatore::Contatore(int valore, int Passo)
    {
        this->Valore=Valore;
        this->Passo=Passo;
    }
    void Contatore::setValore(int Valore)
    {
        this->Valore=Valore;
    }
     void Contatore::setPasso(int Passo)
    {
        this->Passo=Passo;
    }
    
    int Contatore::getValore()
    {
         return Valore;
    }
    int Contatore::getPasso()
    {
        return Passo;
    }
    void Contatore::reset()
    {
        Valore=0;
    }
    void Contatore::inc()
    {
        Valore=Valore+Passo;
    }
    void Contatore::dec()
    {
        Valore=Valore-Passo;
    }
    void Contatore::stampa()
    {
        cout<<"Valore "<<Valore<<endl;
    }
