#include<iostream>
using namespace std;
void bubblesort(int a[]);
int SIZE=10;
int main(void)
{
	int n[SIZE];//��10�Ӧ�m�A�bmain�{���̭� 
	size_t i;//size_t��unsigned int 
	for(i=0;i<10;++i)
	{
		n[i]=i*i; 
	}
	printf("%s%13s\n","Element","Value");
	
	for(i=0;i<10;++i)
	{
		printf("%7u%13d\n",i,n[i]);
	}
	//��w�Ƨ�*********////// 
	int a[SIZE]={2,6,4,8,10,12,89,68,45,6};
	bubblesort(a);
	return 0;
}
void bubblesort(int a[])
	{	
		int pass,i,hold;
		cout<<"The original order is\n";
		for(i=0;i<10;i++)
		{
			printf("%4d",a[i]);
		}
	
		for(pass=1;pass<SIZE;++pass)
			{
				for(i=0;i<SIZE-1;++i)
				{
					if(a[i]>a[i+1])
					{		
						hold=a[i];//����a[i]��Jhold�s 
						a[i]=a[i+1];
						a[i+1]=hold;
					}
				}
			}
	puts("\nData items in ascending order is");
	for(i=0;i<SIZE;++i)
	{
		printf("%4d",a[i]);
	}
}


     
