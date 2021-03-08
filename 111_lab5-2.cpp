#include<stdio.h>
int main()
{
	int a,i,j;
	scanf("%d",&a);
	for(i=1;i<=(a/2);i++)
	{
		for(j=1;j<=a/2-i;j++)
		{
			printf("_");			
		}
		printf("*");
		for(j=1;j<=(i-1)*2-1;j++)
		{
			printf("_");
		}
		if(i!=1)
		printf("*");
		for(j=1;j<=a/2-i;j++)
		{
			printf("_");
		}
		printf("\n");
	}
	return 0;
}
