#include<stdio.h>
int lcm(int,int);
int gcd(int,int);

int main(void)
{
	int n,m,p;
	scanf("%d", &n);
	scanf("%d", &m);
	p=lcm(n,m);
	int result = gcd(n,m);
	printf("%d\n",p);
	printf("%d\n",result);	
	return 0;
}

int gcd(int a,int b)	//�̤j���]�� 
{
	int r;
	while(b)
		r=a%b , a=b ,b=r;
	return a;
}

int lcm(int a,int b)	//�̤p������ 
{
	return (a*b/gcd(a,b));
}
