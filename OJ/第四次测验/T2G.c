#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	int s1,s2;
	int i,j;
	
	for(s1=2;s1<n-s1;s1++)
	{
		for(i=2;s1%i!=0;i++)
		{
			if(i==s1-1)
			{
				s2=n-s1;
				for(j=2;s2%j!=0;j++)
				{
					if(j==s2-1)
					{
						printf("%d and %d\n",s1,s2);
						break;
					}
				}
			}
			if(s2%j==0||j==s2-1)
			{
				break;
			}
		}
	}
	return 0;
 }