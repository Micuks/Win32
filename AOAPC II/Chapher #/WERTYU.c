#include <stdio.h>
int main()
{
    const char c1[] = "1234567890-=QWERTYUIOP[]\\ASDFGHJKL;\'ZXCVBNM,./";
    char ch;
    int i;

    while ((ch = getchar()) != EOF && ch != '\n')
    {
        for (i = 0;; i++)
        {
            if (ch == c1[i])
                break;
        }
        putchar(c1[i - 1]);
    }

    //getchar();

    return 0;
}