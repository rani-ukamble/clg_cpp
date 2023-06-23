//Doubly linked list

#include <bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node* prev;
		Node* next;
		//constructor
		Node(int d){
			this->data=d;
			this->prev=NULL;
			this->next=NULL;
		}
};

void print(Node*  head){
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data;
		temp=temp->next;
	}
	cout<<endl;
}

int getlen(Node* head){
	int len=0;
		Node* temp=head;
	while(temp!=NULL){
		len++;
		temp=temp->next;
	}
	return len;
}
int main() {
	Node* node1=new Node(90);
	Node* head=node1;
	print(head);
	cout<<getlen(head)<<endl;
    cout << " ";
    return 0;
}

