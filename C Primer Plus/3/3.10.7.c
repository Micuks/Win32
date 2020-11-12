#include "stdio.h"
int main(void)
{
    double l;
    l = 2.9e05L;
    printf("%#o %le %c %d %c %4.1f %#x %d\n", 012, l, 's', 100000, '\n', 20.0f, 0x44, -40);
    getchar();
    return 0;
}