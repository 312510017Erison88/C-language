#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	FILE *fptr1,*fptr2;
	char ch;
	
	fptr1=fopen("welcome.txt","r");
	fptr2=fopen("output.txt","w");
	if((fptr1!=NULL)&&(fptr2!=NULL))
	{
		while((ch=getc(fptr1))!=EOF)
		{
			putc(ch,fptr2);
		}
		fclose(fptr1);
		fclose(fptr2);
		printf("the file is copied");
	}
	else{
			printf("failure");
		} 
		return 0;
} 
