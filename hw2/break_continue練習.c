#include<stdio.h>

int main(){
	
	int input,thre = 60;
	char again;
	
	while(1){
		printf("�п�J�n�P�_�����Z\n");
		scanf("%d", &input);
		
		if (input <=60){
			printf("%d���ή�!�п�Jy�A���P�_\n",input);
			}

		else{
			printf("%d�ή�!�п�Jy�A���P�_\n",input);
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
