#include<stdio.h>
#include<math.h>
#define mod 19260817
long long fastPower(int bas,int power) {
    long long result=1,base=bas;
    while(power>0) {
        if(power&1) result=result*base%(1ll*mod);
        power>>=1;
        base=base*base%(1ll*mod);
    }
    return result;
}
int main() {
    int base,power;
    scanf("%d%d",&base,&power);
    long fastp=fastPower(base,power);
    printf("fastPower = %ld, math.pow = %ld\n",fastp,(long long)pow(base,power)%mod);
    return 0;
}