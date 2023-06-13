#include<stdio.h>
#include<time.h>
#include <stdlib.h>
#define N 5000
int main(int argc,int *argv[]){
	
	srand(time(NULL));
	float s1,s2,a=5;
	int i;
	float say=0;
	for(i=0;i<N;i++){
		s1=((float)rand()) / ((float)(RAND_MAX));
		s2=((float)rand()) / ((float)(RAND_MAX));
		printf("kontrol %f %f",s1,s2);
		if((s1*s1)+(s2*s2)<=1){
			say++;
		}
		printf("\n");
	}
	say=4*say/N;
	printf("%f",say);
	
	
	
	
	
}
