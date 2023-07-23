#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char firststring[50]="baby";
	cout<<strlen(firststring)<<""<<endl;//數字串中有幾個字元 
	
	char secondstring[50]="The view";
	cout<<strcat(secondstring," is beautiful!")<<endl;//接起兩個字串 
	
	strcpy(firststring,"hello");//將hello存到firststring中 
	cout<<firststring<<endl;
	
	if(strcmp(firststring,secondstring))//strcmp用來看兩數列是否相同 
		cout<<"strings are not the same!"<<endl;
	else
		cout<<"strings are the same!"<<endl;
	
	return 0;
}
