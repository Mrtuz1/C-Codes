#include<stdio.h>
int main (){
	rand(time(NULL));
	int i,r,c,temp;
	int dizi[52];
	for(i=1;i<=52;i++){
		dizi[i]=i;
	}
	for(i=0;i<52;i++){
		r=rand()%52;
		c=rand()%52;
		temp=dizi[r];
		dizi[r]=dizi[c];
		dizi[c]=temp;
	}
	for(i=0;i<52;i++){
		printf("%d\n",dizi[i]);
	}
	
	
	return 0;
}
