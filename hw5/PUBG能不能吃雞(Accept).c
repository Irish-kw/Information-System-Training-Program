#include<stdio.h>
#include<stdlib.h> 

int main(){

	int i=0, j=0, temp=0, N=0, K=0;
	int *total, *median;
	
	scanf("%d%d", &N, &K);

	total = (int*)malloc(sizeof(int)*N);
	
	for (i=0; i<N; i++){
		scanf("%d",total+i);//P+i�����OP���쪺�o�Ӧ�}���i�Ӿ�ƪ��O����Ҧb��m
	}	

	if (N%2  == 0){
		median = &total[(N/2)-1];
	}
	else{
		median = &total[(N-1)/2];
	}
	
	printf("%d\n", *median);
	
	if (K>*median){
		printf("WINNER WINNER CHICKEN DINNER!");
	}
	else{
		printf("BETTER LUCK NEXT TIME!");		
	}



	free(total);	
	return 0;
	
} 



