//print2.c
#include <stdio.h>
int main(void)
{
    unsigned int un = 4294967295;
    long big = 2147483647;
    long long verybig = 9223372036854775807;
    short end = 32767;
    printf("unsighed int is %u and not %d.\n", un, un);
    printf("short is %hd and %d.\n", end, end);
    printf("long is %ld and %d,but %d is not suggested.\n",big, big, big);
    printf("long long is %lld not %ld.\n", verybig, verybig);
    printf("\a");
    getchar();
    return 0;
}