#include <iostream>
using namespace std;
int main(void)
{
	int i,j,flag=0;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=9;j++)
		{
			cout<<i<<"*"<<j;
			cout<<"="<<i*j;
			cout<<"\t";
			flag++;
		}
		if(flag%9==0)
		{
			cout<<endl;
		}
	}
	return 0;
}
