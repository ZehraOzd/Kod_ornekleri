#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char tuslar[10][5]={" ",//0
				 " ",//1
				 "abc",//2
				 "def",//3
				 "ghi",//4
				 "jkl",//5
				 "mno",//6
				 "pqrs",//7
				 "tuv",//8
				 "wxyz"//9
				 };
				 

int comb(int sayilar[],int s_indis,char sonuc[],int n){// tüm combinasyonalarý gösteren recursive fonksiyon

	if(s_indis==n){//eþitiyoruz cunku sonuc kumesinin eleman sayýsý ile n yani girilen sayilar kümesi eleman sayýsý ayný olmalý 
	//	printf("\n ilk n=%d   indis=%d  ",n,s_indis);
		printf("\n  %s ",sonuc);//sonuc=ekrana basýlacak harf dizisi
		return 0;
	}
	
    int i;//i tusun üzerindeki harflerin indekslerini tutuyor 

	for(i=0; i<strlen(tuslar[sayilar[s_indis]]); i++){//indis sonuc dizisnin indisin itutyor
	//	printf("\nn= %d indis=%d  ",n,s_indis);
		sonuc[s_indis]=tuslar[sayilar[s_indis]][i];// sonuc dizimize harfleri atýyoruz //örnek [5][2] 5 rakamýnýn 2. indeksteki harfi= k
		
		comb(sayilar, s_indis + 1, sonuc, n);
		//	printf("\n recursive" );
		
		if(sayilar[s_indis]==0 ||sayilar[s_indis]==1 ){
			return 0;
		}
	}
		
}
 void yazdir(int sayilar[],int n){
 //	printf("ffg");
 	char sonuc[n];
 	sonuc[n]='\0 ';
 	int s_indis=0;
 	comb(sayilar, s_indis, sonuc, n);
 
 }

	

int main (void){
	int sayi;
	printf(" Bir sayi giriniz: ");
    scanf("%d",&sayi);

	// girilen sayilarý sayilar[]dizisine atýyoruz
    int sayac=0;
    int x=0;
    int sayilar[x];
    
    for(int a=0; a<=x; a++){	
        while(sayi>0){  
		    sayilar[x]=sayi%10;
        //	printf("%d  --",sayi);
        	printf(" %d//",sayilar[x]);
			sayi=sayi/10;
			x++;
			sayac++;
    	}
	} 
    
    /* for (int i=0; i<x;i++){
    	printf(" sayilar %d",sayilar[i]);
	}*/
   //	int sayilar[]={2,3,4};

	int n=sayac; 
    //	printf("\n %d",n);
	yazdir(sayilar, n);
	return 0;

	
}
