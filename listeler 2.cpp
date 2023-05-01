#include <iostream>
using namespace std;
class Node{
	public:
		Node(const int& data, Node* next =NULL): data(data),next(next){
		}
		int data;
		Node* next;
};

class list{
	Node* root;
	public:
		list() : root(NULL){} // root(null) dersek listenin ilk elemanlarýný içini boþaltmýþ oluyoruz
		Node* begin()const {return root;	} // hangi adreste baþladýðýmýz
		Node* end()const{return NULL;	} //hangi adreste bittiðini takip etmiþ olduk 
		bool isEmpty()const {return root == NULL;	} //liste boþ mu sorgusu 
		//root == NULL yerine begin()==end() de yazýlabilir
}; 

int main(){
	list l;
	cout<<l.isEmpty(); // doðru mu liste dolu mu onun çýktýsýný alýyoruz
	return 0;
}
