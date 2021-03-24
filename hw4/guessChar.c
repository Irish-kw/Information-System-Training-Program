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



		//計算A 
		for (i=0;i<4;i++){
			if (player_guess[i] == comupter_answer[i]){
				a+=1;
			}	
		}
		
		//計算B 
		for (i=0;i<4;i++){
			for (j=0;j<4;j++){
			
				if (player_guess[j] == comupter_answer[i]){
					if (i != j){ //同樣位置的是A，但是這邊是算B，所以不能相等，否則就會重複計算。 
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
