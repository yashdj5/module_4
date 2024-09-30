#include<iostream>
using namespace std;

class bank
{	private:
		int acc_number,balance,dep,with;
		public:
			bank()
			{
				acc_number=1234567890;
				cout<<"\n\n\t your bank Acoount number: "<<acc_number;			
			
				balance=50000;
				cout<<"\n\n\t your balance is : "<<balance;
			}
			void deposit()
			{	int dep;
				cout<<"\n\n\t your deposit is : ";
				cin>>dep;
				balance=balance+dep;
				cout<<"\n\n\t your balance is : "<<balance;	
			}	
			void withdraw()
			{
				cout<<"\n\n\t your withdraw is : ";
				cin>>with;
				balance=balance-with;
				cout<<"\n\n\t your balance is : "<<balance;
			}		
			
	
};
main()
{
	bank B;
	
	B.deposit();
	B.withdraw();
	
}
