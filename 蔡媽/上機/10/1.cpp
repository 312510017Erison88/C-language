#include<stdio.h>

void mul(int *a11,int *a12,int *a21,int *a22,int w11,int w12,int w21,int w22);

int main(void)
{
	int n;
	while(scanf(" %d",&n))
	{
		int a11=1,a12=1,a21=1,a22=0;
		for(int i=0;i<n;i++)
		{
			printf("%d ",a12);
			mul(&a11,&a12,&a21,&a22,1,1,1,0);
		}
		printf("%d\n",a12);
	}
	return 0;
}

void mul(int *a11, int *a12, int *a21, int *a22, int w11, int w12, int w21, int w22)
{
	int t1=(*a11),t2=(*a12),t3=(*a21),t4=(*a22);
	*a11 = t1*w11+t2*w21;
	*a12 = t1*w12+t2*w22;
	*a21 = t3*w11+t4*w21;
	*a22 = t3*w12+t4*w22;
}

/*
void mul(int *a11,int *a12,int *a21,int *a22,int w11,int w12,int w21,int w22)
{
	int t1=(*a11),t2=(*a12),t3=(*a21),t4=(*a22);
	*a11=t1*w11+t2*w21;
	*a12=t1*w12+t2*w22;
	*a21=t3*w11+t4*w21;
	*a22=t3*w12+t4*w22;
	
}
*/
