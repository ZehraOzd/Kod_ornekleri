#include<stdio.h>
#include<stdlib.h>//malloc için
 struct node{
  	int data;
  	struct node *sonraki;
  	
  	 
  };
  
  struct node* ilk_node=NULL;//daha sonra veri atayacaðýmýz için null ile yer ayýrmýþ oluyoz
  struct node* gecici=NULL;
  struct node* q=NULL;//traverse için kullanýyruz
  	
  
  void sona_ekle(int veri)
  {
  	struct node* yeni_kayit=(struct node*)malloc(sizeof(struct node));
  	yeni_kayit->data=veri;
  	yeni_kayit->sonraki=NULL;//Sona ekledeðimiz için sonraki null olMlý
	
	if(ilk_node==NULL)//ÝLK BOÞSA
	{
		 ilk_node =yeni_kayit;//ilk kayýt ekleme
		 
	}
    
    else// bir ve birden fazla kayýt var 
	{
		// traverse gezinme iþlemi yaparak sona gelip ekliyoruz
		q=ilk_node;
		while(q->sonraki!=NULL)//q son node ise döngüden çýk 
		{
			q=q->sonraki;//q bir sonraki node oluyor 
		}
		q->sonraki=yeni_kayit;// döngüden çýk ve sona ekle
		 
		
	}

  }
	
	
	void listele()
	{
		q=ilk_node;
		while(q->sonraki!=NULL)
		{	
			printf("%d->",q->data);	
			q=q->sonraki;
		}
	    	printf("%d\n",q->data);	
		
		
		
		
		
		
	}	
	
	
	

int main(){
     int kayit;
     while(1==1){
     	
	 printf("bir sayý giriniz\n");
	 scanf("%d",&kayit);
	 
	 sona_ekle(kayit);
	 
	 
     listele(); 
	}
	
	
	   	
	

}
