#include <iostream>
using namespace std;

struct Node{
	int value;
	string ele;
	Node* link;
};

int countlist(Node* head, int pos){
	int count = 0;
	int at;
	at = pos;
	Node* temp = head;
	if(pos > 0){
	while(temp->link != NULL){
		
	}		
	} else{
	while(temp->link != NULL){
	count = count + 1;
	temp = temp->link;	
	}	
	}
return count+1;
}

int main(int argc, char** argv){
int result;
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

e->value = 50;
e->ele = 'e';
e->link = f;

f->value = 60;
f->ele = 'f';
f->link = g;

g->value = 40;
g->ele = 'g';
g->link = NULL;

head = a;
result = countlist(head, 0);
cout << "Length of list " << result;


return 0;
}

