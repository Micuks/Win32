#include "stdio.h"
#include <stdlib.h>
int main()
{
    int num[2];

    scanf("%d%d", &num[0], &num[1]);
    printf("%d %d\n", num[0], num[1]);

    printf("The sum is %d and the difference is %d.\n", num[0] + num[1], num[0] - num[1]);
    system("pause");                                /////////////////////////
    int clc;                                        /////////////////////////////////
    while ((clc = getchar()) != '\n' && clc != EOF) ///
        printf("clc = %d ", clc);                   ///////////////////
    printf("\n");                                   ////////////////////////
    system("pause");
    return 0;
}