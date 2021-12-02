#include <iostream>
using namespace std;

int main(int argc, char** argv){

struct Node{	
	int value;
	char ele;
	Node* link;	
};

Node* head = NULL;

Node* a = new Node();
Node* b = new Node();
Node* c = new Node();
Node* d = new Node();

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
d-> ele = 'd';
d->link = NULL;

head = a;

Node* temp = head;

while(temp->link != NULL){
	if(temp->value == 30){
		cout << "Found at " << temp->ele <<endl;
		temp = temp->link;
	}else{
		temp = temp->link;
	}
}

return 0;
}


