#include<stdio.h>
#include<stdlib.h>


void output(int n, int *p);


int main(){
	int a[5] = {1,2,3,4,5};
	int b[7] = {1,2,3,4,5,6,7};
	
	output(5,a); //傳給指標變數 p， p = a的第一個記憶體位址 
	output(7,b); //傳給指標變數 p， p = b的第一個記憶體位址 
	
	return 0;
} 

void output(int n, int *p){
	int i;
	
	for (i=0;i<n;i++){
		printf("%d \t",(p+i));
		printf("%d \n",p[i]);
	}
	printf("\n");
}
