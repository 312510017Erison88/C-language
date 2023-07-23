#include <iostream>
using namespace std ;
int main()
{
	int score[4],max,i;
	cout<<"please imput four scores:\n";
	cin>>score[0];
	score[0]=max;
	for(i=1;i<4;i++)
	{
		cin>>score[i];
		if(score[i]>max)
		{
			max=score[i];
		}
	}
	cout<<"Max score is "<<max<<endl;
	
	cout<<"Differences are: \n";
	for(i=0;i<4;i++)
	{
		cout<<score[i];
		cout<<" off by ";
		cout<<(max-score[i]);
		cout<<endl;
	}
}
