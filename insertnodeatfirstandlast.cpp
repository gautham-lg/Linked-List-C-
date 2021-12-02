#include <iostream>
using namespace std;

int main(int argc, char** argv){

struct Node{
	int value;
	string ele;
	Node* link;	
};

// creating nodes
Node* head = NULL;
Node* a = new Node();
Node* b = new Node();
Node* c = new Node();
Node* d = new Node();
Node* e = new Node();
Node* f = new Node();
Node* g = new Node();


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

e->value = 40;
e->ele = 'e';
e->link = f;

f->value = 40;
f->ele = 'f';
f->link = g;

g->value = 40;
g->ele = 'g';
g->link = NULL;

head = a;

//insert at beginning
Node* first = new Node();
first->link = head;
first->ele = "first";
head = first;

//insert at last
Node* last = new Node();
last->ele = "last";

Node* temp = head;
while(temp->link != NULL){
temp = temp->link;
}

if(temp->link == NULL){
	temp->link = last;
	last->link = NULL;
}

// traverse and print through the linkedlist
 temp = head;
while(true){
	if(temp->link == NULL){
	cout << temp->ele <<endl;	
	}else{
	cout << temp->ele <<endl;
			
	}
temp = temp->link;
}


return 0;
}

