#include<iostream>

using namespace std;

struct node
{
    struct node * next;
    int data;
};
struct node * head = nullptr;
struct node * tail = nullptr;

void enqueue(int info)
{
    node* newNode= new node();
    newNode->data=info;
    newNode->next=nullptr;

    if(head==nullptr)
    {
        head=newNode;
        tail=newNode;
    }
    else{
    tail->next=newNode;
    tail=newNode;
    }
}

int dequeue()
{
    if(head==nullptr)
    {
        cout<<"Underflow"<<endl;
        return -1;
    }
    node * temp= head;
    int data= temp->data;
    head=head->next;

    if(head==nullptr)
    {
        tail=nullptr;
    }
    delete temp;
    return data;
}

void display()
{
    if(head==nullptr)
    {
        cout<<"Queue is empty";
        return;
    }
    node* temp = head;
    cout<<"Elements of queue: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
}


int main()
{
    enqueue(20);
    enqueue(30);
    cout<<dequeue()<<endl;
    enqueue(40);
    cout<<dequeue()<<endl;
    display();
}