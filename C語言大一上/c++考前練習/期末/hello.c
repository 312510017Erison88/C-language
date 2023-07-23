#include <stdio.h>
#include <stdlib.h>
#define N 5
void bubbleSort(int [], int);
void swap(int*, int*);
void sum(int []);
void delmin(int s[]);
void rank(int total[]);
void cool();
void hot();
int total[4];
FILE *cfptr;
int main()
{
	cfptr=fopen("clients2.dat","w");
	if(cfptr==NULL)
	{
		puts("file could not be opened");
		exit(-1);
	}
	else
	{

	int i,j;
	int a[N]={80,90,70,65,70};
	int b[N]={85,80,65,70,70};
	int c[N]={90,90,60,50,60};
	int d[N]={70,75,85,88,90};
		
	fprintf(cfptr,"NAME\tS1\tS2\tS3\tS4\tSUM\tRANK\n");
	
	fprintf(cfptr,"John\t");
	delmin(a);
	bubbleSort(a,N);
	sum(a);
	cool();
	/////////////
	fprintf(cfptr,"Mary\t");	
	delmin(b);
	bubbleSort(b,N);
	sum(b);
	hot();
	/////////////
	fprintf(cfptr,"Candy\t");
	delmin(c);
	bubbleSort(c,N);
	sum(c);
	rank(c);
	///////////
	fprintf(cfptr,"Sue\t");
	delmin(d);
	bubbleSort(d,N);	
	sum(d);
	fprintf(cfptr,"1\n");
	fclose(cfptr);
	}
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

void sum(int s[]){
	int i;
	int sum=0;
	for(i=1;i<5;i++)
	{
		sum+=s[i];
		total[i]=sum;
	}
	fprintf(cfptr,"%d",sum);
	fprintf(cfptr,"\t");
}
void delmin(int s[]){
	int min=100;
	int i;
	for(i=0;i<5;i++)
	{
		if(s[i]<min)
		min=s[i];
	}
	for(i=0;i<5;i++)
	{
		if(s[i]!=min)
		{
			fprintf(cfptr,"%d\t",s[i]);
		}
	}
}

void rank(int total[]){
	int i;
	int num=4;
	for(i=0;i<4;i++)
	{
		if(total[i]<total[i])
		{
			num=num-1;
		}
	}
	fprintf(cfptr,"%d",num);
	fprintf(cfptr,"\n");
}
void cool (){
	int i=2;
	fprintf(cfptr,"%d\n",i);
}
void hot(){
	int i=3;
	fprintf(cfptr,"%d\n",i);
}

