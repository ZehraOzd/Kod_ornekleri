public class Main {
    public static void main(String[] args) {
        System.out.println("Hello world!");
        String[][] sehirler = new String [3][3];

        sehirler[0][0]="istanbul";
        sehirler[0][1]="Bursa";
        sehirler[0][2]="Bilecik";
        sehirler[1][0]="afyonkarahisar";
        sehirler[1][1]="izmir";
        sehirler[1][2]="Manisa";
        sehirler[2][0]="adana";
        sehirler[2][1]="Hatay";
        sehirler[2][2]="Gaziantep";

        for (int i=0;i<3;i++){//or <=2
            System.out.println("-----");
            for(int j=0;j<3;j++){
                System.out.println(sehirler[i][j]);
            }
        }

    }
}