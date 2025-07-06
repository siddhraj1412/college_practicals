//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *link;
}*head=NULL;

class stack{
    public:
    void push(int n){
        node *p=new node();
        if(p==NULL){
            cout<<"memory error";
            return;
        }
        else{
            p->data=n;
            p->link=head;
            head=p;
        }
    }
    int pop(){
        int m;
        struct node *s;
        if(head==NULL){
            cout<<"stack underflow";
            return -1;
        }
        else{
            m=head->data;
            s=head;
            head=head->link;
            free(s);
            return m;
        }
    }
   void display(){
        struct node *trav=head;
        cout << "stack elements: ";
        while(trav!=NULL){
            cout<<trav->data;
            trav=trav->link;
        }
   }
}s;
int main(){
    s.push(2);
    s.push(3);
    cout<<s.pop()<<endl;
    s.push(4);
    cout<<s.pop()<<endl;
    s.display();
}