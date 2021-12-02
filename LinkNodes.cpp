#include <iostream>
using namespace std;

int main(int argc, char** argv){

struct Node{
	
	int value;
	Node* link;
	
};

Node* head = NULL;

Node* a = new Node();
Node* b = new Node();
Node* c = new Node();

a->value = 20;
a->link = b;

b->value = 30;
b->link = c;

c->value = 40;
c->link = NULL;


head = a;


return 0;
}

