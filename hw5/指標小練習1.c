#include<stdio.h>


//%p 印出位址
//%x 印出16進位 
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
	printf("   ptr1 \t %d \t    %d \n",&ptr1, ptr1); //指標大小不論型態 32位元4byte 64位元8byte 
	printf("   *ptr1 \t %d \t    %d \n",ptr1, *ptr1);
	
	*ptr1 = 100;
	printf("    i \t\t %d \t    %d \n",&i, i);
	printf("   ptr1 \t %d \t    %d \n",&ptr1, ptr1);
	printf("   *ptr1 \t %d \t    %d \n",ptr1, *ptr1);
	
	return 0;
}
