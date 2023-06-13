#include <stdio.h>
#define N 50000000

int main(){
int pay=4;
float payda=1.0;
double pi=0;
int i;
for(i=0;i<N;i++){
	if(i % 2==0){
		pi+=(pay/(payda+2*i));
	}
	else{
		pi-=(pay/(payda+2*i));
	}
	}
printf("pi=%lf",pi);
return 0;
}
