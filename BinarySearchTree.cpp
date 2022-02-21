#include<bits/stdc++.h>
using namespace std;

typedef struct node{
    int data;
    node* l;
    node* r;
   
    node(int val){
        data=val;
        l=NULL;
        r=NULL;
    }
    
};

node* searchInBST(node* root, int key){

    if(root==NULL) return NULL;
    if(key==root->data) return root;
    if(key>root->data) return searchInBST(root->r, key);
    return searchInBST(root->l, key);
}

 int main(){
 	node* root = new node(3);
    root->l=new node(2);
    root->l->l=new node(1);
    root->r=new node(7);
    root->r->l=new node(5);
    root->r->r=new node(8);
    root->r->l->l=new node(4);
    root->r->l->r=new node(6);

     int key;
     cout<<"Enter key:\t";
    cin>>key;
    if(searchInBST(root, key)==NULL) 
    cout<<"Element not in tree\n";
    else cout<<"Element found\n";
     

 }

            //   	 3
			//    /	    \
			//   2       7
			//  /       / \
			// 1       5   8
            //        / \
            //       4   6 
