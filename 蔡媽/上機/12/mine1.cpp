#include <iostream>
#include <vector>
using namespace std;


void walk(int x, int y, int shutx, int shuty);
int count = 0;

int main(){
	int final_x, final_y;
	cout << "The final position (x,y) is:" << endl;
	while(cin >> final_x >> final_y){
		walk(final_x, final_y, 0, 0);
		if(count){
			if(final_x==0&&final_y==0)
				cout << "0" << endl;
			else
				cout << count;
		}
		else
			cout<< "robot shut down!"<<endl;
		count = 0;
	}
	
	return 0;
}

void walk(int x, int y, int shutx, int shuty){
	if(x>0 && shutx<3 && shuty<3)
		walk(x-1, y, shutx+1, 0);
	if(y>0 && shutx<3 && shuty<3)
		walk(x, y-1, 0, shuty+1);
	if(x==0 && y==0 && shutx<3 && shuty<3)
		count++;
}


