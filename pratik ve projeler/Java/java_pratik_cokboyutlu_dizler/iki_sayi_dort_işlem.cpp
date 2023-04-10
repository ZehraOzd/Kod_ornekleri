
#include<stdio.h>
int main()
{  

  float sayi1;
  float sayi2;
  float toplam;
  float cikarma;
  float carpim;
  float bolum;
  printf("Bir sayi giriniz:\n");
  scanf("%f",&sayi1);
  printf("Bir sayi daha giriniz:\n");
  scanf("%f",&sayi2);
  toplam=(sayi1+sayi2);
  printf("toplam:%f\n",toplam);
  cikarma=(sayi1-sayi2);
  printf("cikarma:%f\n",cikarma);
  carpim=(sayi1*sayi2);
  printf("carpim:%f\n",carpim);
  bolum=(sayi1/sayi2);
  printf("bolum:%f",bolum); 
  }
