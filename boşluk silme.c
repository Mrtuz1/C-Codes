#include<stdio.h>
#define N 100
int main(){
	int matris[N];//bo�luk olan indisleri kaydeden matris
	int i,msize,j;
	int a=0,uzunluk=0,counter=0;
	char cumle[N];
	printf("c�mleyi giriniz\n");
	gets(cumle);
	puts(cumle);
	while(cumle[uzunluk]!='\0'){
		uzunluk++;
		}
		//*******
		for(i=0;i<uzunluk;i++){
			cumle[i-counter]=cumle[i];
			if(cumle[i]==' ' && cumle[i+1]==' '){
				counter++;
			}
		}
		//*******
		for(i=0;i<uzunluk-counter;i++){
			printf("%c",cumle[i]);
		}
		
	
	
	
	
	
	return 0;
	
	
}
