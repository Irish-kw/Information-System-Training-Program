#include<stdio.h>
#include<stdlib.h> 

int main(){

	int i=0, j=0, N=0;
	int *ch1, *ch2, *total;
	
	scanf("%d", &N);

	total = (int*)malloc(sizeof(int)*N);
	
	for (i=0; i<N; i++){
		scanf("%d",total+i);//P+i指的是P指到的這個位址後第i個整數的記憶體所在位置
	}
	
	for (i=0; i<(N/2); i++){
		if (i==0){
			printf("%d %d ",total[i+1], total[i]);
		}
		else{
			j = i+i;
			printf("%d %d ",total[j+1], total[j]);
		}
	}

	free(total);	
	return 0;
	
} 



