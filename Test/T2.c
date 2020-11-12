#include<stdio.h>
int main() {
    int n,single,sum,flag;
    scanf("%d",&n);
    while(n--) {
        sum=0;
        flag=0;
        for(int i=0;i<3;i++) {
            scanf("%d",&single);
            if(single<75) flag=1;
            if(!flag) sum+=single;
        }
        if(sum<240) flag=1;
        if(flag) printf("No\n");
        else printf("Yes\n");
    }
    return 0;
}