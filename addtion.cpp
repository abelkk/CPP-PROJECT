#include <iostream>
#include <conio.h>
using namespace std;
class Subtraction
{
	private:
	float x,y,z;
	public:
		void getdata();
		void compute();
		void division();
		void display();
		
	
	
};
void Subtraction::getdata()
{
	cout <<"\n Enter the values of x,y\n";

	cin >>x>>y;
	
	
	
}
void Subtraction::compute()
{
	z=x-y;
}

void Subtraction::division(){
	z=z/3;
}

void Subtraction::display(){
	cout << "\n z=" << z << endl;
}

int main(){
	Subtraction sb;
	sb.getdata();
	sb.compute();
	sb.division();
	sb.display();
	return 0;
}
