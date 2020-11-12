#include<stdio.h>
long long pow(int bas,int power) {
    long long result=1,base=bas;
    while(power) {
        if(power&1) result*=base;
        power>>=1;
        base*=base;
    }
    return result;
}
int main() {
    int num,i=0;
    long long ans=0;
    scanf("%d",&num);
    for(;num/pow(10,i+1);i++) {
        ans+=9*pow(10,i)*(i+1);
    }
    ans+=(num-pow(10,i)+1)*(i+1);
    printf("%d\n",(int)ans);
    return 0;
}