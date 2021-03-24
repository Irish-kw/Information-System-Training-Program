#include<stdio.h>
#include<stdlib.h>
#include"score.h"
int main(){
	int i,student;
	int *score;
	double aver;
	
	scanf("%d", &student);
	score = (int*)malloc(sizeof(int) *student);
	
	for(i=0;i<student;i++){
		scanf("%d", score+i);
	}	
	
	
	
	aver = Avg(student, score);
	
	int Maxposition = MaxScore(student, score);
	
	printf("avg = %.2f\n", aver);
	printf("highest:\n");
	printf("%d: %d",Maxposition+1, score[Maxposition]);
	
	
	free(score);
	return 0;
}
