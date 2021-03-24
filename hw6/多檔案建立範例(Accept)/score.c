#include <stdio.h>
#include <stdlib.h>
#include "score.h"

double Avg(int n, int *P){
	int i =0;
	double aver=0;
	
	for(i=0;i<n;i++){
		aver+=((double)P[i]/n);
	}
	
	return aver;	
}

int MaxScore(int n, int *P){
	int i=0, Maxposition=0;

	for(i=0;i<n;i++){
		if (P[i] > P[Maxposition]){
			Maxposition = i;
		}
	}
	
	return Maxposition;	
}
