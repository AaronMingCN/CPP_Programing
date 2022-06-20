#include <iostream>
using namespace std;
void fun(int *p) {
	*p = 5 * (*p);
}

int main() {
	int a = 10;
	fun(&a);
	cout << a << " " << endl; 
	return 0;
}
