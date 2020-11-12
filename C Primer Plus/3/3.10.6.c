#include <stdio.h>
int main(void)
{
    int n1=12;
    int n2=0x3;
    char ch1='C';
    float n3=2.34e07;
    char ch2='\040';
    float n4=7.;
    long n5=6L;//Is L undroppable?
    float n6=6.0f;//f is not suggested to drop.
    float n7=0x5.b6p12f;
    printf("12 %d\n0x3 %#x\n'C' %c\n2.34e07 %.2e\n'040' %c\n7.0 %.1f\n6L %ld\n6.0f %.1f\n0.5.b6p12 %a\n",n1,n2,ch1,n3,ch2,n4,n5,n6,n7);
    getchar();
    return 0;
}