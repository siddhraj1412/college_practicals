#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node (int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};
Node* head=NULL;
Node* tail=head;

void insertAtHead(Node* &head,int d){
    Node* temp=new Node(d);
    if(head==nullptr){
        head=temp;
        return;
    }
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void insertAtTail(Node* &tail,int d){
    Node* temp=new Node(d);
     if(head==nullptr){
        head=temp;
        return;
    }
    tail=head;
    while(tail->next!=NULL){
            tail=tail->next;
    }
    tail->next=temp;
    tail->prev=tail;
    tail=temp;
}
void deleteLast(Node* &head,Node* &tail){
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->prev->next=NULL;
    temp->prev=NULL;
    delete temp;
}
void deleteAll(Node* &head){
    head=NULL;
    cout<<"list is empty"<<endl;
    return;
}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
Node* reverse(Node* &curr){
    if (curr == NULL)
        return NULL;

    // Swap the next and prev pointers
    Node *temp = curr->prev;
    curr->prev = curr->next;
    curr->next = temp;

    // If the previous node (after swap) is null,
      // this is the new head
    if (curr->prev == nullptr)
        return curr;

    // Recurse for the next node
    return reverse(curr->prev);
}
int main(){
    Node* n1=new Node(NULL);
    int c,n;
    while(true){
        cout<<"Enter 1: Insert at Head"<<endl;
        cout<<"Enter 2: Insert at Tail"<<endl;
        cout<<"Enter 3: Delete last"<<endl;
        cout<<"Enter 4: Delete ALL"<<endl;
        cout<<"Enter 5: Print"<<endl;
        cout<<"Enter 6: reverse"<<endl;
        cout<<"Enter 7: exit"<<endl;
        cin>>c;
        switch (c)
        {
            case 1:
            cin>>n;
            insertAtHead(head,n);
            break;
            case 2:
            cin>>n;
            insertAtTail(tail,n);
            break;
            case 3:
            deleteLast(head,tail);
            break;
            case 4:
                deleteAll(head);
                break;
            case 5:
                print(head);
                break;
            case 6:
                head=reverse(head);
                print(head);
                break;
            case 7:
                cout<<"Prepared By 23CE113-Jeet";
                exit(0);
                break;
        }
    }
}