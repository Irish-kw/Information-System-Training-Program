#include<stdio.h>
#include<stdlib.h>


int main(){	
	/*char str1[] = "Hello";
	char str2[] = {'H','e','l','l','o','\0'};
	char str3[6];
	char str4[100];
	
	str3[0] = 'H'; 
	str3[1] = 'e'; 	
	str3[2] = 'l'; 	
	str3[3] = 'l'; 
	str3[4] = 'o'; 	
	str3[5] = '\0'; */
	
	//scanf("%s", &str4); // �Ϊ�str4�A�}�C�ŧi�����N�O�O�����}�A���ݭn&���X�O�����} �A�r�ꤤ���঳�ť� 
	//scanf("%[^\n]", str4); //���LEnter�A��L�������C �Mgets�@�ˡA�J��Enter�~�����C
	
	/*printf("%s \n", str1);
	printf("%s \n", str2);	
	printf("%s \n", str3);
	printf("%s \n", str4);*/	
	
	char str1[100];
	char str2[100];
		
	puts("�o�O�ڪ��r��1"); //puts���γ̫�[ \0�A�|�۰ʥ[����C 
	puts("");//�Ŧr��A�۰ʥ[���� 
	puts("�o�O�ڪ��r��2"); //puts���γ̫�[ \0�A�|�۰ʥ[����C 
	
	
	scanf("%s", str1);//�Y�᭱�Ogets�A%s�᭱�[�@�ӪťաA���Menter�|�b���s���̡C
	fflush(stdin); //�Ϊ̲M�����s���CMAC��linux���䴩�A���O�����x�q�� 
	
	//gets(str1);//�Ϊ̨��get�A�����x�q�� 
	gets(str2); //�|�۰ʲ��L�ťաA����Enter�A�i�H��J����A���O����@����2��bite, 16��bit. 
	
	puts(str1);
	puts(str2);
	

	return 0;
} 
