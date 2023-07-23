#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	float height;
	float nextgrow;
	printf("Enter initial height: ");
	scanf("%f",&height);
	nextgrow=height;
	while(nextgrow>=1.0)
	{
		nextgrow/=2.0;
		height+=nextgrow;
	}
	printf("Final height=%f\n",height);
	system("pause");
	return 0;
}


