#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//����1-100�������üƩ���ܼ�a�� 
int main(void)
{
 	int a;
 	int b;
 	srand(time(NULL));
	a=(rand()%100)+1;//1~100���ü� 
	printf("Please input a number from 1~100!\n");
	scanf("%d",&b);
	while(b!=a&&b!=0)
	{
		if(b<a &&b!=0)
		{
			printf("your number is lower!\n");
		} 
		else if(b>a &&b<100)
		{
			puts("your number is higher!\n");
		}		
		printf("Please input a number!\n");
		scanf("%d",&b);
	}
		if(b==0)
		{
			printf("the answer is %d\n",a);
		}
		if(a=b)
		{
			printf("Bingo!\n");	
			printf("the answer is %d\n",a);
		}	
 		return 0; 
}

	
