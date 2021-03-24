#include<stdio.h>



void output(int n, int *p);

int main(){
	int a[5] = {1,2,3,4,5};
	int b[7] = {1,2,3,4,5,6,7};	
	
	output(5, a); //a是陣列，代表第一個位置的記憶體位址，不需要像普通變數加&取得記憶體位址。 
	output(7, b);	
	
	return 0;
} 


void output(int n, int *p){
	int i=0;
	
	for (i=0;i<n;i++){
		printf("%d",p[i]); // p[i] = *(p+1) 都是取得數值，  &p[i] = (p+i) 都是取得記憶體位址 
	}
	printf("\n");
	
}
