
#include<stdio.h>
main()
{
	int a,m,n,x,y,num1=1,i=1;
	int divisor,multiple;
	scanf("%d %d",&m,&n);
	x=m;
	y=n;
	if(m==n)
		i=0;
	while(m%2==0&&n%2==0&& i==1){
		m=m/2;
		n=n/2;
		num1=num1*2;
	}
	while(i==1){
		if(m<n){
		 a=m;
		 m=n;
		 n=a;	
		}
		m =m-n;
		if(m==n)
		i=0;
	}
	divisor=num1*m ;
	multiple=x*y/divisor;
	printf("%d %d\n",divisor,multiple);
	return 0;
}

