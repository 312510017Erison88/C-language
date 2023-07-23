#include <iostream>
#include <cstdlib> /* 亂數相關函數 */
#include <ctime>   /* 時間相關函數 */
using namespace std;
int main()
{
	int r;
	int bucket=RAND_MAX/100;
//	cout<<""<<bucket;
	srand(time(NULL));/* 固定亂數種子 */
	r=rand()/bucket;/* 產生亂數 */
	while(r>100)
	{
  		r=rand()/bucket;
	}
	cout<<"r="<<r<<endl;
	return 0;
}
	
