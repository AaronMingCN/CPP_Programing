#include <iostream>
#include <string>

using namespace std; 

class Student {
	public:
		void get_value() {
			cin >> num >> name >> sex;
		}
		void display() {
			cout << "num:" << num << endl;
			cout << "name:" << name << endl;
			cout << "sex:" << sex << endl;
		}
		
	private:
		int num;
		string name;
		char sex;
}; 


class Student1: public Student {
	public:
		void get_value_1() {
			cin >> age >> addr;
		}
		
		void display_1() {
			//cout << "num:" << num << endl;   //private
			//cout << "name:" << name << endl; //private
			//cout << "sex:" << sex << endl;   //private
			cout << "age:" << age << endl;
			cout << "address:" << addr << endl;
		}
		
	private:
		int age;
		string addr;
		
};

int main() {
	Student1 stud;
	stud.get_value();
	stud.get_value_1();
	stud.display();
	stud.display_1();
	return 0; 
}




