#include <stdio.h>
//#define LOCAL ;
int main()
{
#ifdef LOCAL
    freopen("data.in", "r", stdin);
    freopen("data.out", "w", stdout);
#endif
    char ch;
    int flag = 0;
    while ((ch = getchar()) != EOF)
    {
        if (ch == '\"' && !flag)
        {
            flag = !flag;
            printf("``");
        }
        else if (ch == '\"' && flag)
        {
            flag = !flag;
            printf("\'\'");
        }
        else
            putchar(ch);
    }

    return 0;
}