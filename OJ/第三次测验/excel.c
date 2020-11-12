#include<stdio.h>
int line0(int column);
int line1(int column);
int main()
{

    freopen("data.in","rb",stdin);
    freopen("data.out","wb",stdout);

    int n,l,c;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&l,&c);
        line0(c);
        for(int j=0;j<l;j++)
        {
            line1(c);
            line0(c);
        }
    }
/*
    int check;
    while((check=getchar())!='\n'&&check!=EOF);
    getchar();
*/
    return 0;

}

int line0(int column)
{
    printf("+");
    for(int i=0;i<column;i++)
    
        printf("--+");
    printf("\n");
    return 0;
}

int line1(int column)
{
    printf("|");

    for(int i=0;i<column;i++)
    printf("  |");

    printf("\n|");

    for(int i=0;i+1<column;i++)
    printf("--+");
    printf("--|\n|");

    for(int i=0;i<column;i++)
    printf("  |");
    printf("\n");
    return 0;
}