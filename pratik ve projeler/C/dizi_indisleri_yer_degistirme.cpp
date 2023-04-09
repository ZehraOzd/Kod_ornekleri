#include<stdio.h>
#include<stdlib.h>


int main(){
	int temp;
	int dizi[10] = {0,1,2,3,4,5,6,7,8,9};
	int dizi1[10]={11,12,13,14,15,16,17,18,19,20};
	int j=0;
	
	
	for(int i=0;i<10;i++){
			
		if(i%2==0){
			
			temp=dizi[i];
			for(j;j<10;j++){
				
				if(j%2==1){	
				dizi[i]=dizi1[j];
				dizi1[j]=temp;
				j++;	
			    break;		
				}		
			}	
		}	
	}

	for(int i=0;i<10;i++){

	printf("%d ,",dizi[i])	;
	
	}
  	printf("\n");
  	
  		for(int i=0;i<10;i++){

	printf("%d ,",dizi1[i])	;
	
	}
  	
}
