#include<stdio.h>
#define ROW 3
#define COL 3 

int main(void)
{
	FILE *fptr;
	fptr=fopen("clients.dat","w");
	if(fptr==NULL)
	{
		puts("file could not be opened");
	}
	
	int sum,i,j,num=0;
	int A[ROW][COL]={{1,2,3},{4,5,6},{7,8,9}};
	int B[ROW][COL]={{10,10,10},{10,10,10},{10,10,10}};
	fprintf(fptr,"¯x°}A+¯x°}B=¯x°}C\n",A[ROW],B[COL]);
	for(i=0;i<ROW;++i)//a¯x°} 
	{
		for(j=0;j<COL;++j)
		{
			fprintf(fptr,"%3d",A[i][j]);
			num++;
			if(num%3==0)
			{
			fprintf(fptr,"\n");
			}
		}
	}
	fprintf(fptr,"+");
	fprintf(fptr,"\n");
	for(i=0;i<ROW;++i)//b¯x°} 
	{
		for(j=0;j<COL;++j)
		{
			fprintf(fptr,"%3d",B[i][j]);
			num++;
			if(num%3==0)
			{
			fprintf(fptr,"\n");
			}
		}
	}
	fprintf(fptr,"\n");
	fprintf(fptr,"=\n");
	
	for(i=0;i<ROW;++i)
	{
		for(j=0;j<COL;++j)
		{
			fprintf(fptr,"%3d",A[i][j]+B[i][j]);
			num++;
			if(num%3==0)
			{
			fprintf(fptr,"\n");
			}
		}
	}
	fclose(fptr);
	return 0;
} 
