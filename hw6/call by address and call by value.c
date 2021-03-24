#include<stdio.h>

void swap_call_by_address(int *pX, int*pY);
void swap_call_by_value(int pX, int pY);
int main(){
	int num1 = 5;
	int num2 = 10;
	
	swap_call_by_address(&num1, &num2); //call by address�A��O����Ƕi��ơA�b��Ƥ����欰�|�����v�T���ƥ~�C 
	printf("main num1=%d\n",num1);
	printf("main num2=%d\n",num2);


	swap_call_by_value(num1, num2); //call by value�A ���ܼƽƻs�@���i��ơA�b��Ƥ��o�欰���|�����v�T���ƥ~�C 
	printf("main num1=%d\n",num1);
	printf("main num2=%d\n",num2);

	return 0;	
}

void swap_call_by_address(int *pX, int*pY){
	int temp;//�ϰ��ܼơA��~���L�� 
	
	temp = *pX;
	*pX = *pY;
	*pY = temp;
	
	printf("swap_call_by_address num1=%d\n",*pX );
	printf("swap_call_by_address num2=%d\n",*pY);	
	
}

void swap_call_by_value(int pX, int pY){
	int temp;//�ϰ��ܼơA��~���L�� 
	
	temp = pX;
	pX = pY;
	pY = temp;
	
	printf("swap_call_by_value num1=%d\n",pX);
	printf("swap_call_by_value num2=%d\n",pY);		
}
