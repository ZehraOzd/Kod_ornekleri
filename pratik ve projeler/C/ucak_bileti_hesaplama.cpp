#include <stdio.h>

int main() {
    int mesafe, yas, yolculukTipi;
    double biletFiyati;
    
    printf("Mesafe (km): ");
    scanf("%d", &mesafe);
    
    printf("Ya��n�z: ");
    scanf("%d", &yas);
    
    printf("Yolculuk Tipi (Tek Y�n: 1, Gidi�-D�n��: 2): ");
    scanf("%d", &yolculukTipi);
    
    biletFiyati = mesafe * 0.1; // km ba��na �cret
    
    if (yas < 0 || mesafe < 0 || (yolculukTipi != 1 && yolculukTipi != 2)) {
        printf("Hatal� giri� yapt�n�z!");
    } else {
        if (yolculukTipi == 2) {
            biletFiyati *= 2; // Gidi�-d�n�� bileti ise bilet fiyat�n� iki kat�na ��kar
        }
        
        if (yas < 12) {
            biletFiyati *= 0.5; // 12 ya� alt� i�in indirimli bilet fiyat�
        } else if (yas >= 12 && yas <= 24) {
            biletFiyati *= 0.9; // 12-24 ya� aras� i�in indirimli bilet fiyat�
        } else if (yas > 65) {
            biletFiyati *= 0.7; // 65 ya� �st� i�in indirimli bilet fiyat�
        }
        
        printf("Bilet Fiyat�: %.2lf TL", biletFiyati);
    }
    
    return 0;
}
