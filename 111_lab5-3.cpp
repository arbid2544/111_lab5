#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		if(i==1||i%2==0||i%3==0||i%5==0)
		{
			printf("%d",i);
		}
	}
	return 0;
}
