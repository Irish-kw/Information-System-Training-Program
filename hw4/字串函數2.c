#include<stdio.h>
#include<stdlib.h>
#include<string.h>  //memcpy 要用的標頭檔 

int main(){ 

	char st1[80];
	char st2[80];
	int n;
	
	gets(st1); //假設輸入123 
	gets(st2); //假設輸入456 

	strcat(st1,st2); //st1 = 123456, st2 = 456 會將st2的concate在st1之後，但st2不變 
	puts(st1);
	puts(st2);
	
	//st2 = "I love c/c++"; 這是不行的，這是代表記憶體位址而不是內容 
	
	strcpy(st2, "I love c/c++"); //這是正確的改變方法 
	//memcpy(st2, "I love c/c++", sizeof(char)*13); //舊方法!! 12個字和\0，共13個 
	//puts(st2);
	
	n = strlen(st2); //就是找到\0的位置。 
	printf("st2修改後的字串長度%d\n",n); 
	
	return 0;



}
