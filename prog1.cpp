#include <iostream>
using namespace std;
// A function that adds numbers 
float addNumbers(int a, int b)
{
	return a + b;
}
	int main()
	{
		float x, y;
		cout << "Enter first number";
		cin >> x;
		cout <<"Enter second number";
		cin >>y;
		float sum = addNumbers (x, y);
		cout<<"the sum is:"<< sum << endl;
		return 0; //end of program		
	}

