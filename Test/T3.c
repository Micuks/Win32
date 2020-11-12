#include<stdio.h>
int main() {
    int y1,y2,y5,money,sum,ways=0;
    scanf("%d%d",&money,&sum);
    for(y5=0;y5*5<=money;y5++) {
        for(y2=0;y5*5+y2*2<=money;y2++) {
            y1=money-5*y5-y2-y2;
            if(y1+y2+y5==sum) ways++;
            
            //printf("y1 = %d, y2 = %d, y5 = %d, ways = %d\n",y1,y2,y5,ways);

        }
    }
    printf("%d\n",ways);

    //getchar();getchar();

    return 0;
}