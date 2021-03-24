#include<stdio.h>
#define num 5

int main(){
	int i,j,input[num];
	
	for (i=0;i<num;i++){
		scanf("%d",&input[i]);
	}
	
	for (i=0;i<num;i++){
		printf("%d \t",input[i]);
		
		for (j=0;j<input[i];j++){
			printf("*");
		}
		printf("\n");
	}	
}
