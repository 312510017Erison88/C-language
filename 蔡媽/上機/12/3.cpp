#include <stdio.h>
#include <conio2.h>
#define MAX 5 // define the max recursions, try different numbers!
void drawRect(int x1, int y1, int x2, int y2)
{ 
	textbackground(WHITE);
	int x,y;
	for (x=x1;x<=x2;x++)
		for (y=y1;y<=y2;y++)
		{
			gotoxy(x,y);
			printf(" ");
		}
}

void drawSierpinski(int n, int x1, int y1, int x2, int y2)
{ //draw the white rectangle
	drawRect((x1+x2)/2,y1,x2-1,(y1+y2)/2-1);
	if (n < MAX)
	{
		drawSierpinski(n+1,x1,y1,(x1+x2)/2,(y1+y2)/2); 
		drawSierpinski(n+1,x1,(y1+y2)/2,(x1+x2)/2,y2); 
		drawSierpinski(n+1,(x1+x2)/2,(y1+y2)/2,x2,y2); 
	}
}

int main()
{
	textbackground(0);
	clrscr();
	drawSierpinski(1,1,1,80,24); // try different sizes!
	return 0;
}
