#include<stdio.h>


//%p �L�X��}
//%x �L�X16�i�� 
int main(){
	int i = 10;
	int k;
	int *ptr1;
	
	
	ptr1 = &i;
	k = *ptr1;
	
	printf(" Var-name \t Address \t Content \n");
	printf(" ========= \t ========= \t ========= \n");
	printf("    i \t\t %d \t    %d \n",&i, i);
	printf("    k \t\t %d \t    %d \n",&k, k);
	printf("   ptr1 \t %d \t    %d \n",&ptr1, ptr1); //���Фj�p���׫��A 32�줸4byte 64�줸8byte 
	printf("   *ptr1 \t %d \t    %d \n",ptr1, *ptr1);
	
	*ptr1 = 100;
	printf("    i \t\t %d \t    %d \n",&i, i);
	printf("   ptr1 \t %d \t    %d \n",&ptr1, ptr1);
	printf("   *ptr1 \t %d \t    %d \n",ptr1, *ptr1);
	
	return 0;
}
