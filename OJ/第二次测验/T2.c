#include <stdio.h>
int main()
{
    char c[3];
    int bool = 0;

    for (int i = 0; i < 3; i++)
    {
        if (!(((c[i] = getchar()) >= 'A' && c[i] <= 'Z') || (c[i] >= 'a' && c[i] <= 'z')))
        {
            bool = 1;
            
        }
    }
    /*
    if (((c[1] - c[0])* (c[1] - c[2]) == -1)&&bool==0)
    */
   int d=c[0]-c[1],e=c[1]-c[2];
   if((d==-1&&e==-1)||(d==1&&e==1)||(d==-1&&e==1)||(d==1&&e==-1)&&bool==0)
        printf("Yes\n");
    else
        bool = 1;
    if (bool == 1)
        printf("No\n");

    int _check;
    while ((_check = getchar()) != '\n' && _check != EOF)
        ;
    getchar();

    return 0;
}