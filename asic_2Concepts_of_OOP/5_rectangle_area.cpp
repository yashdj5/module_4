#include<iostream>

using namespace std;

class rectang
{
		
	int rec_len;
	int rec_wid;
	
	public:
		void get_inarea()
		{	cout<<"\n\n\t enter length: ";
			cin>>rec_len;
			
			cout<<"\n\n\t enter width : ";
			cin>>rec_wid;
				

}		
		void get_totalarea()
		{
			cout<<"\n\n\t total area calulate :  "<<rec_len*rec_wid;
		}	
		void get_rectanglearea()
		{
			cout<<"\n\n\t total rectangle area "<<2*(rec_len+rec_wid);
		}
};
main()
{
	
	rectang	n;

	n.get_inarea();
	n.get_totalarea();
	n.get_rectanglearea();
	
		
}		
