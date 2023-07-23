#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	int sum=0;
	int x;
	printf("Please input a even number!");
	scanf("%d",&n);
	
	for(x=2;x<=n;x=x+2)
		sum=sum+x; 
	printf("sum=%d",sum);	
	
}
