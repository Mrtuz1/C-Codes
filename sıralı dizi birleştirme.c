#include <stdio.h>
#define a 4
#define b 3
int main(){
	int i=0,j=0;
	int dizi1[a]={2,3,11,12};
	int dizi2[b]={1,6,13};
	while(i<a && j<b){
		if(dizi1[i]>dizi2[j]){
			printf(" %d",dizi2[j]);
			j++;
		}
		else if(dizi1[i]==dizi2[j]){
			printf(" %d %d",dizi1[i],dizi2[j]);
			i++;
			j++;
		}
		else{
			printf(" %d",dizi1[i]);
			i++;
		}
	}
	if(i==a){
		for(i=j;i<b;i++){
			printf(" %d",dizi2[i]);
		}
	}
	else{
		for(j=i;j<a;j++){
			printf(" %d",dizi1[j]);
		}
	}
	return 0;
}
