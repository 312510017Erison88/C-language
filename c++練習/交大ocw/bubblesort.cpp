#include <iostream> 
using namespace std;
int main()
{
	int v[5], i , j;
	cout<<"Please input 5 nimbers:";
	for(i = 0; i < 5; i++)
	{
		scanf("%d", &v[i]);
	}
	for(i = 0; i < 4 ;i++)
	{
		for(j = 0; j < 4 ; j++)
		{
			if(v[j] > v[j+1])
			{
				int temp = v[j];
				v[j] = v[j+1];
				v[j+1] = temp;
			}
		}
	}		
	for(i=0; i<5; i++)
	{
		cout<<v[i]<<"\n";
	}
}
