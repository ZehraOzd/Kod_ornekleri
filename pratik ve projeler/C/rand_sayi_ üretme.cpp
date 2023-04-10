#include<stdio.h>
#include<stdlib.h>
#include<time.h>//rand() için
int main(){
	
	int vize [10];
	srand(time(NULL));
	for(int i =0;i<10;i++){
		vize[i]=rand()%20;
		printf("%d \n",vize[i]);
				
	}
	
		return 0;
}
