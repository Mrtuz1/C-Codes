#include<stdio.h>

int main () {
	
	int i,j,n;
	char arr[100];
	char temp,devam;
	do{
		printf("lutfen kelimeyi giriniz:  ");
		scanf("%s",&arr);
		
		n=0;
		do{
			n++;//n kelimenin uzunlu�unu tutuyor �uan
		}while(arr[n]!='\0');
		printf("%d",n);
		
		i=0;
		do{// kelimenin harflerinin ba�tan sona tekrar etmesini sa�l�yor
			temp=arr[0];
			j=0;
			do{//kelimenin harflerini kayd�r�yor
				arr[j]=arr[j+1];
				j++;	
			}while(j<n-1);
			arr[n-1]=temp;
			
			j=0;
			do{
				printf("%c",arr[j]);
				j++;
				
			}while(j<n);
			printf("\n");
		
			i++;
		}while(i<n);
		
	printf("devam etmek i�in e veya E");
	scanf("%s",&devam);
	
	}while(devam =='e'|| devam =='E');
	
return 0;	
}
