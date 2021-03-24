#include <stdio.h>


int main(){
	
	
	FILE *input;
	char str[80];
	char ch;  
	scanf("%s", &str);
	input=fopen(str,"r");
	
	if ( input==NULL ){

		printf("open input.txt fail!\n");
		return 0;
	}
	
	while(1){
		fscanf(input, "%c", &ch); 
		
		if( feof(input) ){
			break;
		} 
		printf("%c", ch);
	}
	return 0;
}
