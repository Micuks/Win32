#include <stdio.h>
int main(void)
{
    int a, b;

    a = 5;
    b = 2;
    printf("line 7\na = %d\nb=%d\n", a, b);
    b = a;
    printf("line 8\na = %d\nb=%d\n", a, b);
    a = b;
    printf("line 7\na = %d\nb=%d\n", a, b);
    getchar();
    return 0;
}