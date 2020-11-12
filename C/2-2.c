#include <stdio.h>
int main()
{
    FILE *fin, *fout;
    fin = fopen("2-2.i", "rb");
    fout = fopen("2-2.o", "wb");

    int _3, _5, _7, sum, check, kase = 1;

    while ((fscanf(fin, "%d%d%d", &_3, &_5, &_7) == 3))
    {
        sum = _7;
        int bool = 0;
        while (sum < 101 && _3 < 3 && _5 < 5 && _7 < 7)
        {
            if (sum % 5 == _5 && sum % 3 == _3)
            {
                fprintf(fout, "Case %d: %d\n", kase, sum);
                bool = 1;
            }
            sum += 7;
        }
        if (bool == 0)
            fprintf(fout, "Case %d: No answer.\n", kase);
        kase++;
    }
    fclose(fin);
    fclose(fout);
    return 0;
}