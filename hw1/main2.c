#include <stdio.h>
#include <stdlib.h>

/* stdio.h standard input and output */
/* return 0 and } to end program*/
/* \n 換行*/

/* /*=多行註解, //=單行註解 */ 

/* ""是字串,存很多字 ''是字元,存一個字*/

/*因為電腦是用0跟1存資料，無法儲存小數點，用一個bit記錄他除以0.5...之類的，這就是為什麼0.1有時候是0.0999999, 除以2的數字(0.5)特別準確*/ 
/* = 複製/指定運算子，從右邊複製給左邊 */ 
/* argc / argv 傳資料進來*/

/*先有中斷點，用F9/F11編譯，按F5偵錯，中斷點那行變成藍色代表上述(不包含中斷點)之前的程式都沒問題*/


/* scanf 裡面的& 就是做call by address，num1在scanf這個函數裡面可以被改變，就是取出變數裡面記憶體的位址*/
/* printf變數前面+&可以印出該變數所在的記憶體位址*/ 


int main() {
	
	int num1;
//	scanf("%d", &num1);
//	printf("Hello %d C++ %d\n", 999, &num1);
	 
//	double num2;
//	double num3;
	
//	num3 = num1 + num2;
	system("pause");
	
	return 0;
}
