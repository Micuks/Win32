#include <stdio.h>
#include <time.h>
#include <math.h>
int main()
{
    for (int i = 100; i < 1000; i++)
    {
        if (i == (pow(i / 100, 3) + pow(i / 10 - 10 * (i / 100), 3) + pow(i % 10, 3)))
            printf("%d\nTime used = %f\n", i, (double)clock() / CLOCKS_PER_SEC);
    }
    getchar();
    return 0;
}