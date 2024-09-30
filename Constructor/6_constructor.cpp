#include<iostream>
using namespace std;

class employee
{
	string e_name;
	int e_salary;
	int e_id;
		public:
			employee(string name,int salary,int id)
				{	e_name=name;
					e_salary=salary;
					e_id=id;
				}	
			print_detail()
				{	
					cout<<"\n\n\t employee Id: "<<e_name;
					cout<<"\n\n\t employee Name: "<<e_id;
					cout<<"\n\n\t employee salary: "<<e_salary;
				} 		
};
main()
{

string name;
int salary,id;

cout<<"\n\n\t enter your name: ";
cin>>name;
cout<<"\n\n\t enrer your salary: ";
cin>>salary;
cout<<"\n\n\t enter your employee id: ";
cin>>id;


employee E;

E.employee(name,salary,id)

employee E1;
	
	E1=E;
	
	E.print();
	E1.print();

}
