#include <iostream>
using namespace std;
bool appropriate (int rate);
int main()
{
	int rate;
	cout<<"please input the rate!"<<endl;
	cin>>rate;
	if (appropriate(rate))
		cout<<"Rate is valid.\n";
	else
		cout<<"Rate is not valid.\n";
	return 0;
}

bool appropriate (int rate)
{
	return ((rate>=5)&&(rate<10)||(rate==0));
}
