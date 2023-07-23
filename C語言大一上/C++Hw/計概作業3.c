#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
//產生1-100之間的亂數放到變數a內 
int main(void)
{
 	int a;
 	int first;
 	int second;
 	srand(time(NULL));
	a=(rand()%61)+30;
	printf("%d\n",a);
	
	while(a>0)
	{   
		printf("Please input a number from 1~3!\n");
		printf("first=");
		scanf("%d",&first);
		if(first>=1&&first<=3)
		{
			a-=first;
			printf("%d\n",a);
		}
		printf("second=");
		scanf("%d",&second);
		
		if(second>=1&&second<=3)
		{
			a-=second;
			second =0;
			printf("%d\n",a);
		}	
		if(a<0)
		{
			printf("The game is over!you are lose!\n");
		}
	
	}
		return 0;
}
