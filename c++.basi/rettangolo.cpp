#include <iostream>
#include <cmath>

using namespace std;

class Rettangolo {
private:
    double base;
    double altezza;

public:
    // Costruttore senza parametri
    Rettangolo()
	{
		base=1;
		altezza=1;
	}

    // Costruttore con 2 parametri
    Rettangolo(double base, double altezza)
	{
		this -> base=base;
		this -> altezza=altezza;
	}

    // Metodi set e get per base e altezza
    void setBase(double base) 
	{ 
		this -> base = base; 
	}
    void setAltezza(double altezza) 
	{ 
		this -> altezza = altezza; 
	}
    double getBase() 
	{ 
		return base; 
	}
    double getAltezza() 
	{ 
		return altezza; 
	}

    // Metodi per calcolare area, perimetro, diagonale e stampare tutti i dati
    double calcolaArea()
	{ 
		return base * altezza; 
	}
    double calcolaPerimetro() 
	{ 
		return 2 * (base + altezza); 
	}
    double calcolaDiagonale()
	{ 
		return sqrt(base * base + altezza * altezza); 
	}

    void stampaTutto() 
	{
		cout << "\n\nPOLIGONO " ;
        cout << "\nBase: " << base;
        cout << "\nAltezza: " << altezza;
        cout << "\nArea: " << calcolaArea();
        cout << "\nPerimetro: " << calcolaPerimetro();
        cout << "\nDiagonale: " << calcolaDiagonale();
    }
};

int main() {
    // Creazione di un oggetto con il costruttore senza parametri
    Rettangolo r1;

    // Creazione di un secondo oggetto con il costruttore con parametri
    Rettangolo r2(3.0, 4.0);
    
    r1.setBase(5);
    r1.setAltezza(7);

    // Chiamata dei metodi in modo opportuno
    r1.stampaTutto();
    r2.stampaTutto();

    return 0;
}
