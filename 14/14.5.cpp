#include <iostream>
#include "header1.h"
#include "header2.h"

using namespace std;

int main() {
	ns1::Student stud1(101, "Wang", 18);
	stud1.get_data();
	cout << ns1::fun(5, 3) << endl;

	ns2::Student stud2(102, "Li", 'f');
	stud2.get_data();
	cout << ns2::fun(5, 3) << endl;
	
	return 0;
}
