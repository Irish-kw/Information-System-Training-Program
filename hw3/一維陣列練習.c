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
�]���ŧi�}�C��p�G�S����l�ơA����u����@�Ӥ@�ӯ�
�ޭȰ��]�w�A�p�G�Q�n�ƻs��Ӱ}�C�i�H��memcpy�禡
����ƽƻs

#include<stdio.h>
#include<string.h>

int main()
{
int a[5] = {1,2,3,4,5};
int b[5];
//b = a; //�o�O���檺
memcpy(b, a, sizeof(int)*5); memcpy(�ؼа}�C, �ӷ��}�C, sizeof(���A)*�Ӽ�);
return 0;
}
*/
