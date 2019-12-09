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
  
    
	double fasi2 (string a, int m){
		if (a=="Bigmac") return m * 7.95;
		if (a=="Macchicken") return m * 6.8;
		if (a=="Macfish") return m * 8;
		if (a=="Cheeseburger") return m*5.2;
		if (a=="Doublecheeseburger") return m * 6.5;
		if (a=="minifries") return m*2.5;
		if (a=="mediumfries") return m*3.2;
		if (a=="hugefries") return m*5.35;
		if (a=="Bigtaste") return m*10.5;
		if (a=="fanta") return m*3.4;
		if (a=="coke") return m*3.5;
	}




int main(int argc, char** argv) {
	list<int> magida; //magidebi
    for (int i=1; i<11; i++){
    	magida.AddKey(i);
	}
	magida.display();
	cout<<endl;
	list<string> meals;
	meals.AddKey("Bigmac");
	meals.AddKey("Macchicken");
	meals.AddKey("Macfish");
	meals.AddKey("Cheeseburger");
	meals.AddKey("Doublecheeseburger");
	meals.AddKey("minifries");
	meals.AddKey("mediumfries");
	meals.AddKey("hugefries");
	meals.AddKey("Bigtaste");
	meals.AddKey("fanta");
	meals.AddKey("coke");
	meals.display();
	cout<<endl;
	cout<<endl;
	
	cout<<"magida #"<<magida.display_postion(1)<<":"<<endl; 
	cout<<meals.display_postion(3)<<"  "<<fasi2(meals.display_postion(3), 2)<<" lari"<<endl;
	cout<<meals.display_postion(1)<<"  "<<fasi2(meals.display_postion(1), 3)<<" lari"<<endl;
	cout<<meals.display_postion(2)<<"  "<<fasi2(meals.display_postion(2), 1)<<" lari"<<endl;
	cout<<"-------------------------------------------------------------------------------"<<endl;
	cout<<"angarishi "<<fasi2(meals.display_postion(3), 2)+fasi2(meals.display_postion(1), 3)+fasi2(meals.display_postion(2), 1)<<" lari"<<endl;
	
	cout<<"************************************************"<<endl;
	
	cout<<"magida #"<<magida.display_postion(2)<<":"<<endl; 
    cout<<meals.display_postion(4)<<"  "<<fasi2(meals.display_postion(4), 4)<<" lari"<<endl;
	cout<<meals.display_postion(6)<<"  "<<fasi2(meals.display_postion(6), 1)<<" lari"<<endl;
	cout<<meals.display_postion(7)<<"  "<<fasi2(meals.display_postion(7), 2)<<" lari"<<endl;
	cout<<"-------------------------------------------------------------------------------"<<endl;
	cout<<"angarishi "<<fasi2(meals.display_postion(4), 4)+fasi2(meals.display_postion(6), 1)+
	fasi2(meals.display_postion(7), 2)<<" lari"<<endl;

	

	return 0;
}
