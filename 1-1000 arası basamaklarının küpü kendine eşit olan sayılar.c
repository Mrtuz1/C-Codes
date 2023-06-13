#include<stdio.h>
int main(){
	int i,sum,num,digit;
	for(i=1;i<=99999;i++){
		sum =0;
		num =i;
		
		while(num>0){
		digit=num%10;
		sum+=digit*digit*digit;
		num=num/10;}
		if(sum==i){
			printf("%d\n",sum);
		}
	}
	
	return 0;
}
