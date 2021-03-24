#include<stdio.h>

int main(){
	int A[10] = {1,2,3,4,5,6,7,8,9,10};
	int *P,i;
	
	P = A; // P=&A 陣列名稱代表該陣列起始記憶體位址
	
	for (i=0;i<10; i++){
		printf("A[%d]=>%d,%d\n", i, A[i], &A[i]);
	} 
	puts(" ");
	for (i=0;i<10; i++){
		printf("P[%d]=>%d,%d\n", i, P[i], &P[i]);
		//printf("%d", P[i]);
		//printf("%d", *(P+i)); 相同的輸出，但是這樣太麻煩了 
		//對指標的運算會增加型態的byte(int是4byte)，P[i] or P+i or P++ 都一樣 
	} 	
	
	printf("\n");
	return 0;
} 
