#include <stdio.h>
#include <stdlib.h>

int main()
{
float num; 
printf("sale= ");
scanf("%f",&num);

if (num>=2000)
	printf("off 20%, price = %f", num*.8);
else if  (num>=1000)
	printf("off 10%, price = %f", num*.9);
else
	printf("price = %f", num);

system("PAUSE");
return 0;
}
