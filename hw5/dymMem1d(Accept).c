#include<stdio.h>
#include<stdlib.h> 

//�ʺA�O����A�{������ɤ~�t�O�����}�C
//�R�A�O����A�ŧi�ɴN�t�O����C

int main(){
	
	//(��ƫ��A *)malloc(sizeof(��ƫ��A)*�Ӽ�);�A�t�X���Ŷ��S�����A�A�n�j���ഫ�C 
	//�^�ǨS���W�٪��O�����} ��P �A free(p)����O����C 
	//�ʺA�O����t�m�X�Ӫ��O����Ŷ����|�۰�����A�s���g������{�������C 
	
	//int *ptr, n = 4; 
	//ptr = (int*)malloc(sizeof(int)*n);
	//free(ptr);
	
	int i=0, student=0, max=0, max_index=0;
	double sum=0, avg=0;
	int *score;
	
	
	scanf("%d", &student);
	score = (int*)malloc(sizeof(int)*student);
	
	for (i=0; i<student; i++){
		scanf("%d",score+i);//P+i�����OP���쪺�o�Ӧ�}���i�Ӿ�ƪ��O����Ҧb��m
	}	

	for (i=0; i<student; i++){
		sum+=score[i]; 
		avg+=((double)score[i]/student); //�D�حn�D�C��ǥͦ��Z�������A�S�[ 
	}		
	
	printf("avg = %.2f\n", avg);
	printf("fail:\n");
	
	for (i=0; i<student; i++){
		if (score[i] < 60){
			printf("%d: %d\n",i+1,score[i]);
		}
		
		if (score[i] > max){
			max = score[i];
			max_index = i+1;
		}
	}
	printf("highest:\n");
	printf("%d: %d\n",max_index, max);
	
	
	free(score);
	return 0;
	
} 



