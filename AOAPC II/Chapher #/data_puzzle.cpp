#include<iostream>
#include<string>
#include<sstream>
#include<ctime>
#include<string.h>

using namespace std;
#define random(a,b) ((a)+rand()%((b)-(a)+1))

stringstream ss;
const char* ord = "ABLR";
const char* unit = "QWERTYUIOPASDFGHJKLZXCVBNM";

int main() {
    int seed = time(NULL);

    srand(seed);

    int n1=random(1,4),n2,i,j,ulen=strlen(unit),olen=strlen(ord),flagospace;

    while(n1--) {
        flagospace=1;

        for(i=0;i<5;i++) {
            for(j=0;j<5;j++) {
                if(flagospace&&!random(0,9)) {
                    flagospace=0;
                    if(j!=4) putchar(' ');
                    else if(random(0,1)) putchar(' ');
                    continue;
                }
                putchar(unit[random(0,ulen-1)]);
            }
            putchar('\n');
        }
        n2=random(1,10);
        while(n2--) {
            putchar(ord[random(0,olen-1)]);
            if(!random(0,4)) putchar('\n');
        }
        printf("0\n");
    }
    putchar('Z');
    if(random(0,1)) putchar('\n');
    return 0;
}