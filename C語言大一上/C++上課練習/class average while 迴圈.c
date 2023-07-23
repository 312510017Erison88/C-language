#include<stdio.h>
int main (void)
{	
	unsigned int counter;
	float grade;
	float total;
	float average;
	
	
	total=0;
	counter=1;
	
	while(counter<=10){
		printf("%s","Enter grade:");
		scanf("%f",&grade);
		total=total+grade;
		counter=counter+1;}
	
	average=total/10;
	printf("Class average is %f\n", average );	
	
	}
	
