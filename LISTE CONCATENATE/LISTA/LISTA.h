#include <iostream>

#ifndef LISTA_H
#define LISTA_H

using namespace std;

struct nodo {
    int info;
    struct nodo *next;
} typedef nodo;

class Lista {
    private:
        nodo *testa;

    public:
        Lista();
        ~Lista();
        void InsInTesta(int);
        void cancellaTesta();
        void InsInCoda(int);
        void CancellaCoda();
        void StampaLista();
        void InserisciPosizione(int, int);
        void CancellaPosizione(int);
};

#endif