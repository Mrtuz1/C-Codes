#include <stdio.h>
int main(){
    int i,j,N,tmp,min;
	printf("dizinin boyutunu giriniz");
	scanf("%d",&N);
	int dizi [N];
	printf("diziyi giriniz");
	for(i=0;i<N;i++){
		scanf("%d",&dizi[i]);
	}
	for(i=0;i<N-1;i++){
		for(j=i+1;j>0;j--){
			if(dizi[j]<dizi[j-1]){
				tmp=dizi[j-1];
				dizi[j-1]=dizi[j];
				dizi[j]=tmp;
			}
		}
	}
	for(i=0;i<N;i++){
		printf("%d ",dizi[i]);
	}
	return 0;
}
