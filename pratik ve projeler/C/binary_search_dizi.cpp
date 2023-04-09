#include<stdio.h>
#include<stdlib.h>

bool binarySearch(int dizi[], int bas,int son,int aranan){
    
	while(son>=bas){
		int orta =dizi[(bas+son)/2];
		
		if(aranan==orta){
		return orta;
	    }
	    else if( aranan>orta){
		bas++;	
	    }
	    else if(aranan<orta){
		son++;
	    }
	    return false;
	}

}

int main(){
    int aranan;
	int n ;
	
	//girilen sayilarý sýralý girmeliz binary search de sýralý olmalý
	printf("dizi boyutunu giriniz");
	scanf("%d",&n);
	int dizi[n];
	
	for(int i=0;i<n;i++){
		printf("sayi giriniz");
		scanf("%d",&dizi[i]);
		
	}
	printf("aradaýgýnýz sayiyi girin ");
	scanf("%d",&aranan);
	 bool sonuc=binarySearch(dizi,0,n-1,aranan);
	 if(sonuc){
	 	printf("aranan %d sayisidizide vardir ",aranan);
	 }
	 else{
	 	printf("aranan sayi dizide yoktur");
	 }
//	 printf("sayac %d",&sayac);
	
	return 0;
}
