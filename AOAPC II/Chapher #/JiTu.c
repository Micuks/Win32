#include<stdio.h>
int main() {
    int m,n;
    scanf("%d%d",&m,&n);
    for(int i=0;i<=n;i+=2) {
        for(int j=0;j+i<=n;j+=4) {
            for(int k=0;k+j+i<=n;k+=6) {
                if((i/2+j/4+k/6==m)&&(i+j+k==n)) printf("%d %d %d\n",i/2,j/4,k/6);
            }
        }
    }


    return 0;
}