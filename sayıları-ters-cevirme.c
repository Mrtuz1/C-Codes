#include <stdio.h>
int main(){
	printf("kac tane sayi gireceginizi yaziniz!\n");
	int x,i;
	scanf("%d",&x);
	int dizi[x];
	printf("sayilari giriniz\n");
	for(i=0;i<x;i++){
		scanf("%d",&dizi[i]);
	}
	for(i=x-1;i>=0;i--){
		printf("%d ",dizi[i]);
	}
	
	return 0;
}
