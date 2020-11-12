#include<stdio.h>
#include<math.h>
int suum(int n) {
    int sq=sqrt(n);
    int count=1;
    for(int i=2;i<=sq;i++) {
        if(!(n%i)) count+=(i+n/i);
    }
    if(sq*sq==n) count-=sq;
    return count;
}
int main() {
    int a,b,c,flag=1,msg=1,count=0;
    scanf("%d%d%d",&a,&b,&c);
    if(a==1) a++;
    for(;a<=b;a++) {
        if(fabs(a-suum(a))<=c) {
            if(count<=5) {
                count++;
                if(flag) {flag=!flag;printf("%d",a);}
                else printf("\t%d",a);
                if(count==5) {putchar('\n');flag=!flag;count=0;}
                msg=0;
            }
        }
    }
    if(msg) printf("There is no proper number in the interval.");
    printf("\n");
    return 0;
}