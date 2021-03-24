#include <stdio.h>
#include "pokemon.h"
/*
struct Pokemon
{
    char Name[80];
    char LV[10];
    char HP[10];
};
 
void InputData(struct Pokemon *p);
void ShowInfo(struct Pokemon p);
*/
 
int main()
{
    struct Pokemon p1,p2;
 
    InputData(&p1);
    InputData(&p2);
 
    ShowInfo(p1);
    ShowInfo(p2);
 
    return 0;
}

/*
void InputData(struct Pokemon *p){
	gets(p->Name);
	gets(p->LV);
	gets(p->HP);
    //scanf("%d", &(p->LV));
    //scanf("%d", &(p->HP));
}
void ShowInfo(struct Pokemon p){
	printf("Name: %s\n",p.Name);
    printf("Lv: %s\n", p.LV);
    printf("HP: %s\n", p.HP);
    puts("");
    puts("");
}
*/

