#include <iostream>

using namespace std;

template<typename T>
struct Node{
      T data;
      Node *next;
};
template<typename M>
class queue{
      Node<M> *rear,*front;
public:
      queue()
    { rear=NULL;front=NULL;}
   
void enqueue(M k){
      Node<M> *temp;
      temp=new Node<M>;
      temp->data=k;
      temp->next=NULL;
      if(rear==NULL){
            rear=temp;
            front=temp;
      }
      else {
            rear->next=temp;
            rear=temp; }
   }
void dequeue(){

	  if(front!=NULL) {
            Node<M> *temp=front;
            front=front->next;
            delete temp;
            if(front==NULL)
                  rear=NULL;
      }
      else
            cout<<"Queue is Empty.."; }

void display(){
      Node<M> *temp=front;
      while(temp->next!=NULL)
      {
            cout<<temp->data<<"->";
            temp=temp->next;
      }
       cout<<temp->data<<endl;}
};
int main(int argc, char** argv) {
	queue<int> A;
	A.enqueue(2);
	A.enqueue(5);
	A.enqueue(3);
	A.enqueue(1);
	A.display();
	A.dequeue();
	A.display();

	return 0;
}
