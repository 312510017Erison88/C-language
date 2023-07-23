#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char mystring[100]="This is a simple string";
	//char *ch=strchr(mystring,'s');
	//char *cc=strstr(mystring,"simple");
	cout<<strchr(mystring,'s')<<endl<<strstr(mystring,"simple")<<endl;
	return 0;
}
