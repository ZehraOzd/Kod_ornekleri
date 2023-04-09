#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
  	char metin[100];
  	 int kelime_s=0;
  	 int uzunluk;
  	 
  	 printf("metini giriniz");
  	 gets(metin);
  	 uzunluk=strlen(metin);
  	 
  	 for(int i=0;i<uzunluk;i++){
  	 	
  	 	if(metin[i]==' ')
  	 		kelime_s++;
  	 	
  	 	
  	 	
	}
	kelime_s++;
  	 
 	printf(" metinde %d kelime vardýr", kelime_s);


}



