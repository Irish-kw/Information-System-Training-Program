#include<stdio.h>
#include<stdlib.h>

//http://www.cppreference.com/wiki/c/string/start
//http://www.cplusplus.com/reference/clibrary/cstring/ 


//字串原理:字串用字源陣列儲存
//陣列名稱:陣列開頭之記憶體位置 
//字串處理就是陣列處理，  

//char a[50]; char b[50]; if (a==b) 這是沒意義的，比的是記憶體位置而不是字串內容。


//字串內容比對，比的是ASCII code的數字大小，從第一個開始，如果一樣就比第二個...etc,  strcmp 
//strcmp(a,b), return >0, a字串的字母順序較大， return <0, b字串的字母順序較大， return ==0, b字串的內容一樣。 

//字串複製 strcpy
//字串連結 strcat
//計算字串長度 strlen  

/*int main(){
	
	char a[80] = "Hello";
	char b[80];
	
	scanf("%s", &b);
	
	if (strcmp(a,b) ==0){
		printf("輸入字串正確\n");
	}
	
	else{
		printf("輸入字串錯誤\n");
	}

	return 0;	
}*/ 


int main(){
	
	char str1[80];
	char str2[80];
	
	gets(str1);
	gets(str2);
	
	if (strcmp(str1,str2)==0){
		puts("1=2 \n");
	}
	
	else if (strcmp(str1,str2)>0){
		puts("1>2 \n");
	}
	
	else {
		puts("1<2 \n");
	}

	return 0;	
}
