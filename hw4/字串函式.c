#include<stdio.h>
#include<stdlib.h>

//http://www.cppreference.com/wiki/c/string/start
//http://www.cplusplus.com/reference/clibrary/cstring/ 


//�r���z:�r��Φr���}�C�x�s
//�}�C�W��:�}�C�}�Y���O�����m 
//�r��B�z�N�O�}�C�B�z�A  

//char a[50]; char b[50]; if (a==b) �o�O�S�N�q���A�񪺬O�O�����m�Ӥ��O�r�ꤺ�e�C


//�r�ꤺ�e���A�񪺬OASCII code���Ʀr�j�p�A�q�Ĥ@�Ӷ}�l�A�p�G�@�˴N��ĤG��...etc,  strcmp 
//strcmp(a,b), return >0, a�r�ꪺ�r�����Ǹ��j�A return <0, b�r�ꪺ�r�����Ǹ��j�A return ==0, b�r�ꪺ���e�@�ˡC 

//�r��ƻs strcpy
//�r��s�� strcat
//�p��r����� strlen  

/*int main(){
	
	char a[80] = "Hello";
	char b[80];
	
	scanf("%s", &b);
	
	if (strcmp(a,b) ==0){
		printf("��J�r�꥿�T\n");
	}
	
	else{
		printf("��J�r����~\n");
	}

	return 0;	
}*/ 


int main(){
	
	char str1[80];
	char str2[80];
	
	gets(str1);
	gets(str2);
	
	if (strcmp(str1,str2)==0){
		puts("1=2 \n");
	}
	
	else if (strcmp(str1,str2)>0){
		puts("1>2 \n");
	}
	
	else {
		puts("1<2 \n");
	}

	return 0;	
}
