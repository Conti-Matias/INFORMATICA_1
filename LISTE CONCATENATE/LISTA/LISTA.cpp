#include <iostream>
#include "Lista.h"

using namespace std;

Lista::Lista() {
    this->testa = NULL;
}

Lista::~Lista() {}

void Lista::InsInTesta(int x) {
    nodo *l = new nodo;
    l->info = x;
    l->next = testa;
    testa = l;
}

void Lista::cancellaTesta() {
    nodo *p;
    if(testa != NULL)
    {
        p = testa;
        testa = testa->next;
        delete p;
    }
}

void Lista::InsInCoda(int x) {
    nodo *l = new nodo;
    l->info = x;
    l->next = NULL;
    if (testa == NULL) {
        testa = l;
    } else {
        nodo *p = testa;
        while (p->next != NULL) {
            p = p->next;
        }
        p->next = l;
    }
}

void Lista::CancellaCoda() {
    nodo *p = testa;
    if (testa != NULL)
    {
        while (p->next->next != NULL) {
            p = p->next;
        }
        delete p->next;
        p->next = NULL;
    }
}

void Lista::StampaLista() {
    nodo *p = testa;
    while (p != NULL) {
        cout << p->info << " ";
        p = p->next;
    }
    cout << endl;
}

void Lista::InserisciPosizione(int x, int posizione) {
    nodo *l = new nodo;
    l->info = x;
    if (posizione == 1) {
        l->next = testa;
        testa = l;
    } else {
        nodo *p = testa;
        for (int i = 1; i < posizione - 1; i++) {
            p = p->next;
        }
        l->next = p->next;
        p->next = l;
    }
}

void Lista::CancellaPosizione(int posizione) {
    nodo *p = testa;
    if (posizione == 1) {
        cancellaTesta();
    } else {
        for (int i = 1; i < posizione - 1; i++) {
            p = p->next;
        }
        nodo *q = p->next;
        p->next = q->next;
        delete q;
    }
}