#include<iostream>
#include<queue>
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;
    node(int n){
        this->data=n;
        this->left=NULL;
        this->right=NULL;
    }
};
node* create(node* root,int n){
    if(root==nullptr)
        return new node(n);
    if(root->data==n)
        return root;
    if(n<root->data){
        root->left=create(root->left,n);
    }
    else{
        root->right=create(root->right,n);
    }
    return root;
}
void iot(node *root){
    if(root!=nullptr){
        iot(root->left);
        cout<<root->data;
        iot(root->right);
    }
}
int main(){
    int n,k;
    cout<<"how many nodes your tree have?";
    cin>>n;
    cout<<"enter your first node";
    cin>>k;
    node *root=new node(k);
    n--;
    while(n>0){
        int m;
        cout<<"enter your node data";
        cin>>m;
        root=create(root,m);
        n--;
    }
    cout<<"in order traversal";
    iot(root);
}