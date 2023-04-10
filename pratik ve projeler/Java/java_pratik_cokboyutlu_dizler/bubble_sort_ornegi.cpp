#include <stdio.h>
#include <string.h>

struct Kullanici {
    char isim[50];
    int numara;
    float sinavSonucu;
};

void kabarcikSiralama(struct Kullanici kullanicilar[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (kullanicilar[j].sinavSonucu < kullanicilar[j + 1].sinavSonucu) {
                // Swap iþlemi
                struct Kullanici temp = kullanicilar[j];
                kullanicilar[j] = kullanicilar[j + 1];
                kullanicilar[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Kayitli kullanici sayisini girin: ");
    scanf("%d", &n);

    struct Kullanici kullanicilar[n];

    for (int i = 0; i < n; i++) {
        printf("\nKullanici %d bilgilerini girin:\n", i + 1);

        printf("Isim: ");
        scanf("%s", kullanicilar[i].isim);

        printf("Numara: ");
        scanf("%d", &kullanicilar[i].numara);

        printf("Sinav Sonucu: ");
        scanf("%f", &kullanicilar[i].sinavSonucu);
    }

    kabarcikSiralama(kullanicilar, n);

    printf("\nEn yuksek puan alan kullanici: %s (Numara: %d) - Sinav Sonucu: %.2f\n", kullanicilar[0].isim, kullanicilar[0].numara, kullanicilar[0].sinavSonucu);

    printf("\nGenel siralama:\n");
    for (int i = 0; i < n; i++) {
        printf("Siradaki kullanici: %s (Numara: %d) - Sinav Sonucu: %.2f\n", kullanicilar[i].isim, kullanicilar[i].numara, kullanicilar[i].sinavSonucu);
    }

    return 0;
}
