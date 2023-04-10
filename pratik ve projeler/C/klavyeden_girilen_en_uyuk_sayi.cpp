#include <stdio.h>

  int main()
  
 {   printf("=Kavyeden girilen 20 sayidan cift olanlari toplanarak girilen en buyuk sayiya bolunmesi=\n");
      int toplam=0;
      float sonuc;
      int dizi[20];
      int ebuyuk=dizi[0];
		   
        for(int i=0;i<20;i++)
       {
            printf("%d . sayiyi giriniz=",i+1);
            scanf("%d",&dizi[i]);
		       if (i%2==0)
	        toplam+= dizi[i];
			
       }
     
        for(int j=0;j<20;j++)
        
       {
	      int ebuyuk=dizi[0];
          if(ebuyuk<dizi[j])
		
           ebuyuk=dizi[j];
	   }
	        
	     sonuc=(float)toplam/ebuyuk;
	            
				 printf("sonuc: %f\n",sonuc);
			
   }
