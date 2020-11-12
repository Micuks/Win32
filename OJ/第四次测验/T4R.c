    #include<stdio.h>
    #include<math.h>
    int main()
    {
    	int yes=0,a,b,c,i,j,sum=0,count=0;
        scanf("%d%d%d",&a,&b,&c);
    	for(i=a;i<=b;i++)
        {
        	sum=0;
    		for(j=1;j<i;j++)
        	{
        		if(i%j==0)
        		  sum+=j;
    		}
    		if((int)fabs((int)(i-sum))<=c)
    		  {
    			printf("%d\t",i);
    			yes=1;
    			count++;
    			if(count>=5)
    			  {
    			    printf("\n");
    			    count=0;
    			}
    		}
    	}
    	if(yes==0)
    	  printf("There is no proper number in the interval.");
    	printf("\n");
    	return 0;
     } 