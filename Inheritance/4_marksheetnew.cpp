#include<iostream>
using namespace std;

class detail {
	private:
		string sname;
		int id;
	public:	
		void get_name() {
			cout << "\n\n\t Enter the student name: ";
			cin >> sname;
			cout << "\n\n\t Enter student ID: ";
			cin >> id;
		}
		void put_name() {
			cout << "\n\n\t Student name: " << sname;
			cout << "\n\n\t Student ID: " << id;
		}
};

class mark {	
	private: 
		int mark1, mark2, mark3;
	
	public:
		int total;
		void get_m() {	
			cout << "\n\n\t Enter mark1: ";
			cin >> mark1;
			cout << "\n\n\t Enter mark2: ";
			cin >> mark2;
			cout << "\n\n\t Enter mark3: ";
			cin >> mark3;
		}
		void put_m() {
			cout << "\n\n\t Mark1: " << mark1;
			cout << "\n\n\t Mark2: " << mark2;
			cout << "\n\n\t Mark3: " << mark3;
			total = mark1 + mark2 + mark3;
			cout << "\n\n\t Total marks: " << total;
		}
};

class student : public detail, public mark {
	public:
		void get_pers() {
			float per = total / 3.0;  // To avoid integer division
			cout << "\n\n\t Percentage: " << per;

			if (per >= 70)
				cout << "\n\n\t Your grade is: A++";
			else if (per >= 60)
				cout << "\n\n\t Your grade is: A";
			else if (per >= 50)
				cout << "\n\n\t Your grade is: B";
			else if (per >= 40)
				cout << "\n\n\t Your grade is: C";
			else
				cout << "\n\n\t Your grade is: F";
		}
};

int main() {
	student S;
	S.get_name();
	S.get_m();
	S.put_name();
	S.put_m();
	S.get_pers();

	return 0;
}

