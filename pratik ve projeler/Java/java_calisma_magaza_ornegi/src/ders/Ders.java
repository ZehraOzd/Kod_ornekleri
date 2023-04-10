package ders;

public class Ders {
    public static void main(String[] args) {
        
        try {
            Giyim giyim1 = new Giyim("Waikiki", 95000, 10000);
            Gida gida1 = new Gida("Migros", 125000, 18000);
            Muhasebeci m1 = new Muhasebeci();
            m1.musteriEkle(giyim1);
            m1.musteriEkle(gida1);
            
        } 
        catch(ArithmeticException ex){
            System.out.println(ex.getMessage());
        }
        catch(Exception ex){
            System.out.println("baska bir hata var:\n"+ex.toString());
        }
        finally  {
            System.out.println("uygulama devam ediyor");
        }
    }
}
