#include <iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Please input a integer:";
	cin>>num;
	while(!cin.eof())//��control z �i�H���X�j�� 
	{
		cout<<"Please input a integer:";
		cin>>num;	
	}	
	return 0;
} 
