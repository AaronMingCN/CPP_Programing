#include <iostream>
using namespace std;
int main() {
	char **p;
	char *name[] = {"BASIC","FORTRAN","C++","Pascal","COBOL"};
	p = name + 2;
	cout << *p << endl;
	cout << **p << endl;	
	return 0;
}
