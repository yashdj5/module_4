#include<iostream>
using namespace std;

class person
{	
	private:
		string name;
		int age;
	public:
	void get_per()	
	{
		cout<<"\n\n\t enter your name: ";
		cin>>name;
		cout<<"\n\n\t enter your age: ";
		cin>>age;
	}	
	void put_per()
	{
		cout<<"\n\n\t person name: ";
		cout<<"\n\n\t person age: ";
	}
	
};
class studnet
{
	private: 
		int per;
	public:
		void get_std()
		{
			cout<<"\n\n\t enter the studnet percentage : ";
			cin>>per;	
		}	
		void put_std()
		{
			cout<<"\n\n\t enter the studnet percentage : "<<per;
		}
};

class teacher : public person,public studnet
{
	int salary;
	public:
		void get_tech()
		{
			cout<<"\n\n\t enter the your salary: ";
			cin>>salary;
		}
		void put_tech()
		{
			cout<<"\n\n\t your salary is : "<<salary;
		}
};
 
main()
{
	teacher P;
	P.get_per();
	P.put_per();
	P.get_std();
	P.put_std();
	P.get_tech();
	P.put_std();
} 
