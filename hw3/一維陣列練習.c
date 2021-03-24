#include<stdio.h>

#define max 5

int main(){
	int i;
	int array[max]={5};
	
	/*for (i=0; i<max; i++){
		scanf("%d", &array[i]);
	}*/
	
	for (i=0; i<max; i++){
		printf("%d\n", array[i]);
	}	
	
	return 0;
} 

/*
因為宣告陣列後如果沒有初始化，之後只能夠一個一個索
引值做設定，如果想要複製整個陣列可以用memcpy函式
做資料複製

#include<stdio.h>
#include<string.h>

int main()
{
int a[5] = {1,2,3,4,5};
int b[5];
//b = a; //這是不行的
memcpy(b, a, sizeof(int)*5); memcpy(目標陣列, 來源陣列, sizeof(型態)*個數);
return 0;
}
*/
