#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    double s, area;

    scanf("%d%d%d", &a, &b, &c);
    if ((a + b) > c && (b + c) > a && (c + a) > b)
    {
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("%.3f\n", area);
    }
    else
        printf("The edges cannot make up of a triangle.\n");
/*
    int _check;
    while ((_check = getchar()) != '\n' && _check != EOF)
        ;
    getchar();
*/
    return 0;
}