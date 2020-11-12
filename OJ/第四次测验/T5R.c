#include<stdio.h>
int main() {
    int a,b,yue=1,bei;
    scanf("%d%d",&a,&b);
    for(int i=2;i<=a&&i<=b;i++) if(!(a%i)&&!(b%i)) yue=i;
    for(int i=a;;i+=a) if(!(i%b)) {bei=i;break;}
    printf("%d %d\n",yue,bei);
    return 0;
}