#include<stdio.h>
#include<stdlib.h> 

int main(){

	int i=0, N=0;
	int *total, *high, high_index=1, *low, low_index=1;
	
	scanf("%d", &N);
	total = (int*)malloc(sizeof(int)*N);
	
	for (i=0; i<N; i++){
		scanf("%d",total+i);//P+i�����OP���쪺�o�Ӧ�}���i�Ӿ�ƪ��O����Ҧb��m
	}	

	high = &total[0];
	low = &total[0];

	for (i=0; i<N; i++){
		if(total[i]>*high){
			high = &total[i];
			high_index = i+1;
		}
		
		if(total[i]<*low){
			low = &total[i];
			low_index = i+1;
		}		
		
	}	
	
	printf("%d %d\n", high_index, *high);
	printf("%d %d", low_index, *low);
	
	free(total);
	return 0;
	
} 



