#include<stdio.h>

int main(){
	int age=0;
	char name[10], gender[10];
	
	
	scanf("%s",&name);
	scanf(" %d",&age);
	scanf(" %s",&gender);
	
	printf("Name:%s\n",name);
	printf("Age:%d\n",age);
	printf("Gender:%s\n",gender);	
		
	return 0;
} 
