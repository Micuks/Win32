#include<stdio.h>
int main() {
    int n,t,t0=0,t1=0,t2=0,t3=0,t4=0,t5=0,t6=0,t7=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&t);
        if(t==0) t0++;
        if(t==1) t1++;
        if(t==2) t2++;
        if(t==3) t3++;
        if(t==4) t4++;
        if(t==5) t5++;
        if(t==6) t6++;
        if(t==7) t7++;
    }
    if(t7) printf("7:%d\n",t7);
    if(t6) printf("6:%d\n",t6);
    if(t5) printf("5:%d\n",t5);
    if(t4) printf("4:%d\n",t4);
    if(t3) printf("3:%d\n",t3);
    if(t2) printf("2:%d\n",t2);
    if(t1) printf("1:%d\n",t1);
    if(t0) printf("0:%d\n",t0);

    return 0;
}