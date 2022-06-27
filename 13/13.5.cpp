#include <iostream>
#include <string>
using namespace std;

int main() {
	char c;
	while(!cin.eof()) {
		if ((c = cin.get()) != '\0') cout.put(c);
	}
	
	return 0;
}
