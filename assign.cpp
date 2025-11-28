#include <iostream>
#include <cmath>
using namespace std;
class Palindrome{
	private:
		int x,y,rev;
	public:
		void getdata();
		void compute();
		void display();
};

void Palindrome::getdata(){
	cout<<"Please input an integer: \n";
	cin>>x;
	
}
void Palindrome::compute(){
	rev=0;
	y=x;
	while(y>0){	
		int z=y%10;
		rev=rev*10+z;
		y/=10;
	}
}

void Palindrome::display(){
	if(x==rev){
		cout<<"The number is "<<x <<" is a Palindrome.\n";
	}else{
		cout<<"The number is " <<x<< " not a Palindrome\n";
	}
}
class Armstrong{
		private:
		int x,y,rem,res;
		
		public:
		void getdata();
		void compute();
		void display();
};

void Armstrong::getdata(){
	cout<<"Enter your number: ";
	cin>>x;
	
	
}

void Armstrong::compute(){
y=x;
res=0;
while(y!=0){
	rem=y%10;
	res=res+(rem*rem*rem);
	y/=10;
};
}

void Armstrong::display(){
	if(res==x){
		cout<<"The number is "<<x <<" an armstrong number.";
	}else{
			cout<<"The number is not "<<x <<" an armstrong number.";
	}
}
class Strong{
		private:
		int x;
	public:
		void getdata();
		void compute();
		void display();
};

int main(){
	int option;
	cout<<"The program provides the following options for checking number properties. Please choose one option from the menu:\n";
	cout<<"1. Check Palindrome Number\n";
	cout<<"2.Check Armstrong Number\n";
	cout<<"3.Check Strong Number\n";
	cin>>option;
	
	switch(option){
		case 1:
			Palindrome pal;
			pal.getdata();
			pal.compute();
			pal.display();
			
		break;
		case 2:
			Armstrong arm;
			arm.getdata();
			arm.compute();
			arm.display();
		break;
	}
	

	return 0;
}
