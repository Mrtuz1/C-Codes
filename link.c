#include <stdio.h>
#include<stdlib.h>
#define MAX 50

void output(char kod[],int sure[],int link[],int head,int N){
    int cur=head;
    int i;
    while (cur!=-1) {
        for(i=0;i<sure[cur];i++) {
            printf("%c ",kod[cur]);
        }
        cur=link[cur];
    }
    printf("\n");
}

int main(){
    int N;
    printf("is Sayisini Girin\n");
    scanf("%d",&N);
    int i;
    char kod[MAX];
    int sure[MAX];
    int link[MAX];
    for(i=0;i<N;i++){
        printf("is Kodunu Girin\n");
        scanf(" %c",&kod[i]);
        printf("is Suresini Girin\n");
        scanf("%d",&sure[i]);
        printf("Link Sirasini Girin\n");
        scanf("%d",&link[i]);
    }
    int head;
    printf("Head Degerini Girin:\n");
    scanf("%d",&head);
    printf("output=\n");
    output(kod,sure,link,head,N);

    return 0;
}
