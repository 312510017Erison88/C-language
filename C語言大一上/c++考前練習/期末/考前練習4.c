#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int salenum,salary;
	int bonus;
	int bossbonus;
	printf("please enter the sale number:");
	scanf("%d",&salenum);
	if(salenum>20)
		bonus=420;
	else
		bonus=380;
	if(salenum>40)
		bossbonus=(salenum-40)/10*1500;
	else
		bossbonus=0;
	salary=15000+salenum*bonus+bossbonus;
	
	printf("salary is %d\n",salary);
	
	system("pause");
	return 0;
}
