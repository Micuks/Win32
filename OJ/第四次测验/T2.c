#include<stdio.h>
#include<math.h>
int isPrime(int n) {
    int sq=sqrt(n);
    if(n<4) return 1;
    else if((n%6)!=1&&(n%6)!=5) return 0;
    else for(int i=5;i<sq+1;i+=6)
        if(n%i==0||n%(i+2)==0) return 0;
    return 1;
}
int main() {
    int n;
    scanf ("%d",&n);
    for(int i=2;i<=n/2;i++) {
        if(isPrime(i)&&isPrime(n-i))
            printf("%d and %d\n",i,n-i);
    }
    return 0;
}