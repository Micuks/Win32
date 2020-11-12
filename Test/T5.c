#include<stdio.h>
#include<math.h>
int isPrime(int p) {
    int sq=sqrt(p);
    for(int i=2;i<=sq;i++) {
        if(!(p%i)) return 0;
    }
    return 1;
}
int main() {
    int n,temp,count;
    scanf("%d",&n);
    while(n--) {
        count=0;
        do {
            scanf("%d",&temp);
            if(temp!=-1) {
                if(isPrime(temp)) count++;
            }
        }while(temp!=-1);
        printf("%d\n",count);
    }

    //getchar();getchar();

    return 0;
}