#include <iostream>
#include <iomanip>//setw函數一定要在iomanip字庫裡面 
using namespace std;
int main()
{
	int num;
	cout<<"please imput thr number!";
	cin>>num;
	if(num<0)
		num=num*-1;
		cout<<"absolute number="<<num<<endl;
		
	cout<<setw(5)<<"12345"<<endl;//sewt():specify the width of the output expression
	cout<<setw(8)<<"12345"<<endl;
	cout<<left<<setw(6)<<"12345"<<endl;//left is align the expression from the leftmost
	return 0;
} 
