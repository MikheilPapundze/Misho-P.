#include <iostream>
#include <string.h>

using namespace std;

template<typename T>
struct node{
    T data; 
    node *next;
};
template <typename M>
class list{
    private:
    	node<M> *head, *tail;
    public:
    	list(){
			head=NULL;
			tail=NULL;
		}
		void AddKey(M k)
		{
			node<M> *Elem=new node<M>();
			Elem->data=k;
			if (head==0) {head=Elem;tail=Elem;return;}
			if (head->data>Elem->data)
			{
				Elem->next=head;
				head=Elem;
				return;
			}
			if (tail->data<Elem->data)
			{
				tail->next=Elem;
				tail=Elem;
				return;
			}
			node<M> *y=0, *x=head;
			while (Elem->data>x->data)
			{
				y=x;
				x=x->next;
			}
			Elem->next=x;
			y->next=Elem;
		}
		
		void display(){
			node<M> *temp=new node<M>;
			temp=head;
			while(temp!=NULL){
				cout<<temp->data<<" ";
				temp=temp->next;
			}
		}
	
		void delete_first(){
			node<M> *temp=new node<M>;
			temp=head;
			head=head->next;
			delete temp;
		}
		void delete_last(){
			node<M> *current=new node<M>;
			node<M> *previous=new node<M>;
			current=head;
			while(current->next!=NULL){
				previous=current;
				current=current->next;	
			}
			tail=previous;
			previous->next=NULL;
			delete current;
		}
		void delete_position(int pos){
			if(pos==1){
				delete_first();
			}
			node<M> *current=new node<M>;
			node<M> *previous=new node<M>;
			current=head;
			for(int i=1;i<pos;i++){
				previous=current;
				current=current->next;
			}
			previous->next=current->next;
		}
		M display_postion(int pos ){
        	node<M> *current=new node<M>;
			node<M> *previous=new node<M>;
			current=head;
			for(int i=1;i<pos;i++){
				previous=current;
				current=current->next;
		}
		return current->data;
        }
};
  
int main(int argc, char** argv) {
	list<string> obj;
	obj.AddKey("Khalvashi");
	obj.AddKey("Devadze");
	obj.AddKey("Lomadze");
	obj.AddKey("Papunidze");
	obj.display();
	cout<<endl;
	obj.delete_position(1);
	obj.display();
	cout<<endl;
	obj.delete_first();
	obj.display();
	cout<<endl;
	obj.AddKey("Meskhidze");
	obj.display();
	

	return 0;
}
