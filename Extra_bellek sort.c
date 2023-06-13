#include <stdio.h>
int main(){
	int i,j,N,a=0;
	printf("dizi boyutunu girin");
	scanf("%d",&N);
	int A[N],B[N];
	printf("diziyi girin");
	for(i=0;i<N;i++){
	scanf("%d",&A[i]);
	}
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(A[i]>A[j]){
				a++;
			}
		}
		B[a]=A[i];
		a=0;
	}
	for(i=0;i<N;i++){
		printf("%d ",B[i]);
	}
	
	
	
	return 0;
}
