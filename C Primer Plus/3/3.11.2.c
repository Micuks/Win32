#include<stdio.h>
int main(void)
{
    int chascii;
    printf("Please input an ascii code: __\b\b");
    scanf("%d",&chascii);
    printf("The char you have inputed is '%c'.\n",chascii);
    getchar();getchar();
    return 0;
}