#include<stdio.h>
#include<stdlib.h>

#define PEOPLE 2 

struct _Pokemon{
	char name[80];
	int LV;
	int Hp;
};

typedef struct _Pokemon Pokemon; //�i�H�ۭq���A�A�`�Φb���c�W 


int main(){
	Pokemon p[PEOPLE];
	int i;
	
	
	for (i=0;i<PEOPLE;i++){
		scanf("%s", &p[i].name);
		scanf("%d", &p[i].LV);
		scanf("%d", &p[i].Hp);
		
		printf("Name:%s\nLV:%d\nHP:%d\n", p[i].name, p[i].LV, p[i].Hp);
		
	}


	return 0;
}
