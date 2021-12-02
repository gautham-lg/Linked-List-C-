#include <iostream>
using namespace std;

struct Node{
	
	int value;
	char ele;
	Node* link;
	
};

void findByValue(Node *b, int val){
Node* ptr = b;

while(ptr->link != NULL){
	if(ptr->value == val){
	cout << "found at " << ptr->ele << endl;
	break;
	}
	ptr = ptr->link;
}
if(ptr->link == NULL && ptr->value == val){
cout << "found at " << ptr->ele << endl;	
}
	
}

int main(int argc, char** argv){


Node* head = NULL;

Node* a = new Node();
Node* b = new Node();
Node* c = new Node();
Node* d = new Node();
Node* e = new Node();
Node* f = new Node();
Node* g = new Node();
Node* h = new Node();

a->value = 10;
a->ele = 'a';
a->link = b;

b->value = 20;
b->ele = 'b';
b->link = c;

c->value = 30;
c->ele = 'c';
c->link = d;

d->value = 40;
d->ele = 'd';
d->link = e;

e->value = 50;
e->ele = 'e';
e->link = f;

f->value = 60;
f->ele = 'f';
f->link = g;

g->value = 70;
g-> ele = 'g';
g->link = h;

h->value = 80;
h-> ele = 'h';
h->link = NULL;

head = a;

findByValue(head,70);


return 0;
}

