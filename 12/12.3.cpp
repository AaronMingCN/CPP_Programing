#include <iostream>
using namespace std;

class Point {
	public:
		Point(){
		}
		
		virtual ~Point() {
			cout << "excuting Point destructor" << endl;
		}
};

class Circle: public Point {
	public:
		Circle() {
		}
		
		~Circle() {
			cout << "excuting Circle destructor" << endl;
		}
		
	private:
		int radius;
};

int main() {
	Point *p = new Circle;
	delete p;
	return 0;
}



