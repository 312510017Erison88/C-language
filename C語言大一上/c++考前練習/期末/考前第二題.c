#include <stdio.h>

int main(void)
{
	FILE *cfptr;
	int hw[4][4],i,j,sum,answer,name,ch;
	cfptr=fopen("clients2.dat","r");
	if(cfptr==NULL)
	{
		puts("file could not be opened");
	}	
	
	while((ch=getc(cfptr))!=EOF)
	{
		printf("%c",ch);
	}
	
	/*for(i=0;i<4;i++)
	{
		fscanf(cfptr,"%s",&name);
		for(j=0;j<4;j++)
			fscanf(cfptr,"%d",&hw[i][j]);
			fscanf(cfptr,"%d%d\n",&sum,&answer);
			printf("%10s",name);
		for(j=0;j<4;j++)
				printf("%3d",hw[i][j]);
				printf("%6d",sum);
				printf("%5d",answer);
				printf("\n");
	}*/
	fclose(cfptr);
	
} 
