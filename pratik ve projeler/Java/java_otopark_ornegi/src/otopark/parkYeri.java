package otopark;

public class parkYeri {
    public int satir;
    public int sutun;
    public int kat;
    public Araba alanda_araba_var;//bi işaret 

    public parkYeri(int satir ,int sutun, int kat){
       this.satir=satir;
       this.sutun=sutun;
       this.kat=kat;
    }

    public void park(Araba araba){
        this.alanda_araba_var=araba;
    }


}
