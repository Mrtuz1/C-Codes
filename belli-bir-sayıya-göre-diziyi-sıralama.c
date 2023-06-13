#include<stdio.h>
int main(){
	printf("dizinin boyutunu ve diziyi giriniz\n");
	int N,i,X,a=0;
	scanf("%d",&N);
	int dizi[N];
	int ydizi[N];
	for(i=0;i<N;i++){
		scanf("%d",&dizi[i]);
	}
	printf("karsilastirma yapmak icin gerekli olan X sayisini giriniz\n");
	scanf("%d",&X);
	for(i=0;i<N;i++){
		if(X>dizi[i]){
			ydizi[a]=dizi[i];
			a++;
		}
	}
		for(i=0;i<N;i++){
		if(X==dizi[i]){
			ydizi[a]=dizi[i];
			a++;
		}
	}
		for(i=0;i<N;i++){
		if(X<dizi[i]){
			ydizi[a]=dizi[i];
			a++;
		}
	}
	for(i=0;i<N;i++){
		printf("%d ",ydizi[i]);
	}
	return 0;
}
