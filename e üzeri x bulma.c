#include<stdio.h>
#define N 50
int main(){
	float payda=1.0;
	float pay=1.0;
	printf("x degeri atayiniz");
	int x;
	scanf("%d",&x);
	double sonuc=0.0;
	int i;
	for(i=0;i<N;i++){
		sonuc+=(double)pay/payda*1.0;
		payda=payda*(1+i);
		pay=pay*x;
	}
	printf("%lf",sonuc);
	return 0;
}
