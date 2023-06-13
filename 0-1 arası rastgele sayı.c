#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
#define N 1000
int main(){
	srand(time(NULL));
	float x;
	int i;
	for(i=0;i<N;i++){
	x=(float)rand() / (float)RAND_MAX;//0-1 ARASI SAYI ÜRETECEK;
	}
	printf("%5f",x);
	return 0;
}
