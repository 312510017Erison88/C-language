#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void rfill1D(int *) ;
void print1DArray(int *);
void sort1D(int *);
void rfill2D(int *);
void print2DArray(int *); 

int main(void)
{   
	int r1[10]={0};
	int r2[20]={0};
	srand(time(NULL));
 // Something missing here¡K
	printf("rfill1D:\n");
	rfill1D(r1);
	print1DArray(r1); 

	printf("\nAfter sorting:\n");
	sort1D(r1);
	print1DArray(r1);
	printf("\n"); 

	
	printf("\nrfill2D:\n");
	rfill2D(r2);
	print2DArray(r2);
 
return 0; 
}

void rfill1D(int *a)
{
	bool unfill[10]={true,true,true,true,true,true,true,true,true,true};
	int count=0;
	while(count<10)
	{
		int x=rand()%10;
		if(unfill[x])
		{
			a[count]=x;
			count++;
			unfill[x]=false;
		}
	}	
	
}  

void print1DArray(int *a)
{
	for(int i=0;i<10;i++)
		printf("%3d",a[i]);
}

void sort1D(int *a)
{
	for(int i=0;i<9;i++)
		for(int j=i+1;j<10;j++)
			if(a[i]<a[j])
			{
				int tmp;
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
}

void rfill2D(int *a)
{
	bool unfill[20]={true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true};
	int count=0;
	while(count<20)
	{
		int x=rand()%20;
		if(unfill[x])
		{
			a[count]=x;
			count++;
			unfill[x]=false;
		}
	}		
}

void print2DArray(int *a)
{
	for(int i=0;i<20;i++)
	{
		printf("%3d",a[i]);
		if(i%4==3)
			printf("\n");
	}
}
 
