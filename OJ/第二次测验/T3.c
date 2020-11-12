#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c;
    double s, area;

    scanf("%lf %lf %lf", &a, &b, &c);
    if ((a + b) > c && (a + c) > b && (b + c) > a)
    {
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("%.3lf\n", area);
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