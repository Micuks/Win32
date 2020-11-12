#include <stdio.h>
int main(void)
{
    char ch =13, chhh = '\015', chhhh = '\x0d';
    printf("!%c1 !%c12 !%c123 !%c1234", ch, ch, ch, ch);
    getchar();
    return 0;
}