#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*head=NULL;

void create(int n){
    struct node *first=NULL;
    head=(struct node*)malloc(sizeof(struct node));
    //first=(struct node*)malloc(sizeof(struct node));
    printf("enter your first element of linked list :-\n");
    scanf("%d",&(head->data));
    head->next=NULL;
    
    
    first=head;
    for(int i=2;i<=n;i++){
        struct node *temp=NULL;
        temp=(struct node*)malloc(sizeof(struct node));
        while(first->next!=0){
            first=first->next;
        }
            printf("enter your %d element of linkedlist :-\n",i);
            scanf("%d",&(temp->data));
            first->next=temp;
            temp->next=NULL;
    }
}

struct node* getmid(){
    struct node *slow=head;
    struct node *fast=head->next;

    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}

struct node *reverse(struct node *head){
    struct node *pre,*cur;
    pre=(struct node*)malloc(sizeof(struct node));
    cur=(struct node*)malloc(sizeof(struct node));
    if(head!=NULL){
        pre=head;
        cur=head->next;
        head=head->next;
        pre->next=NULL;

        while(head!=NULL){
            head=head->next;
            cur->next=pre;
            pre=cur;
            cur=head;
        }
        return pre;
    }
}

void display(){
    struct node *trav;
    trav=head;
    while(trav!=0){
        printf("%d ",trav->data);
        trav=trav->next;
    }
}

int main(){
    printf("how many node you want to create ?\n");
    int n;
    scanf("%d",&n);
    create(n);
    display();
    struct node *mid=getmid();
    struct node *temp=mid->next;
    mid->next=reverse(temp);
    struct node *h1=head;
    struct node *h2=mid->next;
     while(h2!=NULL){
        if(h1->data==h2->data){
            h1=h1->next;
            h2=h2->next;
        }
        else{
            printf("\nIt is not palindrome");
            temp=mid->next;
            mid->next=reverse(temp);
            //display();
            return 0;
        }
    }
    printf("\nIt is palindrome.");
    temp=mid->next;
    mid->next=reverse(temp);
    //display(temp);
    return 0;
}