#include<stdio.h>



void output(int n, int *p);

int main(){
	int a[5] = {1,2,3,4,5};
	int b[7] = {1,2,3,4,5,6,7};	
	
	output(5, a); //a�O�}�C�A�N��Ĥ@�Ӧ�m���O�����}�A���ݭn�����q�ܼƥ[&���o�O�����}�C 
	output(7, b);	
	
	return 0;
} 


void output(int n, int *p){
	int i=0;
	
	for (i=0;i<n;i++){
		printf("%d",p[i]); // p[i] = *(p+1) ���O���o�ƭȡA  &p[i] = (p+i) ���O���o�O�����} 
	}
	printf("\n");
	
}
