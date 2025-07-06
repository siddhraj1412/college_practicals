#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *left,*right;
    node(int n){
        data=n;
        left=right=nullptr;
    }
};

void inorder(node*root){
    if(root==nullptr)
        return; 
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(node*root){
    if(root==nullptr)
        return; 
    
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node*root){
    if(root==nullptr)
        return; 
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){
    struct node *root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    cout<<"inorder :-";
    inorder(root);
    cout<<"\npreorder :-";
    preorder(root);
    cout<<"\npostorder:-";
    postorder(root);
}