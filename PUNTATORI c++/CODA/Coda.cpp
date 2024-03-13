#include <iostream>
#include "Coda.h"

using namespace std;

bool Coda::isEmpty() {
    if(nElementi!=0) return false;
    return true;
}

bool Coda::isFull() {
    if (nElementi == size)  return true;
    return false;
}

bool Coda::push(int x) {
    if(!isFull()){
        vet[fine] = x;
        fine = (fine+1)%size;
        nElementi++;
        return true;
    }
    return false;
}

bool Coda::pop() {
    if(!isEmpty()){
        inizio = (inizio+1)%size;
        nElementi--;
        return true;
    }
    return false;
}

int Coda::top() {
    if(!isEmpty()) {
        return vet[fine];
    }
    return 0;
}

void Coda::stampa() {
    if(!isEmpty()) {
        for(int i = inizio; i != fine; i = (i+1)%size) {
            cout << vet[i] << " ";
        }
        cout <<endl;
    }
    else cout<<"coda vuota";
}