#include<stdio.h>
#include<string.h>
#define maxn 105
int compare(const char * str,int p,int q) {
    int length=strlen(str);
        for(int i=0;i<length;i++) 
            //if(*(str+(p+i)%length)!=*(str+(q+i)%length)) return *(str+(p+i)%length)<*(str+(q+i)%length);
            if(str[(p+i)%length]!=str[(q+i)%length]) return str[(p+i)%length]<str[(q+i)%length];
    return 0;
}
int main() {
    freopen("Circular Sequence.in","r",stdin);
    freopen("Circular Sequence.out","w",stdout);
    char str[maxn];
    int i,ans,n,len;
    scanf("%d",&n);
    while(n--) {
        ans=0;
        scanf("%s",str);
        len=strlen(str);
        for(i=0;i<len;i++) {
            if(compare(str,i,ans)) ans=i;
        }
        for(int i=0;i<len;i++) {
            putchar(str[(ans+i)%len]);
        }
        putchar('\n');
    }
    return 0;
}