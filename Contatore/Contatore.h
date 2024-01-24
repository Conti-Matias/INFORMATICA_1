#ifndef Contatore_h
#define Contatore_h

class Contatore
{
    private:
    
        int Valore;
        int Passo;
    
    public:

    Contatore();
    Contatore(int Valore, int Passo);
    void setPasso(int Passo);
    void setValore(int Valore);
    int getPasso();
    int getValore();
    void reset();
	void inc();
	void dec();
    void stampa();
};

#endif
