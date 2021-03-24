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
	
	
	printf("請輸入學生人數");
	scanf("%d",&student);
	
	score = (int*)malloc(sizeof(int)*student);
	
	for (i=0;i<student;i++){
		printf("學生%d:",i+1);
		scanf("%d", (score+i)); //score[i]是值，(score+i)是記憶體位址。 (score+i) = &score[i]
	}
	
	aver = average(student, score);
	printf("平均: %.2f 分\n",aver);
	
	free(score); 
	return 0;
} 
