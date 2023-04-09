#include <stdio.h>

double bakiye = 0.0; // Hesap bakiyesi

void paraYatir(double miktar) {
    bakiye += miktar;
    printf("%.2lf TL yat�r�ld�. Yeni bakiye: %.2lf TL\n", miktar, bakiye);//lf long float
}

void paraCek(double miktar) {
    if (miktar > bakiye) {
        printf("Hesapta yeterli bakiye bulunmamaktad�r. Hesap bakiyesi: %.2lf TL\n", bakiye);
    } else {
        bakiye -= miktar;
        printf("%.2lf TL �ekildi. Yeni bakiye: %.2lf TL\n", miktar, bakiye);
    }
}

int main() {
    int secim;
    double miktar;
    
    printf("1. Para Yat�r\n");
    printf("2. Para �ek\n");
    printf("3. ��k��\n");
    
    do {
        printf("\nBir i�lem se�in: ");
        scanf("%d", &secim);
        
        switch (secim) {
            case 1:
                printf("Yat�r�lacak miktar: ");
                scanf("%lf", &miktar);
                paraYatir(miktar);
                break;
            case 2:
                printf("�ekilecek miktar: ");
                scanf("%lf", &miktar);
                paraCek(miktar);
                break;
            case 3:
                printf("��k�yor...\n");
                break;
            default:
                printf("Ge�ersiz se�enek! Tekrar deneyin.\n");
                break;
        }
    } while (secim != 3);
    
    return 0;
}
