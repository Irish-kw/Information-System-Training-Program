#include<stdio.h>
#include<stdlib.h>


void output(int n, int *p);


int main(){
	int a[5] = {1,2,3,4,5};
	int b[7] = {1,2,3,4,5,6,7};
	
	output(5,a); //�ǵ������ܼ� p�A p = a���Ĥ@�ӰO�����} 
	output(7,b); //�ǵ������ܼ� p�A p = b���Ĥ@�ӰO�����} 
	
	return 0;
} 

void output(int n, int *p){
	int i;
	
	for (i=0;i<n;i++){
		printf("%d \t",(p+i));
		printf("%d \n",p[i]);
	}
	printf("\n");
}
