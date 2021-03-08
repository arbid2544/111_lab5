#include<stdio.h>
int main()
{
	int a,b=0,c,k=0,i;
	scanf("%d",&a);
	for(i=1;k<a;i++)
	{
	    	c=i;
	    	for(int j=0;j<=c;j++)
			{
			   if(c%2==0)
			   {
				c/=2;
			   }
			   else if(c%3==0)
			   {
			   	c/=3;
			   }
			   else if(c%5==0)
			   {
			   	c/=5;
			   }
	    	}
	    	if(c==1)
	    	{
	    		//	printf("%d",i);
	    			k++;
			}
			
			
			b++;
		
	}
	printf(" %d",i-1);
	return 0;
}
