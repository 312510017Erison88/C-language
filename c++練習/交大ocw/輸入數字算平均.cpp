#include <iostream>
using namespace std;
const int maxscore=100;
void initial(int a[],int size);
int fill(int a[],int size,int& usedsize);
double average(const int a[],int usedsize);
	
int main()
{
	int score[maxscore],numUsed=0;
	initial(score,maxscore);
	fill(score,maxscore,numUsed);
	double avg;
	avg=average(score,numUsed);
	cout<<"The average is: "<<avg<<endl;
	return 0;
}
////////////////////////////////////////
void initial(int a[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		a[i]=-1;	
	}	
} 

int fill(int a[],int size,int& usedsize)
{
	cout<<"enter up to "<<size<<" numbers and enter -1 to end:\n";
	int next=-1,i=0;
	cin>>next;
	while ((next>=0)&&(i<size))
	{
		a[i]=next;
		i++;
		cin>>next; 
	}
	usedsize=i;
	
	return 0;
}

double average(const int a[],int usedsize)
{
	double total=0;
	for(int i=0;i<usedsize;i++)
	{
		total=total+a[i];
	}
	if(usedsize>0)
	{
		return(total/usedsize);
	}
	else
	{
		cout<<"Error:no element in array"<<endl;
	}
}

