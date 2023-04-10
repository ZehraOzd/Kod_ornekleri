public class Main {
    public static void main(String[] args) {
        String mesaj="bugun hava cok guzel";
        String yeni_mesaj = mesaj.substring(0,4);
        System.out.println(yeni_mesaj);
        yeni_mesaj=sehir();
        int sayi =toplaa(4,5);
        System.out.println(sayi);
        System.out.println(yeni_mesaj);
        int toplam =topla2(1,2,3,4,5,6);
        System.out.println(toplam);
        

    }
    public void ekle(){
        System.out.println("eklendi");
    }
    public void sil(){
        System.out.println("silindi");
    }
    public void guncelle(){
        System.out.println("güncellendi");
    }

    public static int topla(){
        return 5;
    }
    public static String sehir(){
        return "bursa";
    }
    public static int toplaa(int sayi1 ,int sayi2){
        return sayi1 + sayi2;
    }

    public static int topla2(int... sayilar){

        int toplam=0;
        for(int sayi:sayilar){
            toplam+=sayi;
        }
        return toplam;
    }
}
