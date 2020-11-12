#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
#define MAXN 100
int kill_line();
int select();
int num[MAXN][2];
int state[MAXN];
int container[MAXN][MAXN];
int max(int a);
int n,nmax=-1;

int main()
{

	cin >> n;
	memset(num, 0, sizeof(num));
	memset(state, 0, sizeof(state));
	memset(container, 0, sizeof(container));
	for (int i = 0; i <= n - 1; i++)
	{
		cin >> num[i][0] >> num[i][1];
		state[i] = 1;
	}
	kill_line();

	return 0;
}

int kill_line()
{
	int potno = 0;
	for (int i = 0; i < n /*&& state[i] == 1*/; i++)
	{
		//int count = 2;
		int k1, k2, flag;
		int pot = 0;
		container[potno][pot++] = i;
		for (int j = 1; j < n && j > i /*&& state[j] == 1*/; j++)
		{
			flag = 0;
			if (num[i][0] != num[j][0])
			{
				k1 = (num[i][1] - num[j][1]) / (num[i][0] - num[j][0]);
				container[potno][pot++] = j;

				for (int k = 2; k < n && k > j && k > i /*&& state[k] == 1*/; k++)
				{
					if (num[i][0] != num[k][0])
					{
						k2 = (num[i][1] - num[k][1]) / (num[i][0] - num[k][0]);

						if (k1 == k2)
						{
							container[potno][pot++] = k;
							//count++;
							flag = 1;
						}
					}
				}
			}
			else
			{
				for (int k = 2; k < n && k > j && k > i /*&& state[k] == 1*/; k++)
				{
					if (num[i][0] == num[k][0])
					{
						container[potno][pot++] = j;
						container[potno][pot++] = k;
						flag = 1;
					}
				}
			}
			if (flag)
				potno++;
		}
	}
	return 0;
}
int compair()
{
	int point=0,numoflines=0;
	memset(state, 0, sizeof(state));
	for (int i = 0;; i++)
		for (int j = 0; ; j++)
		{
			for (int k = 0; k < n; k++)
			{
				if(container[i][j]==k) {point+=k;numoflines++;}

			}
			if(point==(n-1)*n/2) return max(numoflines);
			if(!container[i][j]){break;break;}
		}

}
int max(int a)
{
	if(a>nmax) return nmax=a;
}