#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Dosya oluþturma
void dosya_olustur(char dosya_adi[])
 {
    FILE *dosya = fopen(dosya_adi, "w");
   
    if (dosya == NULL)
	 {
        printf("Dosya olusturma hatasi!\n");
    }
	else
	 {
        printf("%s adinda bir dosya olusturuldu.\n", dosya_adi);
        fclose(dosya);
    }
}

// Dosya silme
void dosya_sil(char dosya_adi[]) {
    if (remove(dosya_adi) != 0)
	 {
        printf("Dosya silme hatasi!\n");
    } 
	else
	 {
        printf("%s adindaki dosya silindi.\n", dosya_adi);
    }
}

// Dosya taþýma
void dosya_tasi(char dosya_adi[], char hedef_dizin[]) {
    if (rename(dosya_adi, hedef_dizin) != 0)
	 {
        printf("Dosya tasima hatasi!\n");
    }
	 else
     {
        printf("%s adindaki dosya %s dizinine tasindi.\n", dosya_adi, hedef_dizin);
    }
}

// Dosya kopyalama
void dosya_kopyala(char dosya_adi[], char hedef_dizin[]) {
    FILE *dosya1 = fopen(dosya_adi, "rb");
    if (dosya1 == NULL) 
	{
        printf("Kopyalanacak dosya acilamadi!\n");
        return;
    }

    FILE *dosya2 = fopen(hedef_dizin, "wb");
    
    if (dosya2 == NULL)
	 {
        printf("Hedef dosya acilamadi!\n");
        fclose(dosya1);
        return;
    }

    char karakter;
    
    while ((karakter = fgetc(dosya1)) != EOF) {
        fputc(karakter, dosya2);
    }

    fclose(dosya1);
    fclose(dosya2);

    printf("%s adindaki dosya %s dizinine kopyalandi.\n", dosya_adi, hedef_dizin);
}

int main() {
	
	
    char secim[2];
    char dosya_adi[100];
    char hedef_dizin[100];

    while (1) {
        printf("1 - Dosya Olustur\n");
        printf("2 - Dosya Sil\n");
        printf("3 - Dosya Tasi\n");
        printf("4 - Dosya Kopyala\n");
        printf("0 - Cikis\n");
        printf("Yapmak istediginiz islemi secin (0-4): ");
        scanf("%s", secim);

        if (strcmp(secim, "0") == 0)
		 {
        	
            printf("Cikiliyor...\n");
            break;
            
        }
		 else if (strcmp(secim, "1") == 0) 
		 {
        	
            printf("Olusturmak istediginiz dosyanin adini girin: ");
            scanf("%s", dosya_adi);
            
            dosya_olustur(dosya_adi);
            
        } 
		else if (strcmp(secim, "2") == 0) 
		{
        	
            printf("Silmek istediginiz dosyanin adini girin: ");
            scanf("%s", dosya_adi);
            dosya_sil(dosya_adi);
            
        } 
	     else if (strcmp(secim, "3") == 0) 
		{
        	
            printf("Tasimak istediginiz dosyanin adini girin: ");
            scanf("%s", dosya_adi);
            
            printf("Hedef dizinin adini girin: ");
            scanf("%s", hedef_dizin);
            
            dosya_tasi(dosya_adi, hedef_dizin);
            
        }
		 else if (strcmp(secim, "4") == 0)
		{
        	
            printf("Kopyalamak istediginiz dosyanin adini girin: ");
            scanf("%s", dosya_adi);
            
            printf("Hedef dizinin adini girin: ");
            scanf("%s", hedef_dizin);
            
            dosya_kopyala(dosya_adi, hedef_dizin);
            
        }
		 else 
		{
            printf("Gecersiz bir secim yaptiniz. Tekrar deneyin.\n");
        }
    }

    return 0;
}
            
         
             
            
