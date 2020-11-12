#include<stdio.h>
#include<string.h>
const char* gene="ACGT";
int main() {
    //freopen("data.in","r",stdin);///
    //freopen("data.out","w",stdout);///
    int m,n,dist[5],kase,max,l2;
    char vector[52][1002];
    scanf("%d",&kase);
    while(kase--) {
        l2=0;
        scanf("%d%d",&m,&n);
        for(int i=0;i<m;i++) {
            scanf("%s",vector[i]);
            //printf("%s\n",vector[i]);///
        }//putchar('\n');
        for(int j=0;j<n;j++) {
            memset(dist,0,sizeof(dist));
            max=0;
            for(int i=0;i<m;i++) {
                switch(vector[i][j]) {
                    case 'A':
                        dist[0]++;
                        break;
                    case 'C':
                        dist[1]++;
                        break;
                    case 'G':
                        dist[2]++;
                        break;
                    case 'T':
                        dist[3]++;
                        break;
                    default:
                        printf("纳尼?\n");
                        break;
                }
            }
            //printf("\nColumn %d:\n",j);///
            for(int l=0;l<4;l++) {
                l2+=dist[l];
                if(dist[max]<dist[l]) max=l;
                /*
                printf("dist[%d] is %d, dist[%d] is %d,",max,dist[max],l,dist[l]);///
                printf("now max is %c\n",gene[max]);
                */
            }
            
            //printf("\nIn colomn %d the gene unit that appears the most is %c,which appears %d times.\n",j,gene[max],max);///
            l2-=dist[max];
            putchar(gene[max]);
        }
        printf("\n%d\n",l2);
    }
    return 0;
}