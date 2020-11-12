#include <stdio.h>
#include <string.h>

char puzzle[10][10];
char seq[100];
const char *err_msg = "This puzzle has no final configuration.";
int main() {
    int exit = 1;
    int kase = 0;
    while (exit) {
        int err = 0;
        int c, x, y;
        memset(puzzle, 0, sizeof(puzzle));
        memset(seq, 0, sizeof(seq));
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                c = getchar();
                switch (c) {
                    case '\n':
                        if (j != 4) {
                            j--;
                            break;
                        } else {
                            c = ' ';
                        }
                    case ' ':
                        x = i;
                        y = j;
                    default:
                        puzzle[i][j] = (char)c;
                        break;
                }
            }
        }
        char *ptr = seq;
        for (;;) {
            scanf("%s", ptr);
            int l = strlen(ptr);
            if (ptr[l-1] == '0') {
                getchar();
                c = getchar();
                if (c == 'Z') {
                    exit = 0;
                } else {
                    ungetc(c, stdin);
                }
                break;
            }
            ptr += l;
        }

        int l = (int)strlen(seq) - 1;
        for (int i = 0; i < l; i++) {
            switch (seq[i]) {
                case 'A':
                    if (x > 0) {
                        puzzle[x][y] = puzzle[x-1][y];
                        puzzle[x-1][y] = ' ';
                        x--;
                    } else {
                        err = 1;
                    }
                    break;
                case 'B':
                    if (x < 4) {
                        puzzle[x][y] = puzzle[x+1][y];
                        puzzle[x+1][y] = ' ';
                        x++;
                    } else {
                        err = 1;
                    }
                    break;
                case 'L':
                    if (y > 0) {
                        puzzle[x][y] = puzzle[x][y-1];
                        puzzle[x][y-1] = ' ';
                        y--;
                    } else {
                        err = 1;
                    }
                    break;
                case 'R':
                    if (y < 4) {
                        puzzle[x][y] = puzzle[x][y+1];
                        puzzle[x][y+1] = ' ';
                        y++;
                    } else {
                        err = 1;
                    }
                    break;
                default: // ...
                    err = 1;
                    break;
            }
            if (err) break;
        }
        if (kase) {
            printf("\n");
        }
        printf("Puzzle #%d:\n", ++kase);
        if (err) {
            printf("%s\n", err_msg);
        } else {
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 5; j++) {
                    printf(&" %c"[!j], puzzle[i][j]);
                }
                printf("\n");
            }
        }
    }

    return 0;
}