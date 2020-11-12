#include <stdio.h>
int main()
{
    int flag = 1, n, m, temp, sum;
    scanf("%d%d", &n, &m);
    for (int i = m; i <= n; i++)
    {
        temp = i;
        sum = 0;

        while (temp > 0)
        {
            //printf("temp_old = %d   sum_old = %d        ", temp, sum);

            sum += (temp % 10) * (temp % 10);
            temp /= 10;

            //printf("temp_new = %d   sum_new = %d\n", temp, sum);
        }

        if ((i / m == sum) && (flag % 5 > 0))
        {
            printf("%d\t", i);
            flag++;
        }
        else if (i / m == sum)
        {
            printf("%d\n", i);
            flag++;
        }
    }
/*
    int check;
    while ((check = getchar()) != '\n')
        ;
    getchar();
*/
    return 0;
}