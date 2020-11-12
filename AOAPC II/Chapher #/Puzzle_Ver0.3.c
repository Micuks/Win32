#include <stdio.h>
int move(char (*cube)[6], char order, int* pios, int* pjos) {
    switch (order) {
    case 'A':
        if (*pios == 0) return 1;
        else {
            cube[*pios][*pjos] = cube[*pios - 1][*pjos];
            (*pios)--;
            cube[*pios][*pjos] = ' ';
        }
        break;
    case 'B':
        if (*pios == 4) return 1;
        else {
            cube[*pios][*pjos] = cube[*pios + 1][*pjos];
            (*pios)++;
            cube[*pios][*pjos] = ' ';
        }
        break;
    case 'L':
        if (*pjos == 0) return 1;
        else {
            cube[*pios][*pjos] = cube[*pios][*pjos - 1];
            (*pjos)--;
            cube[*pios][*pjos] = ' ';
        }
        break;
    case 'R':
        if (*pjos == 4) return 1;
        else {
            cube[*pios][*pjos] = cube[*pios][*pjos + 1];
            (*pjos)++;
            cube[*pios][*pjos] = ' ';
        }
        break;
    default:
        break;
    }
    return 0;
}
int main() {
    char cube[6][6],temp;
    int kase=1,ios,jos,flag,exit=1;
    int *pios=&ios;
    int *pjos=&jos;
    while(exit) {
        flag = 0;
        for(int i=0;i<5;i++) {
            for(int j=0;j<5;j++) {
                temp=getchar();
                switch(temp) {
                    case '\n':
                        if (j==0) {
                            j--;
                            break;
                        }
                        else {
                            temp = ' ';
                        }
                    case ' ':
                        ios=i;
                        jos=j;
                    default:
                        cube[i][j]=temp;
                        break;
                }
            }
        }
        while((temp=getchar())!='0') {
            if(move(cube,temp,pios,pjos)==1) flag=1;
        }
        getchar();//eat a \n
        if((temp=getchar())=='Z') exit=0;
        else ungetc(temp,stdin);
        printf("\nPuzzle #%d:\n"+!(kase-1),kase);
        kase++;
        if(flag) printf("This puzzle has no final configuration.\n");
        else {
            for(int i=0;i<5;i++) {
                for(int j=0;j<5;j++) {
                    printf(" %c"+!j,cube[i][j]);
                }
                putchar('\n');
            }
        }
    }
    return 0;
}