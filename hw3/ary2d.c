#include<stdio.h>
#define student 5 
#define course 3

int main(){
	int a[student][course] = {76,73,85,
	 						  88,84,76,
							  92,82,92,
							  82,91,85,
							  72,74,73};
	double each_avg[student] = {0};
	int i=0, j=0, sum=0, total_sum=0;
	double avg=0, total_avg=0, highest_avg=0;
	int highest_index=0;

	for (i=0;i<student;i++){
		sum = 0;
		avg = 0;
		printf("student %1d\n", i+1);
		for (j=0;j<course;j++){
			sum += a[i][j];	
			total_sum += a[i][j];
			printf(" %1d: %2d\n", j+1,a[i][j]);	
		}
		avg = (sum/(double)course);
		printf(" sum: %3d\n",sum);
		printf(" avg: %.2f\n", avg);
		each_avg[i] = avg; //紀錄每位學生的平均 
	}
	for (i=0;i<student;i++){
		if (each_avg[i] > highest_avg){
			highest_avg = each_avg[i];
			highest_index = i;
		} 
	}
	
	total_avg = total_sum/(double)(student*course);
	printf("total: %4d, avg: %.2f\n",total_sum,total_avg);
	printf("highest avg: student %d: %.2f", highest_index+1, highest_avg);
	return 0;
} 
