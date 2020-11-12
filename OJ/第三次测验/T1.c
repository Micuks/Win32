#include <stdio.h>
int main()
{
    int a, b = 0,length=0,vol;
    scanf("%d", &a);
    if (a % 10 == 0)
        printf("The number cannot be changed.\n");
    else
    {
        vol=a;
        while(vol>0)
        {
            
            vol/=10;
            length++;
        }
        for (int i = 1; i <= length; i++)
        {
            b *= 10;
            b += a % 10;
            a /= 10;
        }
        printf("%d\n", b);
    }
    
    int check;
    while((check=getchar())!='\n'&&check!=EOF);
    getchar();

    return 0;
}