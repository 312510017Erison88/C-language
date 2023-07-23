#include<stdio.h>
#include <conio2.h>
#include<stdlib.h>
#include<time.h>
#define MAXX 80
#define MAXY 25

void show (int x, int y, int dir, int len, int sx, int sy) 
{
	for (int i=0; i<len; i++)
	{
		switch (dir)
		{
			case 1:
			    gotoxy(x,(y+i-1)%MAXY+1);
				break;
		    case 2:
			    gotoxy(((x-i+MAXX-1)%MAXX+1),y);
				break;
			case 3:
			    gotoxy(x,(y-i+MAXY-1)%MAXY+1);
				break;
			case 4:
				gotoxy(((x+i-1)%MAXX+1),y);
				break;
		}
		if (i==0)
		{
			textcolor(YELLOW);
			textbackground(LIGHTRED);
			printf("A");
		}
		else
		{
			textbackground(LIGHTBLUE);
			printf(" ");
		}
	} 
	switch (dir)
	{
		case 1:
			gotoxy(x,y%MAXY+1);
			break;
		case 2:
			gotoxy(x%MAXX+1,y);
			break;
		case 3:
			gotoxy(x,y%MAXY+1);
			break;
		case 4:
			gotoxy(x%MAXX+1,y);
			break;
	}
	textattr((YELLOW<<4) + BLACK);
	gotoxy(sx, sy);
	printf("0"); 
}

void control(int *dir)
{
	char key;
	if (kbhit())
	{	
		key = getch();
		switch (key)
		{
			case 'w':
			    (*dir)=1;
				break;
		    case 'a':
			    (*dir)=4;
				break;
			case 's':
			    (*dir)=3;
				break;
			case 'd':
				(*dir)=2;
				break;
			case 'p':
				(*dir)=0;
				break;
		}
	}
} 

void move(int dir, int *x, int*y)
{
	switch (dir)
	{
		case 1:
		    if((*y)==1)
				(*y)=MAXY;			
			else
				(*y)--;
			break;
	    case 2:
		    if((*x)==MAXX)
		    	(*x)=1;
		    else
				(*x)++;
			break;
		case 3:
		    if((*y)==MAXY)
		    	(*y)=1;
		    else
				(*y)++;
			break;
		case 4:
			if((*x)==1)
				(*x)=MAXX;
			else
				(*x)--;
			break;
	}

}

void gen_stone(int *x, int*y, int *flag)
{ 
	if((*flag)==0)
	{
		(*x)=rand()%80;
		(*y)=rand()%25;
		(*flag)=1;
	}
} 

void eat(int x, int y, int *len, int sx, int sy, int *sflag)
{
	if((x==sx)&&(y==sy))
	{
		(*len)++;
		(*sflag)=0;
	}

} 
 
 


int main()
{
	int x=31, y=12, dir=1, len=1; // snake information
	int sx, sy, sflag=0; //stone position
	srand(time(NULL));
	
	while (dir)
	{
		textbackground(BLACK);
		clrscr();
		gen_stone(&sx, &sy, &sflag);
		control(&dir); move(dir, &x, &y);
		eat(x,y,&len,sx,sy,&sflag);
		show (x,y,dir,len,sx,sy);
		_sleep(100);
	}
	
	return 0;
} 
