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
	printf( "Say� giriniz> ");
	scanf( "%d",&a );
	printf( "Girdiginiz say�\t: %d\n", a);
	kare_hesapla();
	printf( "Say�n�n karesi\t: %d\n", sonuc);
	kup_hesapla();
	printf( "Say�n�n k�p�n�\t: %d\n", sonuc);	
	getch();
    return 0;
}

