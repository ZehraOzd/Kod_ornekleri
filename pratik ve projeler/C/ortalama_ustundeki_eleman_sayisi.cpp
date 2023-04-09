#include<stdio.h>
#include<stdlib.h>

int main (){
  int a[50];
  float ortalama =0;
  float son_ort=0;
  int ust_sayac=0;
  int alt_sayac=0;
  
  for (int i=0;i<50;i++)
  {
  	printf("%d . degeri giriniz =",i);
  	 scanf("%d",&a[i]);
	   
  	ortalama=ortalama +a[i];
  	
  }
  son_ort=ortalama/50;
  
  for (int j=0;j<50;j++)
  {
  
  	if(a[j]>son_ort)
  	ust_sayac++;
  
  	else
  	alt_sayac++;
  	
  }
  
  
  
   
  printf("ortalam =%f\n", son_ort);
  printf("ortalamanýn ustundeki eleman sayýsý = %d\n",ust_sayac);
  printf("ortalamanýn altýndaki eleman sayýsý= %d",alt_sayac);

}
