#include <iostream>
#include <string> 
using namespace std;
int main()
{
	string sentence1;
	string sentence2;
	string adj("beautiful");
	string noun("hair");
	sentence2=" Good eye!";
	sentence1="You have " + adj + " " + noun;
	cout<<sentence1<<endl;
	cout<<sentence2<<endl;
	cout<<sentence2.insert(6,adj)<<endl;//insrt¬°´¡¤Jfunction 
	
	return 0; 
}
