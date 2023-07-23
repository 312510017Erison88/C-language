#include <iostream>
using namespace std;

bool IsHamming(int num);

int main(){
	int number;
	while(cin>>number){
		if(IsHamming){
			cout << "Is Hamming!" << endl;
		}
			
		else{
			cout << "Not Hamming!"<< endl;
		}
		 
	}
	
	return 0;
} 

bool IsHamming(int num){
	if(num==1)
		return true;
	else if(num%2==0)
		return IsHamming(num/2);
	else if(num%3==0)
		return IsHamming(num/3);
	else if(num%5==0)
		return IsHamming(num/5);
	else
		return false;
}
