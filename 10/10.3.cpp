#include <iostream>
using namespace std;

class Complex {
	public:
		Complex() {
			real = 0;
			imag = 0;
		}
		
		Complex(double r, double i) {
			real = r;
			imag = i;
		}
		
		friend Complex operator + (Complex &c1, Complex &c2);
		void display();
	private:
		double real;
		double imag;	
	
};

Complex operator + (Complex &c1, Complex &c2) {
	Complex c;
	return Complex((c1.real + c2.real), (c2.imag + c2.imag));
}

void Complex::display() {
	cout << "(" << real << "," << imag << "i)" << endl;
}


int main() {
	Complex c1(3,4), c2(5,-10), c3;
	c3 = c1 + c2;
	cout << "c1="; c1.display();
	cout << "c2="; c2.display();
	cout << "c1+c2="; c3.display();
	return 0;
}



