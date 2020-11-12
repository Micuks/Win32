#include <stdio.h>
int main()
{
    int x, y, output;
    scanf("%d%d", &x, &y);
    output = x;
    if (y == 0)
        printf("1\n");
    else
    {
        for (int i = 1; i < y; i++)
            output *= x;
        printf("%d\n", output);
    }
    /*
    int c;
    while((c=getchar())!='\n'&&c!=EOF);
    getchar();
*/
    return 0;
}