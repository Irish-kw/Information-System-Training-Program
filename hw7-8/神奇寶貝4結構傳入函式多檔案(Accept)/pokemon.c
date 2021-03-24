#include <stdio.h>
#include <stdlib.h>
#include "pokemon.h"
/* 
struct Pokemon
{
    char Name[80];
    char LV[10];
    char HP[10];
};*/ 

void InputData(struct Pokemon *p){
	gets(p->Name);
	gets(p->LV);
	gets(p->HP);

}
void ShowInfo(struct Pokemon p){
	printf("Name: %s\n",p.Name);
    printf("Lv: %s\n", p.LV);
    printf("HP: %s\n", p.HP);
    puts("");

}
