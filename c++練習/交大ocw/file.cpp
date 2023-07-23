#include <iostream>
using namespace std;
int main()
{
	int instream;
	instream.open("clients.dat");
	if(instream.fail())
	{
		cout<<"file open failed.\n";
		exit(1);
	}
	int maxlengh=100;
	char line[maxlengh];
	while(instream.getline(line,maxlengh))
	{
		cout<<"read line:"<<line<<endl;
	}
	instream.close();
	return 0;
}
