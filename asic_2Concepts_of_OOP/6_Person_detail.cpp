#include<iostream>

using namespace std;

class data
{	string pname;
	string cname;
	int age;
	
	public:
			void get_detail()
			{	
				cout<<"\n\n\t enter the name of person:  ";
				cin>>pname;
				cout<<"\n\n\t enter your cuntry name: ";
				cin>>cname;
				cout<<"\n\n\t enter your age: ";
				cin>>age;
						
			}	
			void print_detail()
			{
				cout<<"\n\n\t person name is: "<<pname;
				cout<<"\n\n\t country name is : "<<cname;
				cout<<"\n\n\t your age is : "<<age;
				
			}
	
};

main()
{
	data obj;
	obj.get_detail();
	obj.print_detail();
}
