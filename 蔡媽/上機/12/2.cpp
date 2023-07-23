#include<stdio.h>
bool isHamming(int n);

int main(void)
{
	int n,i=1,num=0;
	while(scanf("%d",&n))
	{
		while(i<=n)
		{
			num++;
			if(isHamming(num))
				i++;
		}
		printf("%d\n",num);
	}	 
	return 0;
}

bool isHamming(int n)
{
	 
	if(n==1)
		return 1;
	else if(n%2==0)
		return	isHamming(n/2);
	else if(n%3==0)
		return	isHamming(n/3);
	else if(n%5==0)
		return	isHamming(n/5);
	else 
		return 0;
		
	
}
