#include <stdio.h>

double bakiye = 0.0; // Hesap bakiyesi

void paraYatir(double miktar) {
    bakiye += miktar;
    printf("%.2lf TL yatýrýldý. Yeni bakiye: %.2lf TL\n", miktar, bakiye);//lf long float
}

void paraCek(double miktar) {
    if (miktar > bakiye) {
        printf("Hesapta yeterli bakiye bulunmamaktadýr. Hesap bakiyesi: %.2lf TL\n", bakiye);
    } else {
        bakiye -= miktar;
        printf("%.2lf TL çekildi. Yeni bakiye: %.2lf TL\n", miktar, bakiye);
    }
}

int main() {
    int secim;
    double miktar;
    
    printf("1. Para Yatýr\n");
    printf("2. Para Çek\n");
    printf("3. Çýkýþ\n");
    
    do {
        printf("\nBir iþlem seçin: ");
        scanf("%d", &secim);
        
        switch (secim) {
            case 1:
                printf("Yatýrýlacak miktar: ");
                scanf("%lf", &miktar);
                paraYatir(miktar);
                break;
            case 2:
                printf("Çekilecek miktar: ");
                scanf("%lf", &miktar);
                paraCek(miktar);
                break;
            case 3:
                printf("Çýkýyor...\n");
                break;
            default:
                printf("Geçersiz seçenek! Tekrar deneyin.\n");
                break;
        }
    } while (secim != 3);
    
    return 0;
}
