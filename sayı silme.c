#include<stdio.h>
int main(){
	int i,counter=0,x,n;
	printf("dizinin boyunu se�in\n");
	scanf("%d",&n);
    int a[n] ;
    printf("diziyi girin(sirali)\n");
    for(i=0;i<n;i++){
    	scanf("%d",&a[i]);
	}
    printf("silinmesini istedi�iniz say�y� girin");
    scanf("%d",&x);
    for (i=0;i<n;i++){
    	a[i-counter]=a[i];
    	if(a[i]==x){
    		counter++;
		}
	}
	for(i=0;i<n-counter;i++){
		printf("%d",a[i]);
	}
	if(counter==0){
		printf("se�tiginiz sayi dizide yok");
	}
	
	
	
	
	
	
	
	return 0;
}
