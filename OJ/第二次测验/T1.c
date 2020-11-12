#include <stdio.h>
int main()
{
    int n1, n2, con;
    scanf("%d%d", &n1, &n2);
    if (n1 == n2)
        printf("The two numbers are equal.");
    else
    {
        if (n2 > n1)
        {
            con = n1;
            n1 = n2;
            n2 = con;
        }
        printf("The larger number is %d, the smaller number is %d.", n1, n2);
    }
/*
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
    getchar();
*/
    return 0;
}