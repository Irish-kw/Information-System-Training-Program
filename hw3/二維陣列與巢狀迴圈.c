#include<stdio.h>
#define class 2
#define student 3

void main(){
	int a[class][student];
	int i,j;
	
	for (i=0;i<class;i++){
		//printf("�Z�� %d:\n", i+1);
		for (j=0;j<student;j++){
			//printf(" �ǥ� %d:\n", j+1);
			scanf("%d",&a[i][j]);
		}
	}
	for (i=0;i<class;i++){
		printf("�Z�� %d:\n", i+1);
		for (j=0;j<student;j++){
			printf(" �ǥ� %d: %d��\n", j+1,a[i][j]);
			
		}
	}
} 
