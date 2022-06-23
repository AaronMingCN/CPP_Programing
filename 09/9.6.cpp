#include <iostream>
using namespace std;

class Box {
	public:
		
		Box(int h, int w,int len):height(h), width(w), length(len) {
		}
		
		int volume();
	private:
		int height;
		int width;
		int length; 
};


int Box::volume() {
	return (height * width * length);
}

int main() {
	Box a[3] = {
		Box(10, 12, 15),
		Box(15, 18, 20),
		Box(16, 20, 26)
	};
	cout << "The volume of a[0] is " << a[0].volume() << endl;
	cout << "The volume of a[1] is " << a[1].volume() << endl;	
	cout << "The volume of a[2] is " << a[2].volume() << endl;	
	return 0;
}




