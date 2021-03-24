#include<stdio.h>
#include<stdlib.h>


int main(){
	char str1[] = "Hello";
	char str2[] = {'H','e','l','l','o','\0'};
	char str3[6];
	char str4[100];
	
	str3[0] = 'H'; 
	str3[1] = 'e'; 	
	str3[2] = 'l'; 	
	str3[3] = 'l'; 
	str3[4] = 'o'; 	
	str3[5] = '\0'; 
	
	scanf("%s", &str4); // 或者str4，陣列宣告本身就是記憶體位址，不需要&取出記憶體位址 ，字串中不能有空白 
	
	
	printf("%s \n", str1);
	printf("%s \n", str2);	
	printf("%s \n", str3);
	printf("%s \n", str4);
	
	return 0;
} 
