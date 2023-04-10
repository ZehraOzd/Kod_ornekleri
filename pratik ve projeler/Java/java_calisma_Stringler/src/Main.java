public class Main {
    public static void main(String[] args) {
        //-----------------------------------------
        System.out.println("Hello world!");
        String mesaj="  buralar Baya eAsy  ";//aslında stringler birer char tipinde birer array dir
        String mesajtr="ıstakoz ölüme gıdıyor du ";

        String mesaj2="merhabaxbenxbosluksuzxbirxmesajdımxfonksiyonxcalısmısxmıx";
        System.out.println(mesajtr);
        System.out.println(mesaj2);

        System.out.println(mesajtr.replace("ı","i"));//tr-ing karakter cevirme
        System.out.println(mesaj2.replace("x"," "));

        System.out.println(mesaj);
        System.out.println("eleman sayısı:"+mesaj.length());
        System.out.println("5.eleman :"+mesaj.charAt(4));
        // string yeni_mesaj=mesaj.concat("ama temel konular ");
        //System.out.println(yeni_mesaj); sekilinde de yapılabilir

        System.out.println(mesaj2=mesaj.concat("ama temel konular "));//mesaja string ekleme
        System.out.println(mesaj);
        System.out.println(mesaj2);
        System.out.println(mesaj.startsWith("b"));//boolean
        System.out.println(mesaj.endsWith("c"));
        System.out.println(mesaj.substring(4, 7));//indexler arasındaki harfleri getirir

        for(String kelime:mesaj.split(" ")){//regex e göre keimleri ayrı ayrı yazıyor
            System.out.println(kelime);
        }
        System.out.println(mesaj.toLowerCase());
        System.out.println(mesaj.toUpperCase());
        System.out.println(mesaj.trim());//bas ve sondaki boşlukları alır
        //---------------------------------------------
        char [] karakterler = new char[4];
        mesaj.getChars(0,3,karakterler,0);//3 değil 4 olmalı ayırdığımız char alanı not null olmamalı
        System.out.println(karakterler);
        System.out.println(mesaj.indexOf("a"));
        System.out.println(mesaj.lastIndexOf("a"));
        //------------------------------------












    }
}