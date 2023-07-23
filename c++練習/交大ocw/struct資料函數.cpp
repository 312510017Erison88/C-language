#include <iostream>
using namespace std;
struct date
{
	int month;
	int day;
	int year;
};

struct person 
{
    char name[5];
    unsigned age;
};
person p ={"Mary",37};  

int main()
{
	date duedate={12,31,2020};
	cout<<duedate.month<<"\t";
	cout<<duedate.day<<"\t";
	cout<<duedate.year<<"\t";
/////////////////////////////////////

    cout<<endl<<""<<p.age<<endl;
    cout<<""<<p.name;
    
    return 0;
}
