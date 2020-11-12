#include <stdio.h>
#include <math.h>
int main(void)
{
    double a, b, c, x1, x2, del;
    scanf("%lf%lf%lf", &a, &b, &c);
    del = b * b - 4 * a * c;
    if (a)
    {
        if (del >= 1e-6)
        {
            x1 = (-b + sqrt(del)) / (2 * a);
            x2 = (-b - sqrt(del)) / (2 * a);
            if (a > 0)
                printf("The equation has two distinct real roots: %.4f and %.4f.\n", x1, x2);
            else
                printf("The equation has two distinct real roots: %.4f and %.4f.\n", x2, x1);
        }
        else if (del < 1e-6 && del > -(1e-6))
            printf("The equation has two equal roots: %.4f.\n", -b / (2 * a));
        else
        {
            double c = sqrt(-del) / (2 * a);
            x1 = -b / (2 * a);

            printf("The equation has two complex roots: %.4f+%.4fi and %.4f-%.4fi.\n", x1, c, x1, c);
        }
    }
    if (!a)
        printf("The equation is not quadratic.\n");
/*
    int _check;
    while ((_check = getchar()) != '\n' && _check != EOF)
        ;
    getchar();
*/
    return 0;
}