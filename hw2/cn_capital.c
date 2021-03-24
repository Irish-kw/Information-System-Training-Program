#include <stdio.h>

int main(){
	int input, i=0, temp[10]={0};
	char chinese[10][4] = {"零", "壹", "貳", "參", "肆", "伍", "陸", "柒", "捌", "玖"};
	char type[5][4] = {"", "拾", "佰", "仟", "萬"};


	//printf("請輸入金額: ");
	scanf("%d", &input);
	
	if (input<1  || input>99999){
		printf("out of range");
		return 0;		
	}
	else{
	    while(input != 0)
	    {
	        temp[i] = input % 10;
	        input /= 10;
	        i++;
	    }

	for(i=5; i>=0; i--){
		if (temp[i] > 0){
			printf("%s%s",chinese[temp[i]], type[i]);
		}
	}
	printf("元整\n");

	}
}

