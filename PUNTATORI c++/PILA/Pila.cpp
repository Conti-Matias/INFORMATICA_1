#include <iostream>
#include "Pila.h"

using namespace std;

Pila::Pila()
{
    vet=new int[10];
    size=10;
    fine=0;
}

Pila::Pila(int size)
{
    vet=new int[10];
    this->size=size;
    fine=0;
}

bool Pila::isEmpty()
{
    if(fine==0)return true;
    return false;
}

bool Pila::isFull()
{
    if(fine==size)return true;
    return false;
}

bool Pila::push(int x)
{
    if(!isFull())
    {
        vet[fine]=x;
        fine++;
        return true;
    }
    return false;
}

bool Pila::pop(void)
{
    if(!isEmpty())
    {
        fine--;
        return true;
    }
    return false;
}

int Pila::top(void)
{
    if(!isEmpty())
    {
        return vet[fine-1];
    }
    return 0;
}

void Pila::stampa(void)
{
    if(!isEmpty())
    {
       for(int i=0;i<fine;i++) cout<<vet[i]<<endl;
    }
    
}

