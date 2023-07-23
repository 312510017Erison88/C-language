#include <stdio.h>
#include <stdlib.h>
#define N 5
void bubbleSort(int [], int);
void swap(int*, int*);
void printArray(int [], int);
void sum(int [],int);
void delmin(int []);
//int data[4];

int main(){
	int i,j;
	int a[N]={80,90,70,65,70};
	int b[N]={85,80,65,70,70};
	int c[N]={90,90,60,50,60};
	int d[N]={70,75,85,88,90};
		
	printf("NAME\tS1\tS2\tS3\tS4\tSUM\tRANK\n");
	delmin(a);
	bubbleSort(a,N);
	bubbleSort(b,N);
	bubbleSort(c,N);
	bubbleSort(d,N);

	printf("John");	
	printArray(a,N);
//	sum(a);
//	rank(a,i);
	printf("Mary");	
	printArray(b,N);
//	sum(b);
//	rank(b,i);
	printf("Candy");
	printArray(c,N);
//	sum(c);
//	rank(c,i);
	printf("Sue");
	printArray(d,N);
//	sum(d);
//	rank(d,i);
	
	return 0;	
}
void bubbleSort(int s[], int size){
	int pass,j;
	for(pass=0;pass<size-1; pass++)
	{
		for(j=0;j<size-1-pass;j++)
		{
			if(s[j]>s[j+1])
			{
				swap(&s[j],&s[j+1]);
			}
		}
	}
}
void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void printArray(int s[], int size){
	int i,j;
	printf("\t");
	for(i=1; i<size; i++)
	{
		printf("%d\t", s[i]);
	}
}
/*void sum(int s[]){
	int i;
	int sum=0;
	for(i=1;i<5;i++)
	{
		sum+=s[i];
	}
	printf("%d\t",sum);
	//data[k]=sum;
}*/
void delmin(int s[]){
	int min=100;
	int i;
	for(i=0;i<5;i++)
	{
		if(s[i]<min)
		min=s[i];
	}
	if(s[i]!=min){
		printf("%d\t",s[i]);
	}
}

/*void rank(){
	int i;
	for(i=0;i<4;i++)
	{
		if(data[i]<data[i+1]){
		swap(&data[i],&data[i+1]);
		}
	}
	data[i]=i+1;
	printf("%d\n",data[i]);
}*/

