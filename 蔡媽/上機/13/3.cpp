#include <stdio.h>
#include <conio.h>
#include <conio2.h>
#include <stdlib.h>
#include "Lab11_20181225_3_maze.h"

#define M 25
#define N 80

int Sy=1, Sx=1;   // Start Position
int Ey=23, Ex=78; // End Position 
int success=0;    // Flag for record if find the end position sucessfully 
int sp=0, ry[1000], rx[1000]; // Record Path Position 
void showmap(void);
void trace(int map[25][80],int x,int y);
 
int main(void)
{
	showmap();
	getch();
	
	trace(MAP,Sx,Sy);
	if (success == 0)
		printf("No Path!!!\n");
	
	getch();
	return 0;
} 

void showmap(void)
{
	for(int i=0;i<M;i++)
	{
		for(int j=0;j<N;j++)
		{
			if(MAP[i][j]==2)
				textbackground(WHITE);
			if(MAP[i][j]==0)
				textbackground(BLACK);
			printf(" ");
		}
		printf("\n");
	}
} 
 
 
// Complete this function 
void trace(int map[25][80],int x,int y)
{
	map[y][x]=1;  // mark as traced path   
	ry[sp]=y;
	rx[sp]=x;
	sp++;   // Store tracing Path

	//if reaching the End position,
	//show tracing path in rx and ry, and let success flag be 1 
	if (y==Ey && x==Ex)
	{
		for (int k=0; k<sp; k++)
		{
			gotoxy(rx[k]+1,ry[k]+1);
			textbackground(LIGHTRED);
			
			if (ry[k]==Sy && rx[k]==Sx)
			{
				textbackground(LIGHTBLUE);
				printf("S");
				continue;
			}
			if (ry[k]==Ey && rx[k]==Ex)
			{
				textbackground(LIGHTGREEN);
				printf("E");
				continue;
			} 
			printf(" ");
			_sleep(150);
		} 
		success = 1;
	}  
	else 
	{
		if(MAP[y][x+1]==0)
			trace(map,x+1,y);
		if(MAP[y][x-1]==0)
			trace(map,x-1,y);
		if(MAP[y+1][x]==0)
			trace(map,x,y+1);
		if(MAP[y-1][x]==0)
			trace(map,x,y-1);
	}
		
 
	sp--;
	map[y][x]=0;
}
