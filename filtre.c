#include <stdio.h>
int main(){
	int N,M,k,i,j,a,b,ftoplam=0,toplam=0,x=0,y=0;
	char exit;
	printf("dizi boyutlarini giriniz");
	scanf("%d%d",&N,&M);
	int matris[N][M];
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			scanf("%d",&matris[i][j]);
		}
	}
	printf("filtre boyutunu ve filtre matrisini giriniz");
	scanf("%d",&k);
	while(k>=M){
		printf("filtre boyutunu yanlis girdiniz");
		scanf("%d",&k);
	}
	while(k>=N){
		printf("filtre boyutunu yanlis girdiniz");
		scanf("%d",&k);
	}
	int filtre[k][k];
	for(i=0;i<k;i++){
		for(j=0;j<k;j++){
			scanf("%d",&filtre[i][j]);
			ftoplam+=filtre[i][j];
			printf("%d\n",ftoplam);
		}
	}
	
	int sonuc[N-k+1][M-k+1];
	
	for(i=0;i<N-k+1;i++){
		for(j=0;j<M-k+1;j++){
			for(a=i;a<k+i;a++){
				for(b=j;b<k+j;b++){
					toplam+=matris[a][b]*filtre[x][y];
					y++;
				}
				y=0;
				x++;
			}
			x=0;
			sonuc[i][j]=toplam/ftoplam;
			toplam=0;
		}
	}
	for(i=0;i<N-k+1;i++){
		printf("\n");
		for(j=0;j<M-k+1;j++){
			printf("%d ",sonuc[i][j]);
		}
	}
	printf("cikmak icin herhangi bir tusa basiniz");
	scanf("%s",&exit);
	
	return 0;
}
