#include<stdio.h>
#define N 5

int main(){
	int A[N] = {0,0,0,0,0};
	int *P, max_idx=0, max=0;
	int i=0;
	
	for (i=0;i<N; i++){
		scanf("%d",&A[i]);
	}

	P = A; // P=&A �}�C�W�٥N��Ӱ}�C�_�l�O�����}
	
	for (i=0;i<N; i++){
		if (P[i]>max){
			max_idx = i+1;
			max = P[i];
		}
	}	
	
	printf("%d: %d",max_idx, max);

	return 0;
} 
