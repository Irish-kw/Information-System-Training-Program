#include<stdio.h>

int main(){
	int A[10] = {1,2,3,4,5,6,7,8,9,10};
	int *P,i;
	
	P = A; // P=&A �}�C�W�٥N��Ӱ}�C�_�l�O�����}
	
	for (i=0;i<10; i++){
		printf("A[%d]=>%d,%d\n", i, A[i], &A[i]);
	} 
	puts(" ");
	for (i=0;i<10; i++){
		printf("P[%d]=>%d,%d\n", i, P[i], &P[i]);
		//printf("%d", P[i]);
		//printf("%d", *(P+i)); �ۦP����X�A���O�o�ˤӳ·ФF 
		//����Ъ��B��|�W�[���A��byte(int�O4byte)�AP[i] or P+i or P++ ���@�� 
	} 	
	
	printf("\n");
	return 0;
} 
