#include<stdio.h>
#define ROW 3
#define COL 3 

int main(void)
{
	FILE *cfptr;
	cfptr=fopen("clients1.dat","w");
	if(cfptr==NULL)
	{
		puts("file could not be opened");
	}
	else{
	
	int sum,i,j,num=0;
	int A[ROW][COL]={{1,2,3},{4,5,6},{7,8,9}};
	int B[ROW][COL]={{10,10,10},{10,10,10},{10,10,10}};
	fprintf(cfptr,"¯x°}A+¯x°}B=¯x°}C\n",A[ROW],B[COL]);
	for(i=0;i<ROW;++i)//a¯x°} 
	{
		for(j=0;j<COL;++j)
		{
			fprintf(cfptr,"%3d",A[i][j]);
			num++;
			if(num%3==0)
			{
			fprintf(cfptr,"\n");
			}
		}
	}
	fprintf(cfptr,"+");
	fprintf(cfptr,"\n");
	for(i=0;i<ROW;++i)//b¯x°} 
	{
		for(j=0;j<COL;++j)
		{
			fprintf(cfptr,"%3d",B[i][j]);
			num++;
			if(num%3==0)
			{
			fprintf(cfptr,"\n");
			}
		}
	}
	fprintf(cfptr,"\n");
	fprintf(cfptr,"=\n");
	
	for(i=0;i<ROW;++i)
	{
		for(j=0;j<COL;++j)
		{
			fprintf(cfptr,"%3d",A[i][j]+B[i][j]);
			num++;
			if(num%3==0)
			{
			fprintf(cfptr,"\n");
			}
		}
	}
	fclose(cfptr);
	}
	return 0;
} 
