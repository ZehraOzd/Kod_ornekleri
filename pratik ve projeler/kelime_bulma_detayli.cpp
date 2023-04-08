#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	 char metin[250];
	 char kelime[250];
	 int sayac=0,sayac2=0;
	 int kelime_s;
	 int kontrol=0;
	 int a;
	 
	 printf("bir metin giriniz:"); 
	 gets(metin);
	 
	printf("\n bir kelime giriniz:");
	gets(kelime);
	
	int uzunluk=strlen(metin);
	
	for(int sayac= 0;sayac<uzunluk;sayac++)
	{	
	
		while(kelime[sayac2]==metin[sayac+sayac2])
		{    
		   sayac2++;
				
			if(metin[sayac+sayac2]==' '|| metin[sayac +sayac2]==metin[uzunluk-1])
			{
				kontrol=1;
				break;	
			}
			 
		}
		
		
		
		if(metin [sayac]==' ')
			kelime_s++;
	        	
	}
	
	a=kelime_s-1;
	 
	 
	 if(kontrol==1) 
    { 
	  printf("araiginiz kelime metin icerisidne vardir");  
      printf("\n aradiginiz kelime cumlede %d . siradaki kelimedir.",a);
	} 
	
     else
   	 printf("aradiginiz kelime metin icerisinde yoktur");
	

	
		

}
