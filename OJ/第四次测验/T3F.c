#include<stdio.h>
#include<math.h>
int main(void)
{
	double x,sum=1,fen,ji=1;
	int i,j;
	scanf("%lf",&x);
	fen=x;
	if(x==0)
		printf("1.0000");

	else
	{
		for(i=2;fabs(fen)>=1e-8;i++)
		{
			ji=1;
			sum=sum+fen;
			
			for(j=1;j<=i;j++)
			{
				ji=ji*j;
			}
			x=x*x;
			fen=(x/ji);
		}
		printf("%.4lf",sum);
	}
	
	return 0;
}