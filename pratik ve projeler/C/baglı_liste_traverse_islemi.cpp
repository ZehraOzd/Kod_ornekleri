#include<stdio.h>
#include<stdlib.h>//malloc i�in
 struct node{
  	int data;
  	struct node *sonraki;
  	
  	 
  };
  
  struct node* ilk_node=NULL;//daha sonra veri atayaca��m�z i�in null ile yer ay�rm�� oluyoz
  struct node* gecici=NULL;
  struct node* q=NULL;//traverse i�in kullan�yruz
  	
  
  void sona_ekle(int veri)
  {
  	struct node* yeni_kayit=(struct node*)malloc(sizeof(struct node));
  	yeni_kayit->data=veri;
  	yeni_kayit->sonraki=NULL;//Sona eklede�imiz i�in sonraki null olMl�
	
	if(ilk_node==NULL)//�LK BO�SA
	{
		 ilk_node =yeni_kayit;//ilk kay�t ekleme
		 
	}
    
    else// bir ve birden fazla kay�t var 
	{
		// traverse gezinme i�lemi yaparak sona gelip ekliyoruz
		q=ilk_node;
		while(q->sonraki!=NULL)//q son node ise d�ng�den ��k 
		{
			q=q->sonraki;//q bir sonraki node oluyor 
		}
		q->sonraki=yeni_kayit;// d�ng�den ��k ve sona ekle
		 
		
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
     	
	 printf("bir say� giriniz\n");
	 scanf("%d",&kayit);
	 
	 sona_ekle(kayit);
	 
	 
     listele(); 
	}
	
	
	   	
	

}
