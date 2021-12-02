#include <iostream>

using namespace std;

int main(int argc, char** argv){

//cout << "hello world";

struct Node{

	int data=7;
	char d;
	int *value;
	
};

struct Node k;
struct Node l;
cout << k.data <<endl;
k.value = &k.data;
cout << k.value <<endl;
cout << "----------" << endl;
l.data = 22;
cout << l.data <<endl;
l.value = k.value;
cout <<"L value = "<< l.value <<endl;
cout << "Data value" << *l.value ;

cout << "manipulate" <<endl;

*l.value = 2220;

cout << "New Data value" << *l.value<<endl ;
cout << "K Data value" << *k.value<<endl ;


return 0;
}
