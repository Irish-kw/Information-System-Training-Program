#include<stdio.h>
#define num 5

int main(){
	int i,j,temp;
	int data[num]={34,12,5,66,1};
	
	
	for (j=num;j>1;j--){
		for (i=0;i<j-1;i++){
			if (data[i] > data[i+1]){
				temp = data[i];
				data[i] = data[i+1];
				data[i+1] = temp;
			}
		}
	}

	for (i=0;i<num;i++){
		printf("%d-",data[i]);
	}

	return 0;
} 
