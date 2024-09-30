#include<iostream>
using namespace std;

class Base
{
    private:
        int privateVar;  

    protected:
        int protectedVar;  

    public:
        int publicVar;  

        
        Base() 
		{
            privateVar = 10;
            protectedVar = 20;
            publicVar = 30;
        }

        
        int getPrivateVar()
		{
            return privateVar;
        }
};


class Derived : public Base {
    public:
        
        void showAccess() {
            
            cout << "\n\n\tProtected Variable (from Base): " << protectedVar;
            cout << "\n\n\tPublic Variable (from Base): " << publicVar;
            
            cout << "\n\n\tPrivate Variable (from Base) using getter: " << getPrivateVar();
        }
};

int main()
{
    Derived obj;

    
    obj.showAccess();

   
    cout << "\n\n\tDirectly accessing public member: " << obj.publicVar;

    
    return 0;
}

