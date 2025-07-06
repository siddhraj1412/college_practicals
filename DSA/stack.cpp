#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *link;
}*head=NULL;

class stack{
    public:
    void push(int n){
        struct node *p;
        p=(struct node *)malloc(sizeof(struct node));
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
        while(trav!=NULL){
            cout<<trav->data<<" ";
            trav=trav->link;
        }
   }
}s;
int main(){
    int m;
    do{
    cout<<"what do you want to do?";
    cout<<endl<<"1.push 2.pop 3.exit"<<endl;
    cin>>m;
    switch (m)
        {
        case 1:
        {
            cout << "Enter data :";
            int data;
            cin >> data;
            s.push(data);
            s.display();
            cout<<endl;
            break;
        }
        case 2:
        {
            s.pop();
            s.display();
            cout<<endl;
            break;
        }
        }
    }while(m<=2);
}