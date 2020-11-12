#include<stdio.h>
int pow(int base,int power) {
    long long result = 1;
    while(power) {
        if(power&1) result*=1ll*base;
        power>>=1;
        base=(1ll*base*base);
    }
    return result;
}
int main() {
    int a,b,power=-1;
    scanf("%d%d",&a,&b);
    while(a*pow(10,++power)%b!=a)
        ;
    printf("a/b = 0.%d",a*pow(10,power)/b);
}