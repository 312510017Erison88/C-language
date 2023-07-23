#include <iostream>
using namespace std;
int fibon(int n);
int answer;
int main()
{
	int n;
	cout<<"Please input a integer!"<<endl;
	cin>>n;
	fibon(n);
	cout<<"fibon sequennce answer="<<answer;
	return 0; 
}
int fibon(int n)
{
	if(n==0||n==1)
		answer=n;
	else
		answer=fibon(n-1)+fibon(n-2);
	return answer;
}
