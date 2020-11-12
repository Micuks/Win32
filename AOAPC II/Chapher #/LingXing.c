#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    do
    {
        for (i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
                printf(" ");
            for (int j = 0; j < 2 * n - 1 - 2 * i; j++)
                printf("#");
            printf("\n");
        }
        n = 0;
        scanf("%d", &n);
    } while (n > 0);

    getchar();

    return 0;
}