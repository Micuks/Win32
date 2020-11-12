#include <stdio.h>
int main()
{
    char s;

    while ((s = getchar()) != '\n' && s != EOF)
    {
        if ((s >= 'A' && s <= 'W') || (s >= 'a' && s <= 'w'))
            printf("%c", s + 3);
        else if (s > 'W' && s < 'a')
            printf("%c", s + 'A' - 1 - 'Z' + 3);
        else if (s > 'w' && s <= 'z')
            printf("%c", s + 'a' - 1 - 'z' + 3);
    }
    printf("\n");
/*
    int check;
    while ((check = getchar()) != '\n' && check != EOF)
        ;
    getchar();
    */
    return 0;
}