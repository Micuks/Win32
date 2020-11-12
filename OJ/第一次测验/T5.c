#include <stdio.h>

#include <stdlib.h>
//#define LOCAL

int main()
{
#ifdef LOCAL
    freopen("data.in", "r", stdin);
    freopen("data.out", "w", stdout);
#endif

    char ch;
    short sh;
    int in;
    long lo;
    long long ll;
    float fl;
    double lf;
/*
#ifdef LOCAL
    printf("%c\n",ch);
#endif
*/
    scanf("%c", &ch);
    scanf("%hd%d%ld%lld%f%lf", &sh, &in, &lo, &ll, &fl, &lf);

#ifdef LOCAL
    printf("%c\n",ch);
#endif

    printf("The ‘char’ variable is %c, it takes %zd byte.\n", ch, sizeof(ch));
    printf("The ‘short’ variable is %hd, it takes %zd bytes.\n", sh, sizeof(sh));
    printf("The ‘int’ variable is %d, it takes %zd bytes.\n", in, sizeof(in));
    printf("The ‘long’ variable is %ld, it takes %zd bytes.\n", lo, sizeof(lo));
    printf("The ‘long long’ variable is %lld, it takes %zd bytes.\n", ll, sizeof(ll));
    printf("The ‘float’ variable is %f, it takes %zd bytes.\n", fl, sizeof(fl));
    printf("The ‘double’ variable is %f, it takes %zd bytes.\n", lf, sizeof(lf));


    //system("pause");
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
    getchar();

    return 0;
}