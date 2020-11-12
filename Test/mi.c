#include<stdio.h>
long long fastPow(long long base,long long power) {
    long long result=1;
    while(power>0) {
        if(power&1) result*=base;
        result%=1000;
        base*=base;
        base%=1000;
        power >>= 1;
    }
    return result%1000;
}
int main() {
    int base,power,ans;
    while(scanf("%d%d",&base,&power)==2&&(base+power)) {
        ans=fastPow(base,power);
        printf("%d\n",ans);
    }

    return 0;
}