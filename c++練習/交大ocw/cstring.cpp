#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char firststring[50]="baby";
	cout<<strlen(firststring)<<""<<endl;//�Ʀr�ꤤ���X�Ӧr�� 
	
	char secondstring[50]="The view";
	cout<<strcat(secondstring," is beautiful!")<<endl;//���_��Ӧr�� 
	
	strcpy(firststring,"hello");//�Nhello�s��firststring�� 
	cout<<firststring<<endl;
	
	if(strcmp(firststring,secondstring))//strcmp�ΨӬݨ�ƦC�O�_�ۦP 
		cout<<"strings are not the same!"<<endl;
	else
		cout<<"strings are the same!"<<endl;
	
	return 0;
}
