#include <iostream>
using namespace std;
class Node{
	public:
		Node(const int& data, Node* next =NULL): data(data),next(next){
		}
		int data;
		Node* next;
};

int main(){
	Node* n1 = new Node(3);
	cout <<n1->data  <<endl;
	return 0;
}
