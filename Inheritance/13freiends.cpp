#include<iostream>
using namespace std;

class Compare {
    int num1, num2;

    public:
       
        Compare(int a, int b) {
            num1 = a;
            num2 = b;
        }
   
	    friend int findMax(Compare c);
};

int findMax(Compare c) 
    {
	if(c.num1 > c.num2)
        return c.num1;
    else
        return c.num2;
}

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    Compare comp(a, b);

    int maxNum = findMax(comp);

    cout << "The maximum number is: " << maxNum << endl;

    return 0;
}

