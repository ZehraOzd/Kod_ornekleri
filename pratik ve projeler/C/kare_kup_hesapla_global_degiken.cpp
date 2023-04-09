#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int sonuc=0,a=0;
// Verilen sayinin karesini hesaplar
void kare_hesapla(void)
{
	sonuc = a * a;
}

// Verilen sayinin kupunu hesaplar
void kup_hesapla(void)
{
	printf(	"%d ",sonuc);
	sonuc = a * a * a;
}

int main( void )
{
	printf( "Sayý giriniz> ");
	scanf( "%d",&a );
	printf( "Girdiginiz sayý\t: %d\n", a);
	kare_hesapla();
	printf( "Sayýnýn karesi\t: %d\n", sonuc);
	kup_hesapla();
	printf( "Sayýnýn küpünü\t: %d\n", sonuc);	
	getch();
    return 0;
}

