#include <stdio.h>
#include <stdlib.h>

int main()
{
float weight;
float height;
float bmi;

printf("input weight(kg)=");
scanf("%f",&weight);
printf("input height(m)=");
scanf("%f",&height);
bmi=weight/(height*height);
printf("%f\n",bmi);
if (bmi>=30)
	printf("Obese");
if ((bmi>=25)&&(bmi<=29.9))
	printf("Overweight");
if ((bmi>=18.5)&&(bmi<=24.9))
	printf("Normal");
if (bmi<=18.5)
	printf("Underweight");

system("PAUSE");
return 0;
}
