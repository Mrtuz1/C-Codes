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
		min=i;
		for(j=i;j<N;j++){
			if(dizi[min]>dizi[j]){
				min=j;
			}
		}
		tmp=dizi[i];
		dizi[i]=dizi[min];
		dizi[min]=tmp;
	}
	for(i=0;i<N;i++){
		printf("%d ",dizi[i]);
	}
	
	
	
	return 0;
	
}
