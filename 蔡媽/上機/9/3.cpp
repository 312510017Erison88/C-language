#include<stdio.h>
#include<math.h>
void parse(int,int,int,int);

int main(void)
{
	int a3,a2,a1,a0;
	while(scanf("%d%d%d%d",&a3,&a2,&a1,&a0))
		parse(a3,a2,a1,a0);
			
	return 0;
}

void parse(int a3,int a2,int a1,int a0)
{
	int flag1,flag2=0;
	double x;
	for(int i=1;i<=(a3>0?a3:-a3);i++)
		if((a3>0?a3:-a3)%i==0)
			for(int j=1;j<=(a0>0?a0:-a0);j++)	//(x>y)?1:0
//如果x>y這個條件成真的時候,就會傳回1的值,否則就會傳回0值
				if((a0>0?a0:-a0)%j==0)
				{
					double k=j;
					x=k/i;
					fabs(a3*x*x*x+a2*x*x+a1*x+a0-0)<=1e-10?flag1=1,flag2=1:flag1=0;
					flag1?printf("%lf\n",x):NULL;
					x=-k/i;
					fabs(a3*x*x*x+a2*x*x+a1*x+a0-0)<=1e-10?flag1=1,flag2=1:flag1=0;
					flag1?printf("%lf\n",x):NULL;
				}
			
	if(flag2==0)
		printf("No rational solution");
}
