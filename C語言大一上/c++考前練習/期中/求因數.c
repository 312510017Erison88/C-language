//��J�@�Ӿ�� N�A�L�X N ���Ҧ��]�ơC(�Q�Ψ��l�ƲŸ� %)
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
