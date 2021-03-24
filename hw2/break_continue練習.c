#include<stdio.h>

int main(){
	
	int input,thre = 60;
	char again;
	
	while(1){
		printf("請輸入要判斷的成績\n");
		scanf("%d", &input);
		
		if (input <=60){
			printf("%d不及格!請輸入y再次判斷\n",input);
			}

		else{
			printf("%d及格!請輸入y再次判斷\n",input);
		}
		while(1){
			scanf(" %c", &again);
			if (again == 'y'){
				break;
			}
			else{
				return 0;
			}
		}
	}
	return 0;
}
