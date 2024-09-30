#include<iostream>
using namespace std;

class Address 
{
    public:
        string houseNumber;
        string city;
        string state;
        string postalCode;

       
        Address(string hNum, string c, string s, string pCode) 
		{
            houseNumber = hNum;
            city = c;
            state = s;
            postalCode = pCode;
        }

        
        void displayAddress() {
            cout << "Address: " << houseNumber << ", " << city << ", " << state << " - " << postalCode << endl;
        }
};


class Student {
    private:
        string name;
        string className;
        int rollNumber;
        float marks;
        Address* address;  

    public:
        
        Student(string n, string c, int r, float m, Address* addr) {
            name = n;
            className = c;
            rollNumber = r;
            marks = m;
            address = addr;
        }

        
        char calculateGrade() {
            if (marks >= 90) return 'A';
            else if (marks >= 80) return 'B';
            else if (marks >= 70) return 'C';
            else if (marks >= 60) return 'D';
            else return 'F';
        }

        
        void displayStudentInfo() {
            cout << "\n\tName: " << name;
            cout << "\n\tClass: " << className;
            cout << "\n\ntRoll Number: " << rollNumber;
            cout << "\n\ntMarks: " << marks;
            cout << "\n\tGrade: " << calculateGrade();
            
            address->displayAddress();
        }
};

int main() {
    
    Address addr("123", "Ahmedabad", "AMD", "10001");

    
    Student student("gujju jigo", "10th Grade", 101, 85.5, &addr);

    
    student.displayStudentInfo();

    return 0;
}

