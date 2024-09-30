#include<iostream>
using namespace std;

class car
{
	private: 
		string company,model;
		int year;
		
	public:	
		void get_car()
		{
			cout<<"\n\n\t enter the car company name: ";
			cin>>company;
			cout<<"\n\n\t enter the car Model: ";
			cin>>model;
			cout<<"\n\n\t enter the year: ";
			cin>>year;
		} 	
		void put_car()
		{
			cout<<"\n\n\t enter the car company name: "<<company;
			cout<<"\n\n\t enter the car Model: "<<model;
			cout<<"\n\n\t enter the year: "<<year;
		} 
		
};
main()
{
	car C;
	C.get_car();
	C.put_car();
}
