#include <iostream>
using namespace std;

class node{	
	public:
	int data;
	node* next;
};

class linked_list{
	node* start;
	
	
	public:linked_list(){
		start=NULL;
	}
	void insertatlast(int x){
		node* temp=new node;
		temp->data=x;
		temp->next=NULL;
		if(start==NULL)
			start=temp;
		else{
			node *curr=start;
			while(curr->next!=NULL)
				curr=curr->next;
			curr->next=temp;
		}
	}
	void deleteatlast(){
		node* curr=start;node* prev=NULL;
		if(curr->next==NULL){
		start=NULL;
		return;
		}
		while(curr->next!=NULL){
			prev=curr;
			curr=curr->next;
		}
		prev->next=NULL;
		delete curr;
		
	}
	void display(){
		if(start==NULL){cout<<"Empty";return;}
		node* temp=start;
		while(temp->next!=NULL){
			cout<<temp->data<<" ";
			temp=temp->next;
		}
		cout<<temp->data;
	}
};
int main() {
	linked_list l;
	l.insertatlast(5);
	l.insertatlast(1);
	l.insertatlast(7);
	l.display();
	cout<<endl;
	l.deleteatlast();
	l.display();
	
	
	return 0;
}