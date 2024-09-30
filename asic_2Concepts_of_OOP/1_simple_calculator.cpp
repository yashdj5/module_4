#include<iostream>
using namespace std;

class cal
{
	int a;
	int b;	
	
		public:
				void  get_add()
			{
				cout<<"\n\n\t enter number one : " ;
				cin>>a;
				cout<<"\n\n\t enter number two : ";
				cin>>b;
		}
			void print_add()
		{	
			cout<<"\n\n\t number one is : "<<a;
			cout<<"\n\n\t number one is : "<<b;
		}
			void addi()
		{
			cout<<"\n\n\t addition= ; "<<a+b;	
		}
			void sub()
		{
			cout<<"\n\n\t addition= ; "<<a-b;	
		}
			void mut()
		{
			cout<<"\n\n\t addition= ; "<<a*b;	
		}
			void div()
		{
			cout<<"\n\n\t addition= ; "<<a/b;	
		}
};

main()
{	cal c;
	int ch;
	c.get_add();
	//c.print_add();
	cout<<"\n\n\t addion for : 1";
	cout<<"\n\n\t subtrison for : 2";
	cout<<"\n\n\t multiphication for : 3";
	cout<<"\n\n\t divison for : 4";
	cout<<"\n\n\t Exit for : 5";
	
	cout<<"\n\n\t enter your choice";
	cin>>ch;
	
	switch(ch)
	{
		case 1:c.addi();
			break;
		case 2:c.sub();
			break;
		case 3:c.mut();
			break;
		case 4:c.div();
			break;
		case 5:exit(0);
			break;
		default : printf("\n\n\t Invalid choice!!!");
				break;		
	}
	
	

}			
