#include<stdio.h>

int main(){
	char txt[100];
	
	FILE *f1 = fopen("f01.txt","r"); 
	
	if (f1 == NULL){
		printf("failed to open file!\n");
		return 0;
	}
	
	
	
	fscanf(f1, "%s", txt);
	fclose(f1);
	
	puts(txt);
	
	
	f1 = fopen("f01_write.txt","w"); 
	fprintf(f1, "txt =  %s\n", txt);
	//fflush(f1); 強制寫入，不用等到close才寫入 
	fclose(f1);	
	
	
	return 0;
	
} 
