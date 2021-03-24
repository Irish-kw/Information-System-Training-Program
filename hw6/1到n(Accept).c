#include<stdio.h>
#include<stdio.h>


int add(int n);

int add(int n){
	int i=0,sum=0;
	for (i=0;i<=n;i++){
		sum += i;
	}
	return sum;
}



int main(){
	int n=0,sum=0;
	
	
	scanf("%d",&n);
	sum = add(n);
	
	printf("%d",sum);
	
	return 0;
}
