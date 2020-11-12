#include<stdio.h>
int main() {
    int n1,n2;
    FILE *my,*std;
    my=fopen("my.out","rb");
    std=fopen("std.out","rb");
    while((fscanf(my,"%d",&n1)==1)&&(fscanf(std,"%d",&n2)==1)) {
        if(n1-n2) printf("%d %d\n",n1,n2);
    }
    return 0;
}