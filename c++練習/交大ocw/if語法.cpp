#include <iostream>
using namespace std;
int main()
{
	int age;
	cout<<"please imput your age!";
	cin>>age;
	if (age>18)
	{
		cout<<"Eligible to vote!"<<endl;
		cout<<"No longer a minor!"<<endl;
	}
	else
	{
		cout<<"Not eligible to vote!"<<endl;
		cout<<"Still a minor!"<<endl;
		return 0;
	}
} 
