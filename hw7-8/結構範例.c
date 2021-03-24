#include<stdio.h>
#include<stdlib.h>


struct Pokemon{
	char name[80];
	int LV;
	int Hp;
};



int main(){
	struct Pokemon p1,p2={"§p§ı¿s",15,20};
	
	
	scanf("%s", p1.name);
	scanf("%d", &p1.LV);
	scanf("%d", &p1.Hp);
	
	printf("Name:%s\n",p1.name);
	printf("LV:%d\n",p1.LV);
	printf("HP:%d\n\n",p1.Hp);
	
	printf("Name:%s\n",p2.name);
	printf("LV:%d\n",p2.LV);
	printf("HP:%d\n\n",p2.Hp);	
	return 0;
}
