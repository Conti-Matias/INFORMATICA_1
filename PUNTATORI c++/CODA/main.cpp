#include <iostream>
#include "Coda.h"

using namespace std;

int main() {
    Coda c(100);
    c.push(13);
    c.push(14);
    c.push(15);
    c.push(16);
    c.push(17);
    c.pop();
    c.push(18);

    int x = c.top();
    cout<<"primo elemento: "<<x<<endl;

    c.stampa();

}