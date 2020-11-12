#include<stdio.h>
#include<string.h>
int point(int i,int period) {
    if((i+1)%period) return (i+1)%period-1;
    else return period-1;
}
int main() {
    int n,len,period,p;
    char str[85];
    scanf("%d",&n);
    while(n--) {
        memset(str,' ',sizeof(str));
        p=0;
        scanf("%s",str);
        len=strlen(str);
        period=1;
        while(p<len-1) {
            for(int i=0;i<len;i++) {
                p=i;
                if(str[i]!=str[point(i,period)]) {
                    period++;
                    break;
                }
            }
        }

        if(!(len%period)) printf("%d\n",period);
        else printf("%d\n",len);
        if(n) putchar('\n');
    }
    return 0;
}