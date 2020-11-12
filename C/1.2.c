#include <stdio.h>
#include <math.h>
#include <time.h>
int main()
{
    FILE *fprint;
    fprint = fopen("o1.2.txt", "wb");
    int size_int = (int)pow(2, 8 * sizeof(int) - 1);
    double doub = 0.9;
    int count = 2;
    fprintf(fprint, "size of int is %I64d\n", sizeof(int));
    fprintf(fprint, "the maxium of int is %d\n", size_int);
    do
    {
        doub *= 0.1;
        doub += 0.9;
        fprintf(fprint, "doub=%.17f count=%d\n", doub, count++);
    } while (1.0 - doub > 1e-1000);
    fprintf(fprint, "Time used = %f\n", (double)clock() / CLOCKS_PER_SEC);
    fclose(fprint);

    return 0;
}