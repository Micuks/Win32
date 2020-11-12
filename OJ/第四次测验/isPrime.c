#include<stdio.h>
#include<math.h>
int main() {
    int n;
    scanf("%d",&n);
    int sq=sqrt(n);
    if(n<4) printf("return 1;\n");
    else if((n%6)!=1&&(n%6)!=5) printf("return 0;\n");
    else
        for(int i=5;i<sq+1;i+=6) {
            int count1=0;printf("%d\n",++count1);
            if((n%i)==0||(n%(i+2))==0)
                printf("%d %% %d / %d\n",n,i,i+2);
        }
    printf("1\n");
    /*
    int check;
    while((check=getchar())!='\n'&&check!=EOF);
    getchar();
    */
    return 0;
}