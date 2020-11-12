#include<stdio.h>
#include<string.h>
int judge(char (*rect)[15],int i,int j) {
    if((*(rect+i-1))[j]=='0'||*(*(rect+i)+j-1)=='0') {
        return 1;
    }
    return 0;
}
int main() {
    int r,c,exit=1,ans,puz=1,ni,nj;
    int ptr[15][15],kase[1000];
    char temp;
    char rect[15][15];
    while(exit) {
        ans=1;
        memset(ptr,0,sizeof(ptr));
        memset(rect,'0',sizeof(rect));
        scanf("%d%d",&r,&c);
        for(int i=1;i<=r;i++) {
            for(int j=1;j<=c;j++) {
                temp=getchar();
                switch(temp) {
                    case '\n':
                        j--;
                        break;
                    case '*':
                        temp=0;
                        break;
                    default:
                        rect[i][j]=temp;
                        if(temp!='0'&&judge(rect,i,j)) {
                            kase[(ans<<1)-1]=i;
                            kase[(ans<<1)]=j;
                            ptr[i][j]=ans++;
                        }
                        break;
                }
            }
        }
        printf("\npuzzle #%d:\nAcross\n"+!(puz-1),puz);
        puz++;
        for(int i=2;i<=((ans-1)<<1);i+=2) {
            if(rect[kase[i-1]][kase[i]-1]=='0') {
                printf("%3d.",ptr[kase[i-1]][kase[i]]);
                ni=kase[i-1],nj=kase[i];
                while(rect[ni][nj]!='0') {
                    putchar(rect[ni][nj++]);
                }
                putchar('\n');
            }
        }
        printf("Down\n");
        for(int i=2;i<=((ans-1)<<1);i+=2) {
            if('0'==rect[kase[i-1]-1][kase[i]]) {
                printf("%3d.",ptr[kase[i-1]][kase[i]]);
                ni=kase[i-1],nj=kase[i];
                while(rect[ni][nj]!='0') {
                    putchar(rect[ni++][nj]);
                }
                putchar('\n');
            }
        }
        getchar();
        if((temp=getchar())=='0') exit=0;
        else ungetc(temp,stdin);
    }

    return 0;
}