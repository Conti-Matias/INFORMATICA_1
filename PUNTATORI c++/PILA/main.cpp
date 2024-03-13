#include "Pila.h"
#include <iostream>

using namespace std;

int main()
{
    //Pila r1;
    Pila r2(10);

    r2.push(2);
    r2.push(3);
    
    r2.stampa();
    cout<<"\n\n";

    r2.pop();
    r2.stampa();
}
