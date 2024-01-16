#include <iostream>
#include <cmath>

class Rettangolo {
private:
    double base;
    double altezza;

public:
    // Costruttore senza parametri
    Rettangolo(){}

    // Costruttore con 2 parametri
    Rettangolo(double b, double h){}

    // Metodi set e get per base e altezza
    void setBase(double b) 
	{ 
		base = b; 
	}
    void setAltezza(double h) 
	{ 
		altezza = h; 
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

    void stampaTutto() const 
	{
        std::cout << "Base: " << base << std::endl;
        std::cout << "Altezza: " << altezza << std::endl;
        std::cout << "Area: " << calcolaArea() << std::endl;
        std::cout << "Perimetro: " << calcolaPerimetro() << std::endl;
        std::cout << "Diagonale: " << calcolaDiagonale() << std::endl;
    }
};

int main() {
    // Creazione di un oggetto con il costruttore senza parametri
    Rettangolo r1;

    // Creazione di un secondo oggetto con il costruttore con parametri
    Rettangolo r2(3.0, 4.0);

    // Chiamata dei metodi in modo opportuno
    r1.stampaTutto();
    std::cout << std::endl;
    r2.stampaTutto();

    return 0;
}
