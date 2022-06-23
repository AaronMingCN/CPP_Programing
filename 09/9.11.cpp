#include <iostream>
using namespace std;

class Student {
	public:
		Student(int n, int a, float s): num(n), age(a), score(s) {
		}
		void total();
		static float average();
	private:
		int num;
		int age;
		float score;
		static float sum;
		static int count;
};

void Student::total() {
	sum += score;
	count++;
}

float Student::average(){ 
	return (sum / count);
}

float Student::sum = 0;
int Student::count = 0;

int main() {
	Student stud[3] = {
		Student(1001, 18, 70),
		Student(1002, 19, 78),
		Student(1005, 20, 98)
	};
	int n;
	cout << "please input number of students:";
	cin >> n;
	for (int i = 0; i < n; i++) stud[i].total();
	cout << "the average score of " << n << " students is " << Student::average() << endl;
	
	return 0;
}






