#include<stdio.h>
void walk(int,int,int,int);

int count;

int main(void)
{
	int x,y;
	printf("enter position (x,y): ");
	while(scanf("%d%d",&x,&y))
	{
		count=0;
		walk(x,y,0,0);
		if(count)
			if(x==0&&y==0)
				printf(" 0 \n");
			else
				printf("%d\n",count);
		else
			printf("robot will shut down!\n");
	}
		
	return 0;
}

void walk(int x,int y,int shutx,int shuty)
{
	if(x-1>=0&&shutx<3&&shuty<3)
		walk(x-1,y,shutx+1,0);
	if(y-1>=0&&shutx<3&&shuty<3)
		walk(x,y-1,0,shuty+1);
	if(x==0&&y==0&&shutx<3&&shuty<3)
		count++;
	
}
