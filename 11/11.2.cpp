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


class Student1: private Student {
	public:
		void get_value_1() {
			get_value();
			cin >> age >> addr;
		}
		
		void display_1() {
			//cout << "num:" << num << endl;   //private
			//cout << "name:" << name << endl; //private
			//cout << "sex:" << sex << endl;   //private
			display();
			cout << "age:" << age << endl;
			cout << "address:" << addr << endl;
		}
		
	private:
		int age;
		string addr;
		
};

int main() {
	Student1 stud;
	//stud.get_value(); // base class private inherited
	stud.get_value_1();
	//stud.display();  //private 
	stud.display_1();
	//stud1.age = 18;  //private
	return 0; 
}




