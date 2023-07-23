#include<stdio.h>
#include<stdlib.h>
int gcd(int ,int);

void show(int espresso, int milk, int chocolate, int froth);
void add(int *espresso, int *milk, int *chocolate,int *froth, int supply_espresso, int supply_milk,int supply_chocolate, int supply_froth);
bool make(int *espresso, int *milk, int *chocolate,int *froth, int r0 ,int r1 ,int r2 ,int r3 ,int *output);

int main(void)
{
	show(0,0,0,0);
	return 0;	
}

void show(int espresso, int milk, int chocolate, int froth)
{
	int choose,con='y';
	
	while(con=='y')
	{
		system("cls");
		printf("espresso : %d\n",espresso);
		printf("milk : %d\n",milk);
		printf("chocolate : %d\n",chocolate);
		printf("froth : %d\n",froth);
		printf("1. Add ingredient\n");
		printf("2. Make coffee\n");
		scanf("%d",&choose);
		if(choose==1)
		{	
			int se,sm,sc,sf;
			printf("Input increased volume (in order of espresso , milk , chocolate , froth )\n");
			scanf("%d%d%d%d",&se,&sm,&sc,&sf);
			add(&espresso,&milk,&chocolate,&froth,se,sm,sc,sf);
		}
		else if(choose==2)
		{
			int i,coffee=0;
			printf("1. latte\n");
			printf("2. cappuccino\n");
			printf("3. mocha\n");
			printf("4. User define\n");
			scanf("%d",&i);
			switch(i)
			{
				case 1:
				{
					make(&espresso,&milk,&chocolate,&froth,3,3,0,4,&coffee)?printf("Congratulations ! You make %d ml latte\n",coffee):printf("Ingredients ar not enough\n");
					break;
				}	
				case 2:
				{
					make(&espresso,&milk,&chocolate,&froth,7,3,0,5,&coffee)?printf("Congratulations ! You make %d ml cappuccino\n",coffee):printf("Ingredients ar not enough\n");
					break;
				}	
				case 3:
				{
					make(&espresso,&milk,&chocolate,&froth,3,1,1,0,&coffee)?printf("Congratulations ! You make %d ml mocha\n",coffee):printf("Ingredients ar not enough\n");
					break;
				}	
				case 4:
				{
					int ro0,ro1,ro2,ro3;
					printf("Input ratio (in order of espresso , milk , chocolate , froth )\n");
					scanf("%d%d%d%d",&ro0,&ro1,&ro2,&ro3);
					make(&espresso,&milk,&chocolate,&froth,ro0,ro1,ro2,ro3,&coffee)?printf("Congratulations ! You make %d ml user defined coffee\n",coffee):printf("Ingredients ar not enough\n");
					break;
				}
			}
		}
		printf("Continue?(y/n) ");
		scanf(" %c",&con);
	}
	
	
}

void add(int *espresso, int *milk, int *chocolate,int *froth, int supply_espresso, int supply_milk,int supply_chocolate, int supply_froth)
{
	*espresso+=supply_espresso;
	*milk+=supply_milk;
	*chocolate+=supply_chocolate;
	*froth+=supply_froth;
}

bool make(int *espresso, int *milk, int *chocolate,int *froth, int r0 ,int r1 ,int r2 ,int r3 ,int *output)
{
	int gcd_of_r=gcd(gcd(gcd(r0,r1),r2),r3);
	r0/=gcd_of_r;
	r1/=gcd_of_r;
	r2/=gcd_of_r;
	r3/=gcd_of_r;
	
	bool f=0;
	*output=0;
	
	while((*espresso>=r0)&&(*milk>=r1)&&(*chocolate>=r2)&&(*froth>=r3))
	{
		f=1;
		*espresso-=r0;
		*milk-=r1;
		*chocolate-=r2;
		*froth-=r3;
		*output+=r0+r1+r2+r3;
	}
	return f;
}
int gcd(int a,int b)
{
	if(b==0)
		return a;
	return gcd(b,a%b);
}
