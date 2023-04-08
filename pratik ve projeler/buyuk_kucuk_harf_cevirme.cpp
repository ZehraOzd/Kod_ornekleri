#include<stdio.h>
#include<stdlib.h>
#include<string.h>//strlen
#include<ctype.h>//islower

int main(){
	
	char metin[100];
	printf("metin giriniz");
	gets(metin);
	
	for(int i=0;i<strlen(metin);i++){
	
		 if(islower(metin[i])) 
		 printf("%c",metin[i] - 32);//ascýý A  aarasý 32 deðer var ,büyük harf yapmak için - ,tersi +
	     
		 if(isupper(metin[i]))
		 printf("%c",metin[i] + 32);
		 
		 if(metin[i]==' ')
		 printf("%c",metin[i]);//boþluk durumu için
	
		}
	
	
	
}
