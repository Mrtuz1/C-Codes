#include<stdio.h>
int main(){
	char devam;
	int p1=0,p2=0;
	int i,j;
	int counter=0;
	int x,y,N;
	srand(time(NULL));
	printf("matris boyutunu giriniz!\n");
	scanf("%d",&N);
	int dizi[N][N];
	int dizi2[N][N];
	do{
		for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				dizi[i][j]=0;
			}
		}
		for(i=1;i<=(N*N);i++){
			do{
				x=rand() % N;
				y=rand() % N;
			}while(dizi[x][y]!=0);
			
			dizi[x][y]=i;
			
		}
		for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				printf("%2d ",dizi[i][j]);
			}
			printf("\n");
		}
		
		do{
		for(i=0;i<N;i++){//matrisi 90 derece çevirdik
			for(j=0;j<N;j++){
				dizi2[j][N-i-1]=dizi[i][j];
			}
		}
		for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				dizi[i][j]=dizi2[i][j];
			}
		}
		
		printf("\n");
			for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				printf("%2d ",dizi[i][j]);
			}
			printf("\n");
		}
		for(i=0;i<N;i++){
			p1+=dizi[N-1][i];
		}
		printf("\nayse=%d  betul=%d\n",p1,p2);
		
		for(i=0;i<N;i++){//matrisi 90 derece çevirdik
			for(j=0;j<N;j++){
				dizi2[j][N-i-1]=dizi[i][j];
			}
		}
		for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				dizi[i][j]=dizi2[i][j];
			}
		}
		printf("\n");
			for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				printf("%2d ",dizi[i][j]);
			}
			printf("\n");
		}
		for(i=0;i<N;i++){
			p2+=dizi[N-1][i];
		}
		
		printf("\nayse=%d  betul=%d\n",p1,p2);
		counter++;
	}while(counter<3);
		
		if(p1>p2){
			printf("ayse kazandi\n");
		}
		else if(p1<p2){
		printf("betul kazandi\n");
		}
		else{
			printf("berabere\n");
		}
		
		
		p1=0;
		p2=0;
		printf("Yeniden oynamak icin e veya E ye basiniz\n");
		scanf("%s",&devam);
		counter=0;
	}while(devam =='e'|| devam =='E');
	
	return 0;
}
