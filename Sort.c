#include <stdio.h>
#include <string.h>
void swap_strings(char (*s)[100], char *ptr1, char *ptr2)
{
    int *temp;
    for (int i = 0; i < 100; i++)
    {
        *temp = *(ptr1 + i);
        *(ptr1 + i) = *(ptr2 + i);
        *(ptr2 + i) = *(temp);
    }
}

int main()
{
    int ptr = 0, n;
    int score[20];
    char name[20][100];
    while (scanf("%s%d", name[ptr], &score[ptr]) == 2)
        ptr++;
    n = ptr;
    for (ptr = 0; ptr < n; ptr++)
    {
        if (score[ptr] < score[ptr + 1])
        {
            score[ptr] += score[ptr + 1];
            score[ptr + 1] = score[ptr] - score[ptr + 1];
            score[ptr] -= score[ptr + 1];
            swap_strings(name, *(name + ptr), *(name + ptr + 1));
            ptr--;
        }
    }
    for ()
        for ()
            putchar() printf();
    return 0;
}