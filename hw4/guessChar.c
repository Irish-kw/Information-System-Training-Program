#include<stdio.h>
#include<stdlib.h>

int main(){ 

	char comupter_answer[5];
	char player_guess[5];
	int game_over_flag = 0;
	int i,j,a,b;

	//puts("Please enter anser:");
	
	gets(comupter_answer);

	while(game_over_flag != 1){
		a = 0;
		b = 0;

		//puts("Please enter guess:");
		gets(player_guess);



		//�p��A 
		for (i=0;i<4;i++){
			if (player_guess[i] == comupter_answer[i]){
				a+=1;
			}	
		}
		
		//�p��B 
		for (i=0;i<4;i++){
			for (j=0;j<4;j++){
			
				if (player_guess[j] == comupter_answer[i]){
					if (i != j){ //�P�˦�m���OA�A���O�o��O��B�A�ҥH����۵��A�_�h�N�|���ƭp��C 
						if ((player_guess[0]!=player_guess[1]) && (player_guess[1]!=player_guess[2]&&(player_guess[2]!=player_guess[3])))
						b+=1;
					}
				}	
			}
		}		
		

		printf("%dA%dB\n",a,b);
		if (a == 4){
			printf("You Win!");
			game_over_flag = 1;
		}
		
	}

	return 0;
}
