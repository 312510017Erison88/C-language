#include <stdio.h>
#include <stdlib.h>
int sum(int m,int n);
int main()
{
	int m,n;
	printf("Please input two integer m and n(m<n):\n");
	scanf("%d",&m);
	scanf("%d",&n);
	while(m>=n)
	{
		printf("Please input integer m and n(m<n) again!:\n");
		scanf("%d",&m);
		scanf("%d",&n);
	}
	if(m<n)
	{
		printf("The sum is %d",sum(m,n));	
	}
	return 0;	
}
	int sum(int m,int n)
	{
		int x,y=0;
		for(x=m;x<=n;x++)
		{
			y=y+x;
		}
	return y;
	}
