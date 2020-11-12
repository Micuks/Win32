#include<stdio.h>
int main() {
    float single,sum=0,ave;
    char degree;
    for(int i=0;i<7;i++) {
        scanf("%f",&single);
        sum+=single;
    }
    ave=sum/7.0;
    if(ave>90) degree='A';
    else if(ave>70) degree='B';
    else if(ave>50) degree='C';
    else degree='D';
    printf("%c:%.1f\n",degree,ave);
    return 0;
}