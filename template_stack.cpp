#include <iostream>
template<typename T>
struct Node {
	T data;
	Node *next;
};
using namespace std;
template<typename M>
class Stack {
	private:
		Node<M> *Top;
	public:
		Stack(){
			Top=0;
		}
		void addkey (Node<M> *elem){
			elem->next=Top;
			Top=elem;
		}
		
		
		void Push(M k){
			
			Node<M> *tmp;
			tmp=new Node<M>();
			tmp->data=k;
			tmp->next=Top;
			Top=tmp;
		}
		
		void Pop(){
			
			if(Top!=0){
				Node<M> *tmp=Top;
				Top=Top->next;
				delete tmp;
			}
		}
		
		void print (){
			Node<M> *tmp=Top;
			if (tmp==0) cout<<"steki carielia";
			while (tmp->next!=0){
				cout<<tmp->data<<"-->";
				tmp=tmp->next;
			}
			cout<<tmp->data;
		}
};



int main(int argc, char** argv) {
	Stack<string> *A;
	A=new Stack<string>;
	 A->Push("c");
	 A->Push("G");
	 A->Push("B");
	 A->Push("E");
	 A->print();
	 cout<<endl;
	
	 A->Pop();
	 A->print();
	 cout<<endl;
	
	system("pause");
	return 0;
}
