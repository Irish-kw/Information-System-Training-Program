#include<stdio.h>
#include<stdlib.h>

int main(){
	int i,j;
	double aver=0,aver2=0;
	int **student;
	int m,n;
	
	//printf("�п�J�Z�żƥ�: ");
	scanf("%d", &m);
	//printf("�п�J�C�Z�H��: ");
	scanf("%d", &n);
	
	student = (int**)malloc(sizeof(int*)*m);
	for (j=0;j<m;j++){
		student[j] = (int*)malloc(sizeof(int)*n);
	}
	
	for (j=0;j<m;j++){
		//printf("�Z��%d:\n",j+1);
		for (i=0;i<n;i++){
			//printf("�ǥ�%d:\n",i+1);
			scanf("%d", &student[j][i]);
		}	
	}
	
	
	for (j=0;j<m;j++){
		aver = 0;
		printf("class %d\n",j+1);
		for (i=0;i<n;i++){
			printf(" %d: %d\n",i+1,student[j][i]);
			aver += ((double)student[j][i]/(n));
			aver2 += ((double)student[j][i]/(m*n));
		}
		printf(" avg: %.2f\n",aver);
	}
	
	printf("avg: %.2f\n",aver2);
	
	
	for (j=0;j<m;j++){
		free(student[j]);
	}
	free(student);
	
	return 0;
	
 } 
