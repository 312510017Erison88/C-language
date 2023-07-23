#include<stdio.h> 
#include<math.h>
int main(void)
{
	double amount;
	double principal=1000.0;//本金 
	double rate= 0.05;
	unsigned int year;
	
	printf("%4s%21s\n","Year",";Amount on deposite");
	for(year=1;year<=10;++year)//(初始值，條件，增加量) 
	{
	amount=principal*pow(1.0+rate,year);//pow為指數 (要有<math.h>含字庫) 
	printf("%4u%21.2f\n",year,amount);
	}	
		
}
