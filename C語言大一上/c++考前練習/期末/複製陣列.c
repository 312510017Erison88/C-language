#include <stdio.h>
#include <stdlib.h>
#define max 3
#define length 10
int main(void)
{
	char arr1[max][length]={"Tom","Lily","James"};
	char arr2[max][length];
	int i,j;
	for(i=0;i<max;i++)
	{
		for(j=0;j<length;j++)
		{
			if(arr1[i][j]=='\0')
				break;
			else
				arr2[i][j]=arr1[i][j];
		}
		arr2[i][j]='\0';
	}
	for(i=0;i<max;i++)
	printf("arr2[%d]=%s\n",i,arr2[i]);
	return 0;
}

