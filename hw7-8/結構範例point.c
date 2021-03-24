#include<stdio.h>
#include<stdlib.h>


struct Pokemon{
	char name[80];
	int LV;
	int Hp;
};



int main(){
	struct Pokemon p1={"小火龍",15,20};
	struct Pokemon *p2; //只有4byte記憶體空間
	
	p2 = &p1; 

	printf("Name:%s\n",p1.name);
	printf("LV:%d\n",p1.LV);
	printf("HP:%d\n\n",p1.Hp);
	
	
	// *p2 == p1
	//printf("Name:%s\n",*p2.name); //這樣不行，因為點的優先權比較高， 會變成先取出name才打星號 
	//printf("LV:%d\n",*p2.LV);
	//printf("HP:%d\n\n",*p2.Hp);
	
	//方法1 
	printf("Name:%s\n",(*p2).name);
	printf("LV:%d\n",(*p2).LV);
	printf("HP:%d\n\n",(*p2).Hp);
	
	//方法2 
	printf("Name:%s\n",p2->name);
	printf("LV:%d\n",p2->LV);
	printf("HP:%d\n\n",p2->Hp);	
	
	
	return 0;
}
