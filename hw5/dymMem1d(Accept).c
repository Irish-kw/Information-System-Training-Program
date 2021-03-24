#include<stdio.h>
#include<stdlib.h> 

//動態記憶體，程式執行時才配記憶體位址。
//靜態記憶體，宣告時就配記憶體。

int main(){
	
	//(資料型態 *)malloc(sizeof(資料型態)*個數);，配出的空間沒有型態，要強制轉換。 
	//回傳沒有名稱的記憶體位址 給P ， free(p)釋放記憶體。 
	//動態記憶體配置出來的記憶體空間不會自動釋放，存活週期直到程式結束。 
	
	//int *ptr, n = 4; 
	//ptr = (int*)malloc(sizeof(int)*n);
	//free(ptr);
	
	int i=0, student=0, max=0, max_index=0;
	double sum=0, avg=0;
	int *score;
	
	
	scanf("%d", &student);
	score = (int*)malloc(sizeof(int)*student);
	
	for (i=0; i<student; i++){
		scanf("%d",score+i);//P+i指的是P指到的這個位址後第i個整數的記憶體所在位置
	}	

	for (i=0; i<student; i++){
		sum+=score[i]; 
		avg+=((double)score[i]/student); //題目要求每位學生成績先平均再壘加 
	}		
	
	printf("avg = %.2f\n", avg);
	printf("fail:\n");
	
	for (i=0; i<student; i++){
		if (score[i] < 60){
			printf("%d: %d\n",i+1,score[i]);
		}
		
		if (score[i] > max){
			max = score[i];
			max_index = i+1;
		}
	}
	printf("highest:\n");
	printf("%d: %d\n",max_index, max);
	
	
	free(score);
	return 0;
	
} 



