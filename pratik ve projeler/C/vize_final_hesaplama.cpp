 #include<stdio.h>
 
      int main()
      { 
	   int v,f,b,sonuc1;
         printf("Vize notunuzu giriniz:");
         scanf("%d",&v);
         
         printf("Final notunuzu giriniz:");
         scanf("%d",&f);
         
         
         sonuc1=(0.4*v+0.6*f);
        
         
         if(sonuc1>=60)
           printf("Ortalama:%d Gectiniz",sonuc1 );
           
         else
		{  	
	    	printf("Butunleme notunuzu giriniz:");
        	scanf("%d",&b);
	     
		    sonuc1=(0.4*v+0.6*b);
		    
			 if (sonuc1>=60)
			        printf("Ortalama:%d Gectiniz",sonuc1);
				
			        else
				   {  
				      if (sonuc1<60)
		                 printf("Ortalama:%d Kaldiniz",sonuc1);
				   }	   
			   
		} 
		 
		return 0;
	  }
      

