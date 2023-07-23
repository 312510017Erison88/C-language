#include <iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Please input a integer:";
	cin>>num;
	while(!cin.eof())//«öcontrol z ¥i¥H¸õ¥X°j°é 
	{
		cout<<"Please input a integer:";
		cin>>num;	
	}	
	return 0;
} 
