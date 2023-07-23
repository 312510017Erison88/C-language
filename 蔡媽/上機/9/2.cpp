#include<stdio.h>
#include<math.h>
int isBaseB(long long,int);
long long B2dec(long long,int);

int main(void)
{
	long long n;
	int b;
	while(scanf("%lld%d",&n,&b))
	{
		isBaseB(n,b)?printf("(%lld , %d) = %d\n",n,b,B2dec(n,b)):printf("%lld is not base on %d\n",n,b);
	}
	
		
	return 0;
}


int isBaseB(long long input, int B)
{
	int flag=1;
	while(input)
	{
		if(((int)input%10)>=B)
			flag=0;
		input/=10;
	}
	return flag;
}


long long B2dec(long long num,int B)
{
	long long x=0;
	int i=0;
	while((int)num)
	{
		x+=(num%10)*pow(B,i);
		i++;
		num/=10;
	}
	
	
	return x;
}
