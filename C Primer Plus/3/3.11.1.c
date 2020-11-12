#include <stdio.h>
#include <limits.h>
#include <float.h>
int main(void)
{
    float flmax = FLT_MAX;
    printf("%d\n+%f\n%f\n", INT_MAX + 1, FLT_MAX + 1, -(flmax + 10000000000000000000000000));
    getchar();
    return 0;
}