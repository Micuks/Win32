#include<stdio.h>
#include<string.h>
#define MAXN 100001
int excel[MAXN];
int main() {
   /* freopen("Digit Generator.in","r",stdin);
    freopen("Digit Generator.out","w",stdout);*/
    int temp1,temp2;
    memset(excel,0,sizeof(excel));
    for(int i=1;i<100001;i++) {
        temp1=i;temp2=i;
        while(temp1>0) {
            temp2+=temp1%10;
            temp1/=10;
        }
        if(!excel[temp2]) excel[temp2]=i;
    }
    scanf("%d",&temp1);
    while(temp1--) {
        scanf("%d",&temp2);
        printf("%d\n",excel[temp2]);
    }
    return 0;
}