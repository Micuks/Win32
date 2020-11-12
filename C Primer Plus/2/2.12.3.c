#include <stdio.h>
int main(void)
{
    int agey, aged;
    agey=18;
    aged=365*agey+agey/4;
    printf("I've been living for %d years,which equals to about %d days.",agey,aged);
    getchar();
    return 0;
}