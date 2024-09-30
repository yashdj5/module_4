#include<iostream>
using namespace std;


template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int int1 = 10, int2 = 20;
    float float1 = 1.5, float2 = 2.5;

    cout << "\n\n\tBefore swapping (int): " << int1 << " " << int2 ;
    cout << "\n\n\tBefore swapping (float): " << float1 << " " << float2;

	  swapValues(int1, int2);

    
    swapValues(float1, float2);

    
    cout << "\n\n\tAfter swapping (int): " << int1 << " " << int2;
    cout << "\n\n\tAfter swapping (float): " << float1 << " " << float2;

    return 0;
}

