#include<stdio.h>
#define n 100
int main(){
	char d[n];
	int counter,i,j;
	char temp;
	char check[1];
	do{
		counter=0;
		j=0,i=0;
		printf("kelimeyi giriniz\n");
		scanf(" %s",&d);
		
		do{
			counter++;
		}while(d[counter]!='\0');
		
		do{
		temp=d[0];
		
		do{
			d[j]=d[j+1];
			j++;
		}while(j<counter-1);
		
		j=0;
		d[counter-1]=temp;
		
		printf("%d.adim = %s\n",(i+1),d);
		i++;
		
		}while(i!=counter);
		
	printf("devam etmek icin e ya da E harfine basiniz!\n");
	
		scanf("%s",&check);
		
	}while(check[0]=='E' || check[0]=='e');
	
	return 0;
}
