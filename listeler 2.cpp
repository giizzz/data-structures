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
		list() : root(NULL){} // root(null) dersek listenin ilk elemanlar�n� i�ini bo�altm�� oluyoruz
		Node* begin()const {return root;	} // hangi adreste ba�lad���m�z
		Node* end()const{return NULL;	} //hangi adreste bitti�ini takip etmi� olduk 
		bool isEmpty()const {return root == NULL;	} //liste bo� mu sorgusu 
		//root == NULL yerine begin()==end() de yaz�labilir
}; 

int main(){
	list l;
	cout<<l.isEmpty(); // do�ru mu liste dolu mu onun ��kt�s�n� al�yoruz
	return 0;
}
