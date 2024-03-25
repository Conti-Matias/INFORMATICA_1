#ifndef CODA_H
#define CODA_H

class Coda {
    
    private:
        int nElementi;
        int fine;
        int inizio;
        int size;
        int *vet;
    
    public:
        Coda(int size = 10) {
            this -> size = size;
            vet = new int[size];
            inizio = 0;
            fine = 0;
            nElementi = 0;
        }

        bool isEmpty();
        bool isFull();
        bool push(int);
        bool pop();
        int top();
        void stampa();
};

#endif
