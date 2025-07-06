#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
}*temp;
int main(){
    node n1,n2,n3;

    scanf("%d",&n1.data);
    scanf("%d",&n2.data);
    scanf("%d",&n3.data);
    n1.next=&n2;
    n2.next=&n3;
    n3.next=NULL;

    temp=&n1;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}