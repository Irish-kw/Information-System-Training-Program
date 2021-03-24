#include<stdio.h>

int main(){
	int i=0;

	FILE *f1 = fopen("fflush_write.txt","w"); 
	
	for (i=0;i<10;i++){
		fprintf(f1, "%d\n", i);
		fflush(f1); //強制寫入，不用等到close才寫入 
	}

	fclose(f1);	
	return 0;
	
} 
