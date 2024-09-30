#include<iostream>
using namespace std;

class line
{	
	private:
		int x,y;
		
	public:
		void get()
		{
			cout<<"\n\n\t enter the value of X :";
			cin>>x;
			cout<<"\n\n\t enter the value of Y :";
			cin>>y;	
		}	
		
		inline int multi()
		{
			return x*y;
		}
		inline int cube()
		{
			return x*x*x;
		}
};
	
main()
{
	line L;
	L.get();
	
	int ans1=L.multi();
	int ans2=L.cube();
	
	cout<<"\n\n\t multiplication: "<<ans1;
	cout<<"\n\n\t cube: "<<ans2;
}	

