#include <iostream>

using namespace std;

struct student {
	int num;
	float score;
	struct student *next;
};


int main() {
	student a, b, c, *head, *p;
	a.num = 31001; a.score = 89.5;
	b.num = 31003; b.score = 90;
	c.num = 31007; c.score = 85;
	
	head = &a;
	a.next = &b;
	b.next = &c;
	c.next = NULL;
	p = head;
		
	do {
		cout << p->num << " " << p->score << endl;
		p = p->next;	
	} while (p != NULL);
	
	return 0;
}

