#include<stdio.h>
#include<stdlib.h>

int main(){
	int i,j;
	int **student;
	int m = 3;

	student = (int**)malloc(sizeof(int*)*m);
	for (i=0;i<m;i++){
		student[i] = (int*)malloc(sizeof(int)*(i+1));
	}
	
	for (i=0;i<m;i++){
		for (j=0;j<(i+1);j++){
			scanf("%d", &student[i][j]);
		}
	}
	
	
	for (i=0;i<m;i++){
		for (j=0;j<(i+1);j++){
			printf("%d ",student[i][j]);
		}
		puts("");
	}
	

	
	
	for (i=0;i<m;i++){
		free(student[i]);
	}
	free(student);
	
	return 0;
	
 } 
