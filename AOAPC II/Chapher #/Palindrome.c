#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAXN 100
int main()
{
    /*freopen("palindrome.in", "r", stdin);
    freopen("palindrome.out", "w", stdout);
*/
    const char *rev = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
    const char *msg[] = {"not a palindrome.", "a regular palindrome.",
                         "a mirrored string.", "a mirrored palindrome."};
    char str[MAXN];
    int len;

    while (scanf("%s", str) == 1)
    {
        int fmir = 1, frev = 1;
        len = strlen(str);
        for (int i = 0; i < (len + 1) / 2; i++)
        {
            if (str[i] != str[len - i - 1])
                frev = 0;
            if (isalpha(str[i]))
            {
                if (str[len-1-i] != rev[str[i] - 'A'])
                    fmir = 0;
            }
            else if (str[len-i-1] != rev[str[i] - '1' + 26])
                fmir = 0;
        }
        printf("%s -- is %s\n\n", str, msg[fmir * 2 + frev]);
    }

    return 0;
}