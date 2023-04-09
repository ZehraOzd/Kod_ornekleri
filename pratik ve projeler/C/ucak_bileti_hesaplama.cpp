#include <stdio.h>

int main() {
    int mesafe, yas, yolculukTipi;
    double biletFiyati;
    
    printf("Mesafe (km): ");
    scanf("%d", &mesafe);
    
    printf("Yaþýnýz: ");
    scanf("%d", &yas);
    
    printf("Yolculuk Tipi (Tek Yön: 1, Gidiþ-Dönüþ: 2): ");
    scanf("%d", &yolculukTipi);
    
    biletFiyati = mesafe * 0.1; // km baþýna ücret
    
    if (yas < 0 || mesafe < 0 || (yolculukTipi != 1 && yolculukTipi != 2)) {
        printf("Hatalý giriþ yaptýnýz!");
    } else {
        if (yolculukTipi == 2) {
            biletFiyati *= 2; // Gidiþ-dönüþ bileti ise bilet fiyatýný iki katýna çýkar
        }
        
        if (yas < 12) {
            biletFiyati *= 0.5; // 12 yaþ altý için indirimli bilet fiyatý
        } else if (yas >= 12 && yas <= 24) {
            biletFiyati *= 0.9; // 12-24 yaþ arasý için indirimli bilet fiyatý
        } else if (yas > 65) {
            biletFiyati *= 0.7; // 65 yaþ üstü için indirimli bilet fiyatý
        }
        
        printf("Bilet Fiyatý: %.2lf TL", biletFiyati);
    }
    
    return 0;
}
