#include <iostream>
using namespace std;

int main() {
	int max_4(int a, int b, int c, int d);
	int a, b, c, d, max;
	printf("Please enter 4 integer numbers:");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	max = max_4(a, b, c, d);
	printf("max=%d \n",max);
	
	
	return 0;
}

int max_4(int a, int b, int c, int d) {
	int max(int, int);
	int m;
	m = max(a, b);
	m = max(m, c);
	m = max(m, d);
	return(m);
}

int max(int x, int y) {
	if (x > y) return x;
	else return y;
}


