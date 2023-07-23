#include <iostream>
using namespace std;
int* display();
int main(void)
{
	cout<<*display()<<endl;
}
int* display()
{
	int*ptr = new int(0);
	int b[2] = {10,50};
	for(int i=0;i<2;i++)
	*ptr += b[i];
	return ptr;
}
