#include<iostream>
#include<string.h>
using namespace std;

class String {
    char str[100]; 

    public:
       
        String() {
            str[0] = '\0';  g
        }

       
        String(const char* s) {
            strcpy(str, s);  
        }

        String operator+(String s) {
            String temp; 
            strcpy(temp.str, str);  
            strcat(temp.str, s.str);  
            return temp;  
        }


        void display() {
            cout << str;
        }
};

int main() {
    String str1("Hello, ");  
    String str2("World!");   

    String str3;  

    str3 = str1 + str2;  

    cout << "Concatenated String: ";
    str3.display();  

    return 0;
}

