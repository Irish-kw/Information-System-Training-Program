#include<stdio.h>

int main(){
	int A[10] = {1,2,3,4,5,6,7,8,9,10};
	int *P,i;
	
	P = A; // P=&A �}�C�W�٥N��Ӱ}�C�_�l�O�����}
	
	for (i=0;i<10; i++){
		printf("%d", P[i]);
		//printf("%d", *(P+i)); �ۦP����X�A���O�o�ˤӳ·ФF 
	} 
	printf("\n");
	return 0;
} 
