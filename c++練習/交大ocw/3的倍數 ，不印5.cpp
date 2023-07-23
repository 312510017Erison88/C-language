#include <iostream>
using namespace std;
int main(void)
{
	int i,j=0;
	for(i=1;i<=50;i++)
	{
		if(i%3!=0)
		continue;
		cout<<i<<" ";
	}
	cout<<endl;
	while(j<10)
	{
		j++;
		if(j==5)
		continue;
		cout<<j<<" ";	
	}
	return 0;
}
