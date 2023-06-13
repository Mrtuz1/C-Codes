#include <stdio.h>
int main(){
	int N,i,j,tmp,counter;
	printf("dizi boyutunu girin:\n");
	scanf("%d",&N);
	int dizi[N];
	printf("diziyi giriniz\n");
	for(i=0;i<N;i++){
	scanf("%d",&dizi[i]);
}
for(i=0;i<N-1;i++){
	for(j=0;j<N-1-i;j++){
		if(dizi[j]>dizi[j+1]){
			tmp=dizi[j+1];
			dizi[j+1]=dizi[j];
			dizi[j]=tmp;
		}
	}
}
i=0;
while(i<N){
	counter=1;
	while(dizi[i]==dizi[i+1]){
		counter++;
		i++;
	}
	if(counter>1){
		printf("%d'den %d tane var\n",dizi[i],counter);
		i--;
	}
	
	i++;
	
}
for(i=0;i<N;i++){
	printf("%d ",dizi[i]);
}
return 0;
}
