#include <iostream>
#include <string.h> //这里是C语言用法所以用string.h 

using namespace std;

int main() {
	void smallest_string(char str[][30], int i);
	int i;
	char country_name[3][30];
	
	for (i = 0; i < 3; i++) cin >> country_name[i];
		
	smallest_string(country_name, 3);
	
	return 0;
}


void smallest_string(char str[][30], int n) {
	int i;
	char string[30];
	strcpy(string, str[0]);
	for (i = 0; i < n; i++) {
		if (strcmp(str[i], string) < 0) strcpy(string, str[i]);
	}
	cout << endl << "the smallest string is:" << string << endl;
	
	
}
