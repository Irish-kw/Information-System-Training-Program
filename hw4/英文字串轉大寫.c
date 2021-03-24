#include<stdio.h>
#include<stdlib.h>

int main(){
	int i;
	char str1[100];

	gets(str1);
	
	
	for (i=0; i<100;i++){
		if (str1[i]>='a' && str1[i]<='z'){
			str1[i] -= 32; //ASCII ¤p¼gÂà¤j¼g 
		}
		
		if (str1[i]=='\0'){
			break;
		}
	}

	puts(str1);

	return 0;
}
