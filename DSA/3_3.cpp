#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;
    node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void print(node* h) {
    node* temp = h;
    while (temp!= NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

node* createList(int n) {
    int m;
    cin>>m;
    node* h = new node(m);
    node* temp = h;

    for (int i=1 ; i<n ; i++) {
        cin>>m;
        node* temp1 = new node(m);
        temp->next = temp1;
        temp = temp->next;
    }
    return h;
}

node* mergeSortedlist(node* h1, node* h2) {
    node* dummy = new node(0);
    node* temp = dummy;

    node* t1 = h1;
    node* t2 = h2;

    while (t1!=NULL && t2!=NULL) {
        if (t1->data <= t2->data) {
            temp->next = t1;
            temp = temp->next;
            t1 = t1->next;
        } else {
            temp->next = t2;
            temp = temp->next;
            t2 = t2->next;
        }
    }

    if (t2==NULL)
        temp->next = t1;
    if (t1==NULL)
        temp->next = t2;

    return dummy->next;
}

int main() {
    cout<<"enter first linked list: ";
    node* l1 = createList(5);
    cout<<"enter first linked list: ";
    node* l2 = createList(6);

    node* l3 = mergeSortedlist(l1, l2);
    print(l3);
    return 0;
}