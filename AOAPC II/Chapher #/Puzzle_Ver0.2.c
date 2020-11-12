#include <stdio.h>
int move(char (*cube)[6], char order, int *pios, int* pjos) {
    switch (order) {
    case 'A':
        if (*pios == 0)
            return 0;
        else {
            cube[*pios][*pjos] = cube[*pios - 1][*pjos];
            (*pios)--;
            cube[*pios][*pjos] = ' ';
        }
        break;
    case 'B':
        if (*pios == 4)
            return 0;
        else {
            cube[*pios][*pjos] = cube[*pios + 1][*pjos];
            (*pios)++;
            cube[*pios][*pjos] = ' ';
        }
        break;
    case 'L':
        if (*pjos == 0)
            return 0;
        else {
            cube[*pios][*pjos] = cube[*pios][*pjos - 1];
            (*pjos)--;
            cube[*pios][*pjos] = ' ';
        }
        break;
    case 'R':
        if (*pjos == 4)
            return 0;
        else {
            cube[*pios][*pjos] = cube[*pios][*pjos + 1];
            (*pjos)++;
            cube[*pios][*pjos] = ' ';
        }
        break;
    default:
        break;
    }
    return 1;
}
int main() {
    char cube[6][6],order;
    int kase=1,ios,jos,flag;
    int *pios=&ios,*pjos=&jos;
    order=getchar();
    while(order!='Z') {
        flag=1;
        for(int i=0;i<5;i++) {
            for(int j=0;j<5;j++) {
                cube[i][j]=order;
                if(order==' ') {
                    ios=i;
                    jos=j;
                }
                if((order=getchar())=='\n') {
                    if(j==3) {
                        ios=i;
                        jos=4;
                        cube[i][4]=' ';
                        j=4;
                    }
                    order=getchar();
                }
            }
        }
        while(order!='0') {
            while(order=='\n') order=getchar();
            if(!move(cube,order,pios,pjos)&&flag) {
                printf("\nPuzzle #%d:\n"+!(kase-1),kase);
                kase++;
                printf("This puzzle has no final configuration.\n");
                flag=0;
            }
            while((order=getchar())=='\n')
                ;
        }
        if(flag) {
            printf("\nPuzzle #%d:\n"+!(kase-1),kase);
            kase++;
            for(int i=0;i<5;i++) {
                for(int j=0;j<5;j++) printf(" %c"+!j,cube[i][j]);
                putchar('\n');
            }
        }
        while((order=getchar())=='\n')
            ;
    }

    return 0;
}