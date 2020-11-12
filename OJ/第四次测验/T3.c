#include<stdio.h>
#include<math.h>
int main() {
    double x,ex,divide;
    int i=2;
    scanf("%lf",&x);
    divide=x;
    ex=1+x;
    while(fabs(divide)>=1e-8) {
        divide*=x/i++;
        ex+=divide;
    }
    printf("%.4f\n",ex);
    return 0;
}