#ifndef RETTANGOLO_H
#define RETTANGOLO_H

class Rettangolo
{
    private:
    
        double base;
        double altezza;
    
    public:

    Rettangolo();
    Rettangolo(double base, double altezza);
    void setBase(double base);
    void setAltezza(double altezza);
    double getBase();
    double getAltezza();
    double calcolaPerimetro();
    double calcolaArea();
    double calcolaDiagonale();
    void stampaTutto();
};

#endif
