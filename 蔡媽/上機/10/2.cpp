#include<stdio.h>

void encoder(int *x, int N, int bias);

int main(void)
{
	int n,shift,plus;
	while(scanf("%d%d%d",&n,&shift,&plus))
	{
		encoder(&n,shift,plus);
	}
	
}

void encoder(int *x, int N ,int bias)
{
	int tmp1=1,exp=0,i,tmp2=1,result=0,k;
	while(tmp1<=*x)
	{
		tmp1*=10;
		exp++;
	}
	tmp1/=10;
	N%=exp;
	for(i=1;i<=N;i++)
		tmp2*=10;
	k=(*x)%tmp2*tmp1/tmp2*10;
	result+=(*x)%tmp2*tmp1/tmp2*10+(*x)/tmp2+bias;
	*x=result%(tmp1*10);	
	printf("%d\n",*x);
}
