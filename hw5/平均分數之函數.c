#include<stdio.h>
#include<stdlib.h>


double average(int student, int *score);

double average(int student, int *score){
	int i;
	double average=0;
	
	for (i=0;i<student;i++){
		average += ((double)score[i]/student);
	}
	
	return average;
}

int main(){
	int student=0;
	int *score;
	double aver=0;
	int i=0;
	
	
	printf("�п�J�ǥͤH��");
	scanf("%d",&student);
	
	score = (int*)malloc(sizeof(int)*student);
	
	for (i=0;i<student;i++){
		printf("�ǥ�%d:",i+1);
		scanf("%d", (score+i)); //score[i]�O�ȡA(score+i)�O�O�����}�C (score+i) = &score[i]
	}
	
	aver = average(student, score);
	printf("����: %.2f ��\n",aver);
	
	free(score); 
	return 0;
} 
