#include<stdio.h>
void decode(char *,int ,int);

int main(void)
{
	char str[100]={0};
	int n,flag=0;
	scanf("%d%c",&n,&str[0]);
	for(int i=1;i<=n;i++)
	{
		flag=0;
		int j=0;
		while(scanf("%c",&str[j])&&str[j]!=10)
			j++;
		for(int k=1;k*k<=j;k++)
			if(k*k==j)
			{
				decode(str,k,j);
				flag=1;
			}
		if(flag==0)
			printf("INVALID\n");	
	}
	return 0;
}

void decode(char *a,int row,int num)
{
	char str[10][10]={0};
	for(int i=0;i<num;i++)
		str[i/row][i%row]=a[i];
	for(int i=0;i<num;i++)
		printf("%c",str[i%row][i/row]);
	printf("\n");
}
