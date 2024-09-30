#include<iostream>
using namespace std;

class cricketer

{	private:
	
		string name;
		
	public:
		int match;
		void det_cricket()
		{
			cout<<"\n\n\t enter the betsman name: ";
			cin>>name;
			cout<<"\n\n\t enter your match: "; 
			cin>>match;	
		}
		void put_cricket()
		{
			cout<<"\n\n\t the betsman name is : "<<name;
			cout<<"\n\n\t your total match: "<<match;	
		}	
					
};


class batsman : public  cricketer
{	
	int run,best;
	float avg;
	
	public:	
		void get_best()
	{
			
		cout<<"\n\n\t enter your total run: ";
		cin>>run;
		cout<<"\n\n\t enter your best performance: ";
		cin>>best;
	}
		void put_best()
	{
		cout<<"\n\n\t your total run: "<<run;
		cout<<"\n\n\t your best performance is : "<<best;
		avg=(run/match);
		cout<<"\n\n\t your best performance: "<<avg;	
	}	
};

main()
{
	batsman B;
	
	B.det_cricket();
	B.get_best();
	B.put_best();
	B.put_cricket();
	
}
