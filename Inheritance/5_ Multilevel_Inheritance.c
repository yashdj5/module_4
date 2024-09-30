#include<iostream>
//#include<string>
using namespace std;

class Students
{	protected :
		string rollnumber;
		
	public:
			void get_stud()
			{
				rollnumber="1001";	
			}		
};
class test : public Students
{	protected:
		int mark1,mark2;
	public:
		void get_marks()
		{	
			mark1="99";
			mark2="90";
		}	
};
class result : public test
{
	int total;
	
	public:
		void get_result()
		{
			total=mark1+mark2;
		}
		
	void print()
	{
		cout<<"\n\n\t studnet roll number is: "<<rollnumber;
		cout<<"\n\n\t subject mark1 is: "<<mark1;
		cout<<"\n\n\t subject mark2 is: "<<mark2;		
		cout<<"\n\n\t Total of subject : "<<total;
	}		
		
};
int main()
{
	result R;
	
	R.get_stud();	
	R.get_result();
	R.get_marks();
	
	R.print();
	
	return 0;
	
} 
