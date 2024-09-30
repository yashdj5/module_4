#include<iostream>
using namespace std;

class Triangle
{
	private:
		float n1,n2,n3;
		
		
	public:
		void size()
		{
		cout<<"\n\n\t enter 1side size: ";
		cin>>n1;	
		cout<<"\n\n\t enter 2side size: ";
		cin>>n2;
		cout<<"\n\n\t enter 3side size: ";
		cin>>n3;
		}
		void print()
		{
		cout<<"\n\n\t 1side size: "<<n1;
		cout<<"\n\n\t 2side size: "<<n2;
		cout<<"\n\n\t 3side size: "<<n3;
		
		if(n1==n2 && n2==n3 && n3==n1 )
			cout<<"\n\n\t triangle is equilateral";
		else if(n1==n2 || n2==n3 || n3==n1)
			cout<<"\n\n\t triangle is isosceles";
		else
			cout<<"\n\n\t triangle is scalene";	
		}

};
main()
{
	Triangle T;
	T.size();
	T.print();
	
}
		

