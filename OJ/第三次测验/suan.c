#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, d, e;
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
    if (fabs(e = b * c - d) > 1e-6)
        printf("%.1f\n", a / e);
    else
        printf("error\n");

    int check;
    while ((check = getchar()) != '\n' && check != EOF)
        ;
    getchar();

    return 0;
}