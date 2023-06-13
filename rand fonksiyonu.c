#include<stdio.h>
int main(){
	int i,j;
	int dizi[2][2];
	srand(time(NULL));
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			dizi[i][j]=rand()%4+1;
			printf("%d",dizi[i][j]);
		}
		printf("\n");
	}
	return 0;
}
