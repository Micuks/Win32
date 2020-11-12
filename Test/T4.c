#include<stdio.h>
int main() {
    int a1,a2,b1,b2,as=0,bs=0,flag=1,ma,mb;
    char temp;
    if((temp=getchar())=='T') a1=10;
    else a1=temp-'0';
    if((temp=getchar())=='T') a2=10;
    else a2=temp-'0';
    if((temp=getchar())=='T') b1=10;
    else b1=temp-'0';
    if((temp=getchar())=='T') b2=10;
    else b2=temp-'0';
    as=a1+a2;
    bs=b1+b2;
    if(a1==a2) {
        if(b1==b2) {
            flag=0;
            if(a1>=b1) {
                printf("A:%d\n",a1);
            }
            else printf("B:%d\n",b1);
        }
        else if(flag) {
            flag=0;
            printf("A:%d\n",a1);
        }
    }
    else if(flag) {
        if(b1==b2) {
            flag=0;
            printf("B:%d\n",b1);
        }

        else if(flag) {
            if(((a1==b1)&&(a2==b2))||((a1==b2)&&(a2==b1))) {
                flag=0;
                printf("A:%d\n",as%10);
            }
            else if(as%10==bs%10) {
                flag=0;
                if(a1>a2) ma=a1;
                else ma=a2;
                if(b1>b2) mb=b1;
                else mb=b2;
                if(ma<mb) printf("B:%d\n",bs%10);
                else if(ma>mb) printf("A:%d\n",as%10);
                else if(ma==a1) {
                    if(mb==b1) {
                        if(a2<b2) printf("B:%d\n",bs%10);
                        else printf("A:%d\n",as%10);
                    }
                    else {
                        if(a2<b1) printf("B:%d\n",bs%10);
                        else printf("A:%d\n",as%10);
                    }
                }
                else {
                    if(mb==b1) {
                        if(a1<b2) printf("B:%d\n",bs%10);
                        else printf("A:%d\n",as%10);
                    }
                    else {
                        if(a1<b1) printf("B:%d\n",bs%10);
                        else printf("A:%d\n",as%10);
                    }
                }
            }
            else if(as%10<bs%10) {
                flag=0;
                printf("B:%d\n",bs%10);
            }
            else {
                flag=0;
                printf("A:%d\n",as%10);
            }
        }
    }

    return 0;
}