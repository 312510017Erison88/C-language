#include <iostream>
#include <cstdlib> /* �üƬ������ */
#include <ctime>   /* �ɶ�������� */
using namespace std;
int main()
{
	int r;
	int bucket=RAND_MAX/100;
//	cout<<""<<bucket;
	srand(time(NULL));/* �T�w�üƺؤl */
	r=rand()/bucket;/* ���Ͷü� */
	while(r>100)
	{
  		r=rand()/bucket;
	}
	cout<<"r="<<r<<endl;
	return 0;
}
	
