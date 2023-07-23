# include<iostream>
using namespace std;
int main()
{
	class Ploynomial{
		public:
			Polynomial();
			bool operator!();
			float Coef(int e);
			int LeadExp();
			Polynomial Add(Polynomial x);
			Polynomial Mult(Polynomial x);
			float Eval(float f);
	};	
} 
