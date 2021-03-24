#include<stdio.h>

void main(){
	int i,j;
	int a[3][4] = {1,2,3,4,
	               5,6,7,8,
				   9,10,11,12};
				
//	//¥¿±`¦C¦L   
	for (i=0;i<3;i++){
		for (j=0;j<4;j++){
			printf("%d \t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	
//	//¯x°}Âà¸m 
	for (j=0;j<4;j++){
		for (i=0;i<3;i++){
			printf("%d \t",a[i][j]);
		}
		printf("\n");
	}	

	printf("\n");
	
	//¯x°}Âà¸m2
	for (j=3;j>=0;j--){
		for (i=2;i>=0;i--){
			printf("%d \t",a[i][j]);
		}
		printf("\n");
	}	

	printf("\n");
	
	//¯x°}Âà¸m3
	for (i=2;i>=0;i--){
		for (j=3;j>=0;j--){
			printf("%d \t",a[i][j]);
		}
		printf("\n");
	}	

	printf("\n");
	
	
}
