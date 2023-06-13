#include<stdio.h>
int main(){
	printf("matris boyutunu giriniz!\n");
	int N,i,j;
	int counter=0;
	scanf("%d",&N);
	int matris[N][N];
	printf("matrisi doldurunuz\n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			scanf("%d",&matris[i][j]);
		}
	}
	for(i=1;i<N;i++){
		for(j=0;j<=i-1;j++){
			if(matris[i][j]!=matris[j][i]){
				counter++;
			}
		}
	}
	printf("matrisi simetrik yapmak icin gerekli degisiklik %d",counter);
	
	
	
	return 0;
}
