#include<stdio.h>
#include<stdlib.h> 

int main(){

	int i=0, j=0, N=0, temp=0;
	int *score;
	
	
	scanf("%d", &N);
	score = (int*)malloc(sizeof(int)*N);
	
	for (i=0; i<N; i++){
		scanf("%d",score+i);//P+i�����OP���쪺�o�Ӧ�}���i�Ӿ�ƪ��O����Ҧb��m
	}	

	
	for (i=N; i>0; i--){
		printf("%d ",score[i-1]);
	}	

	free(score);
	return 0;
	
} 



