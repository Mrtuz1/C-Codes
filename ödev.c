#include <stdio.h>
#define N 50
void fonksiyon(char dizi[N],char harf,int boyut);
int main(){
	int i;
	char harf;
	int boyut;
	printf("dizi boyutunu giriniz\n");
	scanf("%d",&boyut);
	printf("hangi harfe kadar yazdirmasi gerektigini giriniz\n");
	scanf(" %c",&harf);
	printf("harf =%c\n",harf);
	char dizi[N];
	for(i=0;i<boyut;i++){
		dizi[i]='a';
	}
	fonksiyon(dizi,harf,boyut);
	
	return 0;
	
}

void fonksiyon(char dizi[N],char harf,int boyut){
	
	int i;
	
	for(i=0;i<boyut;i++){
		printf("%c ",dizi[i]);
	}
	
	printf("\n");
	dizi[boyut-1]++;
	
	for(i=boyut-1;i>0;i--){
		if(dizi[i]>harf){
			dizi[i]='a';
			dizi[i-1]++;
		}
	}
	
	if(dizi[0]<=harf){
		fonksiyon(dizi,harf,boyut);
	}
		
}
