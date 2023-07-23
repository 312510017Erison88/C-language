#include <iostream>
using namespace std;
void sort(int *a, const int n);
int main(void)
{
	int array[7] ={1,2,6,7,4,3,2};
	sort(array,7);
	cout<<array[5];
}
void sort(int *a, const int n)
//sort the n integers a[0] to a[n-1] into nondecreasing order
{
	for(int i=0; i<n; i++)
	{
		int j = i;// find smallest integer in a[i] to a[n-1]
		for(int k=i+1; k<n ; k++)
			{
				if (a[k]<a[j])
				j = k;
			}
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
