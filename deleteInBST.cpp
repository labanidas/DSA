#include<bits/stdc++.h>
using namespace std;

typedef struct node{
    int data;
    node * l;
    node * r;
    node(int val){
        data=val;
        l=NULL;
        r=NULL;
    }
};

node* inSuc(node *root){
    node * cur = root;
    while(cur && cur->l != NULL) cur =  cur->l;
    return cur;
}

node* deleteInBST(node* root, int key){

    if(key < root->data) 
    root->l = deleteInBST(root->l, key);

    else if(key > root->data) 
    root->r = deleteInBST(root->r, key);

    else{
        if(root->l == NULL){
            node* temp = root->r;
            free(root);
            return temp;

        }

        if(root->r == NULL){
            node* temp = root->l;
            free(root);
            return temp;

        }
        node* iSuc = inSuc(root->r);
        root->data = iSuc ->data;
        root->r = deleteInBST(root->r, iSuc-> data);
    }

    return root;
}

void inorder(node* root){
    if(root==NULL) return;

    inorder(root->l);
    cout<< root->data<<' ';
    inorder(root->r);
}

int main(){

        node* root = new node(4);
        root->l = new node(2);
        root->r=new node(5);
        root->l->l=new node(1);
        root->l->r=new node(3);
        root->r->r=new node(6);

        int key;
        cout<<"Enter key to be deleted:\t";
        cin>>key;

        cout<<"Before deletion:\t";
        inorder(root);
        root = deleteInBST(root, key);
        cout<<"\nAfter deletion:\t";
        inorder(root);

    //         4
    //       /   \
    //      2     5
    //     / \     \
    //    1   3     6


}
