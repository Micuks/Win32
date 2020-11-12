#include <iostream>
#include <string>
#include <string.h>
#include <fstream>
 
using namespace std;
 
char s[100];
int n, l;
 
int ismin(int p, int q)
{
    for(int i = 0; i < l; i++)
    {
 
        if(s[p+i] == s[q+i])
        {
            if((i+q+1) == l && (l%q == 0))return 1;
            else continue;
        }
        else return 0;
    }
    return 0;
}
 
int main()
{
    cin >> n;
    int ans = 0;
   // ofstream savefile("D:\\test.txt");
 
    while(n--)
    {
        cin >> s;
        ans = 0;
        l = strlen(s);
        for(int i = 1; i < l; i++)
        {
            if(ismin(ans, i))
            {
                ans = i;
                break;
            }
 
        }
        if(ans == 0)
            {
                ans = l;
 
            }
        cout << ans << endl;
        if(n!=0)cout << endl;
        //savefile << ans << endl;
       // if(n!=0)savefile << endl;
        ans = 0;
        memset(s, ' ', sizeof(s));
    }
    //savefile.close();
}