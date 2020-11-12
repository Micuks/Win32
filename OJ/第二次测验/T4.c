#include <stdio.h>
int main()
{
    double n;
    scanf("%lf", &n);
    if (n > 100 || n < 0)
        printf("The score is out of range!\n");
    else if (n >= 90)
        printf("A\n");
    else if (n >= 80)
        printf("B\n");
    else if (n >= 70)
        printf("C\n");
    else if (n >= 60)
        printf("D\n");
    else
        printf("E\n");
    /*
    int _check;
    while ((_check = getchar()) != '\n' && _check != EOF)
        ;
    getchar();
    */
    return 0;
}