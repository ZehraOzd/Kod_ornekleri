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
		 printf("%c",metin[i] - 32);//asc�� A  aaras� 32 de�er var ,b�y�k harf yapmak i�in - ,tersi +
	     
		 if(isupper(metin[i]))
		 printf("%c",metin[i] + 32);
		 
		 if(metin[i]==' ')
		 printf("%c",metin[i]);//bo�luk durumu i�in
	
		}
	
	
	
}
