#include<stdio.h>
int judge(int *gr) {
    
}
int main() {
    int gra[10],grb[10],grc[10];
    gra[1]=2,gra[3]=1,gra[5]=2;
    grb[1]=1,grb[3]=4,grb[5]=4;
    grc[1]=3,grc[3]=2,grc[5]=1;
    for(int i=1;i<4;i++) {
        gra[2*i]=1;
        grb[2*i]=1;
        grc[2*i]=1;
    }
    if(judge(gra));
    if(judge(grb));
    if(judge(grc));
}