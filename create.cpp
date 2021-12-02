#include <iostream>

using namespace std;

int main(int argc, char** argv){
	
	struct Node{
		int data;
		Node* next;
	};

	Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
	
	head = new Node();
    second = new Node();
    third = new Node();
	
	head->data = 1;
	head->next = second;
	
	second->data = 2;
	second->next = third;
	
	third->data = 3;
	third->next = NULL;
	
	cout << head->data << " "<<second->data<< " " << third->data << endl;	
	
return 0;
}
