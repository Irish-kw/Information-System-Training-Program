#include<stdio.h>
#include<stdlib.h>
#include<string.h>  //memcpy �n�Ϊ����Y�� 

int main(){ 

	char st1[80];
	char st2[80];
	int n;
	
	gets(st1); //���]��J123 
	gets(st2); //���]��J456 

	strcat(st1,st2); //st1 = 123456, st2 = 456 �|�Nst2��concate�bst1����A��st2���� 
	puts(st1);
	puts(st2);
	
	//st2 = "I love c/c++"; �o�O���檺�A�o�O�N��O�����}�Ӥ��O���e 
	
	strcpy(st2, "I love c/c++"); //�o�O���T�����ܤ�k 
	//memcpy(st2, "I love c/c++", sizeof(char)*13); //�¤�k!! 12�Ӧr�M\0�A�@13�� 
	//puts(st2);
	
	n = strlen(st2); //�N�O���\0����m�C 
	printf("st2�ק�᪺�r�����%d\n",n); 
	
	return 0;



}
