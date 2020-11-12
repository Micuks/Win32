#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if ((a < 11 && b < 11) || a == b)
        printf("no result\n");
    else if (a == 11 && b < 10)
        printf("A win\n");
    else if (a < 10 && b == 11)
        printf("B win\n");
    else if (a - b == 2)
        printf("A win\n");
    else if (b - a == 2)
        printf("B win\n");
    else if ((a - b == 1) || (a - b == -1))
        printf("no result\n");
    else
        printf("error\n");

    int _check;
    while ((_check = getchar()) != '\n' && _check != EOF)
        ;
    getchar();

    return 0;
}