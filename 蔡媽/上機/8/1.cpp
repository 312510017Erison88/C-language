#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <conio2.h>
#define N 500 

int score[N] ={	4,3,2,6,4,2,3,61,6,5,4,5,4,5,6,4,3,2,4,3,2,
				4,2,6,4,5,20,61,6,5,6,
				4,3,2,6,4,2,3,61,6,5,4,5,4,5,6,4,3,2,4,3,2,
				4,2,6,4,5,20,61,6,5,6,
				6,40,2,11,20,40,30,20,1,
				20,4,5,4,5,6,4,5,6,61,6,5,20,1,71,1,2,3,
				4,3,2,6,4,2,3,61,6,5,4,5,4,5,6,6,61,1,2,4,3,11,2, -1};            
 
int main() 
{
	int x,y;
	srand(time(NULL));
	for (int i=0; i<N; i++)
	{
		
		if (score[i] == -1)
			break;
		x=rand()%80+1;
		y=rand()%25+1;
		gotoxy(x,y);
		switch (score[i])
		{
			case 1:{
				textattr((BLACK << 4) + LIGHTGRAY);
				printf("Do ");
				Beep(262,500);	
				break;
			}
			case 2:{
				textattr((CYAN << 4) + YELLOW);
				printf("Re ");
				Beep(294,500);
				break;
			}	
			case 3:{
				textattr(( YELLOW<< 4) + CYAN);
				printf("Me ");
				Beep(330,500);
				break;
			}
			case 4:{
				textattr(( LIGHTGRAY<< 4) + BLACK);
				printf("Fa ");
				Beep(349,500);
				break;
			}
			case 5:{
				textattr((RED << 4) + LIGHTGREEN);
				printf("So ");
				Beep(392,500);
				break;
			}
			case 6:{
				textattr((LIGHTBLUE << 4) + BROWN);
				printf("La ");
				Beep(440,500);
				break;
			}
			case 61:{
				textattr((LIGHTGREEN << 4) + BLUE);
				printf("La# ");
				Beep(466,500);
				break;
			}
			case 20:{
				textattr((YELLOW << 4) + WHITE);
				printf("Re2 ");
				Beep(587,500);
				break;
			}
			case 40:{
				textattr((CYAN << 4) + LIGHTBLUE);
				printf("Fa2 ");
				Beep(698,500);
				break;
			}
			case 11:{
				textattr((LIGHTGRAY << 4) + LIGHTCYAN);
				printf("Do# ");
				Beep(277,500);
				break;
			}
			case 30:{
				textattr((BLACK << 4) + GREEN);
				printf("Me2 ");
				Beep(659,500);
				break;
			}
			case 71:{
				textattr((CYAN << 4) + YELLOW);
				printf("Si# ");
				Beep(494,500);
				break;
			}
			
		}

	}
return 0;
} 
