#include<stdio.h>
  
  int main()
    { int n,dongu=0, toplam=0,ort=0;
    
       
    printf("Bir sayi giriniz:");
    scanf("%d",&n); 

        for(int i=0;i<=n;i++)
        {
		   if( i%2==0)
		   {  toplam=toplam+i;
		       dongu++;
		      
		   }
		   
		}
    
	ort=toplam/(dongu-1);
	  printf("Cift sayilarin toplami=%d",toplam);
	  printf("\n%d 'e kadarki cift sayilarin ortalamasi=%d",n,ort);
	 
    }
