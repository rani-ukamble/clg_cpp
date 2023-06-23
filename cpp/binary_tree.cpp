//Binary tree

#include <bits/stdc++.h>
using namespace std;

class node{
public:
int data;
node* left;
node* right;

node(int d){
	this->data=d;
	this->left=NULL;
	this->right=NULL;
}	
}; 

node* builtTree(node* root){
cout<<"Enter data "<<endl;
int data;
cin>>data;
root= new node(data);
if(data==-1)
	return NULL;

cout<<"Enter data for inserting in left of "<<data<<endl;
root->left =builtTree(root->left);
cout<<"Enter data for inserting in right of "<<data<<endl;
root->right=builtTree(root->right);

return root;
}

void levelOrder(node* root){
	queue<node*>q;
	q.push(root);
	q.push(NULL);
	
	while(!q.empty()){
		node* temp= q.front();
		q.pop();
		
		if(temp==NULL){
			cout<<endl;
			if(!q.empty())
			q.push(NULL);
		}
		else{
		cout<<temp->data<<" ";
		if(temp->left)
		q.push(temp->left);
		if(temp->right)
		q.push(temp->right);
		}
		
	}
	
}

void preOrder(node* root){
	//base case
	if(root==NULL)
	return;
	
	cout<<root->data<<" ";
	preOrder(root->left);	
	preOrder(root->right);
}

void postOrder(node* root){
	//base case
	if(root==NULL)
	return;
	
	postOrder(root->left);	
	postOrder(root->right);
	cout<<root->data<<" ";
}

void inOrder(node* root){
	//base case
	if(root==NULL)
	return;
	
	inOrder(root->left);
	cout<<root->data<<" ";	
	inOrder(root->right);
}

void buildFromLevelOrder(node* &root){
	queue<node*>q;
	cout<<"Enter data for root "<<endl;
	int data;
	cin>>data;
	root=new node(data);
	q.push(root);
	
	while(!q.empty()){
		node* temp=q.front();
		q.pop();
		
		cout<<"Enter left node for "<<temp->data<<endl;
		int leftData;
		cin>>leftData;
		
		if(leftData!=-1){
			temp->left=new node(leftData);
			q.push(temp->left);
		}
		
		cout<<"Enter right node for "<<temp->data<<endl;
		int rightData;
		cin>>rightData;
		
		if(rightData!=-1){
			temp->right=new node(rightData);
			q.push(temp->right);
		}
	}
}
int main() {
	node* root=NULL;
	//CREATING NODE
	buildFromLevelOrder(root);
	//1 3 5 7 11 17 -1 -1 -1 -1 -1 -1
	levelOrder(root);
/*	root=builtTree(root);
	cout<<endl<<"Level order traversal\n";
	levelOrder(root);
	cout<<endl<<"Pre order traversal\n";
	preOrder(root);
	cout<<endl<<"Post order traversal\n";
	postOrder(root);
	cout<<"Inorder traversal\n";
	inOrder(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    */
    return 0;
}

