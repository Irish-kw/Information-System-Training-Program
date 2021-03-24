#include<stdio.h>

int main(){
	
	int i, j, input = 0;
	char star[5] = {0};
	
	printf("請輸入一個整數\n");
	scanf("%d", &input);
	for (i=1; i<input+1; i++){
		
		for (j=0; j<i; j++){
			printf("*");

		}
		printf("\n");
	}
	
	
	
	
	return 0;
} 
