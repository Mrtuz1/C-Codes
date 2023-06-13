#include <stdio.h>
int main(){
	int n,i,x;
	printf("dizi uzunluðunu ve sýralý diziyi giriniz");
	scanf("%d",&n);
	int bas=0,son=n-1,orta=(bas+son)/2;
	int A[n];
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	printf("aranýlacak sayýyý giriniz");
	scanf("%d",&x);
	while(son>=bas && A[orta]!=x){
		if(A[orta]<x){
			bas=orta+1;
		}
		else{
			son=orta-1;
		}
		orta=(bas+son)/2;
	}
	if(son>=bas){
		printf("%d",orta);
	}
	else{
		printf("yok");
	}
	return 0;
}
