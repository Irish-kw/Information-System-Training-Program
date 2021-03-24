#include <stdio.h>
#include <stdlib.h>

int IsPrime(int n){
	int i,count=0;
	
	for(i=1;i<=n;i++){
		if ((n%i)==0){
			count+=1;
		}
	}
	
	if (count ==2){
		return 1;
	}
	else{
		return 0;
	}
}
