#include<stdio.h>
#define ROW 3
#define COL 3 
//void add(int A[ROW][COL],int B[ROW][COL],int C[ROW][COL])
int main(void)
{
	int sum,i,j,num=0;
	int A[ROW][COL]={{1,2,3},{4,5,6},{7,8,9}};
	int B[ROW][COL]={{10,10,10},{10,10,10},{10,10,10}};
	printf("¯x°}A+¯x°}B=¯x°}C\n");
	for(i=0;i<ROW;++i)//a¯x°} 
	{
		for(j=0;j<COL;++j)
		{
			printf("%3d",A[i][j]);
			num++;
			if(num%3==0)
			{
			printf("\n");
			}
		}
	}
	printf("+");
	printf("\n");
	for(i=0;i<ROW;++i)//b¯x°} 
	{
		for(j=0;j<COL;++j)
		{
			printf("%3d",B[i][j]);
			num++;
			if(num%3==0)
			{
			printf("\n");
			}
		}
	}
	printf("\n");
	printf("=\n");
	
	for(i=0;i<ROW;++i)
	{
		for(j=0;j<COL;++j)
		{
			printf("%3d",A[i][j]+B[i][j]);
			num++;
			if(num%3==0)
			{
			printf("\n");
			}
		}
	}
	return 0;
} 
