#include <stdio.h>
#include <stdlib.h>

/* stdio.h standard input and output */
/* return 0 and } to end program*/
/* \n ����*/

/* /*=�h�����, //=������ */ 

/* ""�O�r��,�s�ܦh�r ''�O�r��,�s�@�Ӧr*/

/*�]���q���O��0��1�s��ơA�L�k�x�s�p���I�A�Τ@��bit�O���L���H0.5...�������A�o�N�O������0.1���ɭԬO0.0999999, ���H2���Ʀr(0.5)�S�O�ǽT*/ 
/* = �ƻs/���w�B��l�A�q�k��ƻs������ */ 
/* argc / argv �Ǹ�ƶi��*/

/*�������_�I�A��F9/F11�sĶ�A��F5�����A���_�I�����ܦ��Ŧ�N��W�z(���]�t���_�I)���e���{�����S���D*/


/* scanf �̭���& �N�O��call by address�Anum1�bscanf�o�Ө�Ƹ̭��i�H�Q���ܡA�N�O���X�ܼƸ̭��O���骺��}*/
/* printf�ܼƫe��+&�i�H�L�X���ܼƩҦb���O�����}*/ 

/* scanf/printf format %c for char(" %c"�e���i�H���ťաA�]���|�J��W�@��printf�᪺enter�A�ťմN���|�Y����enter), %d for int, %lf for double*/

/* �u�����ǡAb = a++�O���ƻsa��b����a�A+1�Ab = ++a�O��a+1�A�ƻs��b*/ 

/*���Y�B��l�A����j�p�Ϊ��A< <= > >= == !=*/ 

/* %%�Oand, ||�Oor, !�Onot */ 

/* ���k�T��Ʊ� 1.���ת��e���O���O�B�I�� 2.�Q���ƬO���O�B�I��
��10/15/7�ոլ� */ 

int main() {
	
	int num1, num2, num3;
	double result;
	
	scanf("%d%d%d", &num1, &num2, &num3);
	
//	result = ((num1 + num2)*num3)/2;
	result = (double)(((num1 + num2)*num3))/2;	
	printf("%.1lf\n", result);
	
	system("pause");
	
	return 0;
}
