#include<stdio.h>
#include<string.h>
#define MAXN 1005
int main(){
    int n=1,kase=1;
    while(n){
        scanf("%d",&n);
        if(n) printf("Game %d:\n",kase++);
        int countA,flagofbreak=0,countB,timea[10],timeb[10],a[MAXN],b[MAXN];
        memset(timea,0,sizeof(timea));
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        for(int i=0;i<10;i++)
            for(int j=0;j<n;j++)
                if(a[j]==i) timea[i]++;
        while(flagofbreak<n){
            flagofbreak=0,countA=0,countB=0;
            memset(timeb,0,sizeof(timeb));
            for(int i=0;i<n;i++){
                scanf("%d",&b[i]);
                if(a[i]==b[i]) countA++;
                if(b[i]==0) flagofbreak++;
            }
            for(int i=0;i<10;i++){
                for(int j=0;j<n;j++)
                    if(b[j]==i) timeb[i]++;
                if(timea[i]&&timeb[i]) {if(timea[i]>timeb[i]) countB+=timeb[i]; else countB+=timea[i];}
            }
            if(flagofbreak<n)
            printf("    (%d,%d)\n",countA,countB-countA);
        }
    }
    return 0;
}