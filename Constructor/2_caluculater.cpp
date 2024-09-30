#include<iostream>
using namespace std;

class calculator

{	
	private:
		int num1,num2;
	public:	
		calculator (float a,float b)
	{	num1=a;
		num2=b;
	}
	
	void add()
	{
		cout<<"\n\n\t Addition : "<<num1+num2;	
	}		
	void sub()
	{
		cout<<"\n\n\t Subtraction : "<<num1-num2;	
	}
	void mult()
	{
		cout<<"\n\n\t Multiplication : "<<num1*num2;
	}	
	void div()
	{
		cout<<"\n\n\t Division : "<<num1/num2;
	}
	
	
};
main()
{
	float a,b;
	cout<<"\n\n\t enter 1st number: ";
	cin>>a;
	cout<<"\n\n\t enter 2nt number: ";
	cin>>b;
	
	calculator C(a,b);
	
	C.add();
	C.sub();
	C.mult();
	C.div();
	
	
	
}



