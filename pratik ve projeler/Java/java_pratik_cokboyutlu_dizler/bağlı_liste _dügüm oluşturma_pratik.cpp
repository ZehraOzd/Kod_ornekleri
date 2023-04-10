#include<stdio.h>
#include<stdlib.h>

struct dugum{
	int veri ;
	struct dugum * sonraki;
};


int main(){
	struct dugum *i;
	struct dugum *bir;
	bir=(struct dugum *)malloc(sizeof(struct dugum));
	bir->veri= 12;

	
	struct dugum *ikinci;
	ikinci=(struct dugum *)malloc (sizeof(struct dugum));
		bir->sonraki=ikinci;
	struct dugum *uc;
	uc=(struct dugum *)malloc (sizeof(struct dugum));
	
	struct dugum *dort;
	dort=(struct dugum *)malloc (sizeof(struct dugum));
	 
	 ikinci->veri= 14;
	 ikinci->sonraki=uc;
	 
	 uc->veri=45;
	 uc->sonraki=dort;
	 
	 dort->veri=34;
	 dort->sonraki=NULL;
	    i = bir;
	for( i;i->sonraki!=NULL;i->sonraki){
		printf("%d \n",i->veri);
		i=i->sonraki;
	} 
	 
		
	return 0;
} 
