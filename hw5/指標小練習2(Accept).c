#include<stdio.h>
#define N 5

int main(){
	int A[N] = {0,0,0,0,0};
	int *P, max_idx=0, max=0;
	int i=0;
	
	for (i=0;i<N; i++){
		scanf("%d",&A[i]);
	}

	P = A; // P=&A 陣列名稱代表該陣列起始記憶體位址
	
	for (i=0;i<N; i++){
		if (P[i]>max){
			max_idx = i+1;
			max = P[i];
		}
	}	
	
	printf("%d: %d",max_idx, max);

	return 0;
} 
