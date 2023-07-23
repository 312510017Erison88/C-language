#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int answer;
	int guess=0;
	srand(time(NULL));
	answer = (rand()%100)+1;
	
	while(guess!=answer){
		printf("enter number: ");
		scanf("%d",&guess);
		
		if((answer-guess)>0)
			printf("too small\n");
		else if ((answer-guess)<0)
			printf("too large\n");
		else 
			printf("bingo\n");
	}
	
	
	return 0;
} 
