#include<stdio.h>
int a;
long long almul(a);
int main()
{
    char ch[20];
    int num[20],v=0;
    int p,q,n;
    long long mean=1;
    
    scanf("%d",&n);
    for(p=0;p<n;p++){
        scanf("%c\n",&ch[p]);
        num[p]=0;
        for(q=0;q<p;q++){
            if(ch[p]==ch[q])
                num[p]++;                      
        }
        if(num[p]==0)
            v++;
        else
            mean*=num[p];
    }
    /*for(p=0;p<=n;p++){
    printf("%c",ch[p]);
    printf("%d\n",num[p]);}
    printf("%d\n",v);
    */
    printf("%lld",almul(v)/mean);
    
    return 0;
}
long long almul(a){
long long answer;

if(a>1)
    answer=a*almul(a-1);
else
    answer=1;
return(answer);
}