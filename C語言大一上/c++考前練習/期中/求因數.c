//輸入一個整數 N，印出 N 之所有因數。(利用取餘數符號 %)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int i,n;
	printf("input a number!\n",n);
	scanf("%d",&n);
	for(i=1;i<=n;i=i+1)
	{
		if(n%i==0)
		printf("%d\n",i);
	}
}
