 #include<stdio.h>
 int main ()
{  
   int sayi1;
   int sayi2;
   int sayi3; 
   float ortalama;  
    printf("lutfen bir sayi giriniz:\n");
    scanf("%d", &sayi1);   
    printf("lutfen bir sayi daha giriniz:\n");
    scanf("%d", &sayi2);
    printf("ve bir sayi daha:\n");
    scanf("%d", &sayi3);
    ortalama= (sayi1+sayi2+sayi3)/ 3.0;
    printf("ortalama:%f",ortalama);
 } 
