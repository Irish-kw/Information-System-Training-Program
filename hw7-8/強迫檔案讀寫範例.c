#include<stdio.h>

int main(){
	int i=0;

	FILE *f1 = fopen("fflush_write.txt","w"); 
	
	for (i=0;i<10;i++){
		fprintf(f1, "%d\n", i);
		fflush(f1); //�j��g�J�A���ε���close�~�g�J 
	}

	fclose(f1);	
	return 0;
	
} 
