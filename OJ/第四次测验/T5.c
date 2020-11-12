#include<stdio.h>
int yue(int a,int b) {
    while(a%b!=0&&b%a!=0) {
        if(a>b) a%=b;
        else if(b>a) b%=a;
    }
    //printf("a = %d , b = %d . \n",a,b);
    if(!(a%b)) return b;
    if(!(b%a)) return a;
    else return 1;
}
int bei(int a,int b) {
    int temp;
    if(a>b) {
        temp=a;
        while(temp%b) temp+=a;
    }
    else {
        temp=b;
        while(temp%a) temp+=b;
    }
    return temp;
}
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    if(a==b) printf("%d %d\n",a,a);
    else printf("%d %d\n",yue(a,b),bei(a,b));

    
    return 0;
}