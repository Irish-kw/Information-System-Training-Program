#include<stdio.h>
#define total 3

int main(){
	double sum=0,avg=0;
	int i,score[total]={0,0,0};

	for (i=0;i<total;i++){
		scanf("%d",&score[i]);
	}
	
	for (i=0;i<total;i++){
		sum += score[i];
	}
	
	avg = sum/3;
	
	printf("avg = %.2f\n",avg);
	printf("fail:\n");
	
	for (i=0;i<total;i++){
		if (score[i] <= avg){
			printf("%d: %d \n", i+1,score[i]);
		}
	}
	
	for (i=0;i<total;i++){	
		if (score[i] > 60){
			printf("highest:\n");
			printf("%d: %d \n",i+1,score[i]);
		}
	}
	return 0;
}
