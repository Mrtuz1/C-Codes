#include<stdio.h>

int main(){
	printf("kacinci fibonacci sayisi ?");
	int x;
	scanf("%d",&x);
	int first=0,second=1;
	int temp,i;
	for(i=1;i<=x;i++){
	    printf("%d -> %d\n",i,first);
		temp=first+second;
		first=second;
		second=temp;
	}
	

	
	return 0;
}
