#include<stdio.h>
#include<stdlib.h>


struct Pokemon{
	char name[80];
	int LV;
	int Hp;
};



int main(){
	struct Pokemon p1={"�p���s",15,20};
	struct Pokemon *p2; //�u��4byte�O����Ŷ�
	
	p2 = &p1; 

	printf("Name:%s\n",p1.name);
	printf("LV:%d\n",p1.LV);
	printf("HP:%d\n\n",p1.Hp);
	
	
	// *p2 == p1
	//printf("Name:%s\n",*p2.name); //�o�ˤ���A�]���I���u���v������A �|�ܦ������Xname�~���P�� 
	//printf("LV:%d\n",*p2.LV);
	//printf("HP:%d\n\n",*p2.Hp);
	
	//��k1 
	printf("Name:%s\n",(*p2).name);
	printf("LV:%d\n",(*p2).LV);
	printf("HP:%d\n\n",(*p2).Hp);
	
	//��k2 
	printf("Name:%s\n",p2->name);
	printf("LV:%d\n",p2->LV);
	printf("HP:%d\n\n",p2->Hp);	
	
	
	return 0;
}
