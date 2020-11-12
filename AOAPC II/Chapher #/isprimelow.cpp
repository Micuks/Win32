#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int m, n, i0,  k = 0, r;
    char ch;
    cin >> m >> ch >> n;
    r = n - m + 1;
    for (i0 = m; i0 <= n; i0++)
    {
        {
            if (i0 == 2 || i0 == 3)
                k++;
            // if (i0 % 6 != 1 && i0 % 6 != -1)
            //;

            else
            {
                int _sqrt = sqrt(i0);
                for (int i = 5; i <= _sqrt; i += 6)
                {
                    if (i0 % i == 0 || i0 % (i + 2) == 0)
                        k++;
                }
            }
        }
    }
    if (k == 0)
        cout << r;
    else
        cout << r - k;
    return 0;
}