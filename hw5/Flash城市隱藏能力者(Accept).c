#include<stdio.h>
#include<stdlib.h> 

int main(){

	int i=0, j=0, temp=0, N=0, sum=0, avg=0, count=0;
	int *total, *median;
	
	scanf("%d", &N);

	total = (int*)malloc(sizeof(int)*N);
	
	for (i=0; i<N; i++){
		scanf("%d",total+i);//P+i�����OP���쪺�o�Ӧ�}���i�Ӿ�ƪ��O����Ҧb��m
	}	

	for (i=0; i<N; i++){
		sum+=total[i];
	}
	
	avg = sum/N;
	
	for (i=0; i<N; i++){
		if (total[i] > avg){
			count +=1;
		}
	}	
	
	
	printf("%d",count);



	free(total);	
	return 0;
	
} 



