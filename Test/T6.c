#include<stdio.h>
int guess(int *c,int n) {
    int number_of_truth_tellers_at_present;
    for(int i=0;i<10;i+=2) {
        number_of_truth_tellers_at_present=0;
        for(int j=5;j<9;j++) {
            if(c[i]==j&&c[i+1]==1) {
                number_of_truth_tellers_at_present ++;
                
                for(int k=0;k<10;k+=2)
                    if(c[k]!=j&&c[k+1]==0) number_of_truth_tellers_at_present++;
                if(number_of_truth_tellers_at_present == n) return j;
            }
        }
    }
    return 2333;
}
int main() {
    int n,c[15];
    scanf("%d",&n);
    for(int i=0;i<10;i+=2) 
        scanf("%d%d",&c[i],&c[i+1]);
    printf("%d\n",guess(c,n));
    return 0;
}