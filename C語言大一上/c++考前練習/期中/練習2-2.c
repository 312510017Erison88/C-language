#include <stdio.h>
#include <stdlib.h>
int main()
{
	float x;
	float y;
	float a;
	float area;
	
	area=0;
	for(x=0;x<=1;x=x+0.25)
	{
		x=x+0.25;
		y=x*x;	
		a=y*0.25;
		area=area+a; 
	}	
	printf("the area is %f\n",area);
}
