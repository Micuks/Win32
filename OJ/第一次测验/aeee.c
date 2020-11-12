#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    printf("%c\n", ch);
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
    getchar();
    return 0;
}