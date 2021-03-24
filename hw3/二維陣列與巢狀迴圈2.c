#include<stdio.h>
#define class 2
#define student 3

int main(){
	int a[class][student];
	int i,j, sum, total_sum;
	double avg, total_avg;
	
	for (i=0;i<class;i++){
		for (j=0;j<student;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for (i=0;i<class;i++){
		sum = 0;
		avg = 0;
		printf("class %d:\n", i+1);
		for (j=0;j<student;j++){
			
			sum += a[i][j];	
			total_sum += a[i][j];
			printf(" %d: %d\n", j+1,a[i][j]);
			
		}
		avg = sum/student;
		printf(" sum: %d \n",sum);
		printf(" avg: %.2f \n", avg);
	}
	total_avg = total_sum/(class*student);
	printf("total: %d, avg: %.2f", total_sum, total_avg);
	
	return 0;
} 
