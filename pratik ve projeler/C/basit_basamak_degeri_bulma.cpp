#include<stdio.h>
#include<stdlib.h>


int main(){
    int x,sayi;
    int a,b,c;
    
   printf("1-100 arasi sayi giriniz :");
   scanf("%d",&sayi);
   
	a=sayi/100;
	x=sayi-100*a;

	b=x/10;
	x=x-10*b;
	
	c=x;
	
	printf("%d %d %d",a,b,c);
	
	}
