#include <stdio.h>

int main()
{
	int i, j;
	int a, b;
	
	scanf("%d", &a);
	scanf("%d", &b);
	for (i=1; i<=a; i++){
		for (j=1; j<=b; j++){
			printf("%d*%d=%2d ",i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}
