class Veicolo {
    protected String marca;
    protected int annoProduzione;

    public Veicolo(String marca, int annoProduzione) {
        this.marca = marca;
        this.annoProduzione = annoProduzione;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public String getMarca() {
        return marca;
    }

    public void setAnnoProduzione(int annoProduzione) {
        this.annoProduzione = annoProduzione;
    }

    public int getAnnoProduzione() {
        return annoProduzione;
    }

    public void descrizione() {
        System.out.println("marca: " + marca + ", anno di produzione: " + annoProduzione);
    }

}

class Automobile extends Veicolo {
    private int numeroPosti;
    private int numeroPorte;

    public Automobile (String marca, int annoProduzione, int numeroPosti, int numeroPorte) {
        super(marca, annoProduzione);
        this.numeroPosti = numeroPosti;
        this.numeroPorte = numeroPorte;
    }

    public void setNumeroPosti(int numeroPosti) {
        this.numeroPosti = numeroPosti;
    }

    public int getNumeroPosti() {
        return numeroPosti;
    }

    public void setNumeroPorte(int numeroPorte) {
        this.numeroPorte = numeroPorte;
    }

    public int getNumeroPorte() {
        return numeroPorte;
    }

    @Override
    public void descrizione() {
        System.out.println("Automobile");
        System.out.println("marca: " + this.marca + ", anno di produzione: " + this.annoProduzione + ", numero porte: " + numeroPorte + ", numero posti: " + numeroPosti);
    }

}

class Moto extends Veicolo {
    private int cilindrata;

    public Moto(String marca, int annoProduzione, int cilindrata) {
        super(marca, annoProduzione);
        this.cilindrata = cilindrata;
    }

    public void setCilindrata(int cilindrata) {
        this.cilindrata = cilindrata;
    }

    public int getCilindrata() {
        return cilindrata;
    }

    @Override
    public void descrizione() {
        System.out.println("Moto");
        System.out.println("marca: " + this.marca + ", anno di produzione: " + this.annoProduzione + ", cilindrata: "
                + cilindrata);
    }

}

public class testVeicoli {
    public static void main(String[] args) {

        Automobile a1 = new Automobile("ferrari", 2020, 3, 2);
        a1.descrizione();

        Moto m1 = new Moto("ducati", 2023, 125);
        m1.descrizione();
    }
}