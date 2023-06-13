#include<stdio.h>
#define MAX 15
void MinMaxBul(int dizi[],int N,int *min,int*max);
int main(){
	int dizi[MAX]={2,4,7,9,1,6,-8};
	int min,max;
	int N=sizeof(dizi)/sizeof(dizi[0]);
	MinMaxBul(dizi,N,&min,&max);
	printf("max=%d\nmin=%d",dizi[max],dizi[min]);
	return 0;
}
void MinMaxBul(int dizi[],int N,int *min,int*max){
	int i;
	int minI=0,maxI=0;
	for(i=0;i<N;i++){
		if(dizi[i]<dizi[minI]){
			minI=i;
		}
		else if(dizi[i]>dizi[maxI]){
			maxI=i;
		}
	}
	*min=minI;
	*max=maxI;
}
