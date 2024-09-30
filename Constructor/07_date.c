#include<iostream>
using namespace std;

class date
{
	private:
		int day;
		int month;
		int year;
	public:
		void get_data()
		{
			cout<<"\n\n\t enter the day between 1 to 31: ";
			cin>>day;						
			cout<<"\n\n\t enter the month between 1 to 12: ";
			cin>>month;
			cout<<"\n\n\t enter the year between 1900 to 2100:  ";
			cin>>year;
			
		}	
		void validate()
		{
			if(year<=1900 || year>=2100)
				cout<<"\n\n\t year is not valid !!!. it should be within 1900 to 2100 ";
			if(month<=1 || month >=12)
				cout<<"\n\n\t month is not valid !!!.it should be within 1 to 12 "	;
			if(day<=1 || day>=31 )
				cout<<"\n\n\t day is not valid !!!.it should be within 1 to 31 "	;
		}
		void print()
		{
			cout"\n\n\t Todays Date : "<<day;
			cout"\n\n\t Current Month : "<<month;
			cout"\n\n\t Current Year : "<<year;
			current date is<<day<<month<<year; 
		}


};
main()
{
	date D;
	D.get_data();
	D.validate();
	D.print();
}
