#include<iostream>
using namespace std;
 
 typedef struct node{
 	int data;
 	node* l, *r;
	 	node(int val){
 		data = val;
 		l = NULL;
 		r= NULL;
 		}
 };
 
 void preorder(node *root){
 			if(root==NULL) {	return;		}
			cout<<root->data<<" ";
 			preorder(root->l);
 			preorder(root->r);
		 }

void inorder(node *root)
{
	if(root==NULL) {	return;		}
		
 			inorder(root->l);
 			cout<<root->data<<" ";
 			inorder(root->r);
 			
}
void postorder(node *root){
	if(root==NULL){ 
	return;
	}
	postorder(root->l);
	postorder(root->r);
	cout<<root->data<< " ";
}

 int main(){
 	node* root = new node(1);
 	root->l= new node(2);
 	root->r=new node(3);
 	root->l->l=new node(4);
 	root->l->r=new node(5);
 	root->r->l=new node(6);
 	root->r->r=new node(7);
 	cout<<"\n Preorder:\t";
 	preorder(root);
 	cout<<"\n Inorder:\t";
 	inorder(root);
 	cout<<"\n Postorder:\t";
 	postorder(root);
 	
 	return 0;
 }

			//   	 1
			//    /	    \
			//   2       3
			//  / \     / \
			// 4   5   6   7
