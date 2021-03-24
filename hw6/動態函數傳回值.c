#include<stdio.h>
#include<stdlib.h>

double calculate(int student, int *score);
int MaxScore(int student, int *score);

int main(){
	int i,student;
	int *score;
	double aver;
	
	scanf("%d", &student);
	score = (int*)malloc(sizeof(int) *student);
	
	for(i=0;i<student;i++){
		scanf("%d", score+i);
	}	
	
	
	
	aver = calculate(student, score);
	
	int Maxposition = MaxScore(student, score);
	
	printf("Average=%.2f\n", aver);
	printf("MaxPos=%d MaxScore=%d",Maxposition+1, score[Maxposition]);
	
	
	free(score);
	return 0;
}

double calculate(int student, int *score){
	int i =0;
	double aver=0;
	
	for(i=0;i<student;i++){
		aver+=((double)score[i]/student);
	}
	
	return aver;	
}

int MaxScore(int student, int *score){
	int i=0, Maxposition=0;

	for(i=0;i<student;i++){
		if (score[i] > score[Maxposition]){
			Maxposition = i;
		}
	}
	
	return Maxposition;	
}
