
#include<stdio.h>
int main()
{
	int sayi1;
	int sayi2;
	int enbuyuk;
	printf("Bir sayi giriniz:\n");
	scanf("%d",&sayi1);
	printf("Bir sayi daha giriniz:\n");
	scanf("%d",&sayi2); 
	

	if(sayi1>sayi2)
	
  {   enbuyuk=sayi1; 
  }
   else
   
   {  enbuyuk=sayi2;
   }
  
   printf("En buyuk sayi:%d",enbuyuk);
   }
