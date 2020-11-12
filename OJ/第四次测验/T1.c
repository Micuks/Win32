#include<stdio.h>
#include<string.h>
int main() {
    char ch[20];
    int len;
    scanf("%s",ch);
    len=strlen(ch);
    for(int i=0;i<len-1;i++)
        printf("%c ",ch[i]);
    printf("%c\n",ch[len-1]);
    return 0;
}