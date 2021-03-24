#include<stdio.h>
#include<stdlib.h>


int main(){	
	/*char str1[] = "Hello";
	char str2[] = {'H','e','l','l','o','\0'};
	char str3[6];
	char str4[100];
	
	str3[0] = 'H'; 
	str3[1] = 'e'; 	
	str3[2] = 'l'; 	
	str3[3] = 'l'; 
	str3[4] = 'o'; 	
	str3[5] = '\0'; */
	
	//scanf("%s", &str4); // 或者str4，陣列宣告本身就是記憶體位址，不需要&取出記憶體位址 ，字串中不能有空白 
	//scanf("%[^\n]", str4); //略過Enter，其他全接收。 和gets一樣，遇到Enter才結束。
	
	/*printf("%s \n", str1);
	printf("%s \n", str2);	
	printf("%s \n", str3);
	printf("%s \n", str4);*/	
	
	char str1[100];
	char str2[100];
		
	puts("這是我的字串1"); //puts不用最後加 \0，會自動加換行。 
	puts("");//空字串，自動加換行 
	puts("這是我的字串2"); //puts不用最後加 \0，會自動加換行。 
	
	
	scanf("%s", str1);//若後面是gets，%s後面加一個空白，不然enter會在佔存器裡。
	fflush(stdin); //或者清除佔存器。MAC跟linux不支援，不是全平台通用 
	
	//gets(str1);//或者兩個get，全平台通用 
	gets(str2); //會自動略過空白，直到Enter，可以輸入中文，但是中文一次佔2個bite, 16個bit. 
	
	puts(str1);
	puts(str2);
	

	return 0;
} 
