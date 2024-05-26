#include <iostream>
#include "Lista.h"

using namespace std;

int main() {
    Lista list;

    list.InsInTesta(1);
    list.InsInTesta(2);
    list.InsInTesta(3);
    list.InsInTesta(4);
    list.InsInTesta(5);
    list.InsInCoda(6);
    list.InsInCoda(7);
    list.InsInCoda(8);
    list.StampaLista();
    list.CancellaCoda();
    list.cancellaTesta();
    list.StampaLista();
    list.InserisciPosizione(69, 3);
    list.CancellaPosizione(3);
    list.StampaLista();
}