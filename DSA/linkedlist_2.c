#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*head=NULL;

void add_at_first(int n){
    struct node *a=NULL;
    a=(struct node*)malloc(sizeof(struct node));
    a->next=NULL;
    if(a==NULL){
        printf("it is empty");
    }
    else{
        a->data=n;
        a->next=head;
        head=a;
    }
}

void add_at_last(int m){
    struct node *last=NULL;
    last=(struct node*)malloc(sizeof(struct node));
    last->next=NULL;
    struct node *trav=NULL;
    //trav=(struct node*)malloc(sizeof(struct node));
    trav=head;
    if(head==NULL){
        printf("list is empty");
    }
    else{
        while(trav->next!=NULL){
            trav=trav->next;
        }
        last->data=m;
        trav->next=last;
    }
}

void add_given_position(int x,int a){
    struct node *trav=NULL;
    trav=head;
    if(trav->data==x){
        add_at_first(a);
    }
    else{
        struct node *k=NULL;
        k=(struct node *)malloc(sizeof(struct node));
        k->next=NULL;
        k->data=a;
        while(trav->next->data!=x){
            trav=trav->next;
        }
        k->next=trav->next;
        trav->next=k;
    }
}

void delete_at_front(){
    struct node *trav=NULL;
    //trav=(struct node*)malloc(sizeof(struct node));
    trav=head;
    head=trav->next;
    free(trav);
}

void delete_at_last(){
    struct node *trav=NULL;
    //trav=(struct node*)malloc(sizeof(struct node));
    trav=head;
    if(trav->next==NULL){
        free(trav);
    }
    else{
        while(trav->next->next!=NULL){
            trav=trav->next;
        }
        trav->next=NULL;
        free(trav->next);
    }
}

void delete_at_given_position(int n){
    struct node *trav=NULL;
    //trav=(struct node*)malloc(sizeof(struct node));
    trav=head;
    struct node *t1=NULL;
    // t1=(struct node*)malloc(sizeof(struct node));
    t1=head->next;
    if(trav->data==n){
        delete_at_front();
    }
    else{
        while(t1->data!=n){
            trav=trav->next;
            t1=t1->next;
        }
        trav->next=t1->next;
        free(t1);
    }
}

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
        printf("enter your %d element of linkedlist :-\n",i);
        scanf("%d",&(temp->data));
        first->next=temp;
        temp->next=NULL;
        first=temp;
    }
}
void delete(){
    struct node *trav=head;
    while(trav!=NULL){
        trav=trav->next;
        free(head);
        head=trav;
    }
}
void reverse(){
    struct node *pre,*cur;
    // pre=(struct node*)malloc(sizeof(struct node));
    // cur=(struct node*)malloc(sizeof(struct node));
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
        head=pre;
    }
}

void display(){
    struct node *trav;
    trav=head;
    if(trav==NULL){
        printf("linked list is empty");
    }
    while(trav!=0){
        printf("%d ",trav->data);
        trav=trav->next;
    }
}

void display_rev(struct node *head){
    
    if(head==NULL){
        return;
    }
    display_rev(head->next);
    printf("%d ",head->data);
}

int main(){
    printf("how many node you want to create ?\n");
    int n;
    scanf("%d",&n);
    create(n);
    display();
    printf("\nWhat do you wnat to do?\n");
    printf("1. add node at front\n");
    printf("2. add node at last\n");
    printf("3. add node at your given position\n");
    printf("4. delete node at front\n");
    printf("5. delete node at last\n");
    printf("6. delete at your given position\n");
    printf("7. delete all nodes of linked list\n");
    printf("8. reverse list\n");
    printf("9. only print reverse list\n");
    int k;
    int a;
    scanf("%d",&k);
    int b;
    switch(k){
        case 1:
            printf("give value you want to add\n");
            scanf("%d",&b);
            add_at_first(b);
            display();
            break;

        case 2:
            printf("give value you want to add\n");
            scanf("%d",&b);
            add_at_last(b);
            display();
            break;
        case 3:
            printf("where do you want to add your node(linked list data)\n");
            scanf("%d",&a);
            printf("give value you want to add\n");
            scanf("%d",&b);
            add_given_position(a,b);
            display();
            break;
        
        case 4:
            delete_at_front();
            display();
            break;
        
        case 5:
            delete_at_last();
            display();
            break;
        
        case 6:
            printf("which node do you want to delete(linked list data)\n");
            scanf("%d",&a);
            delete_at_given_position(a);
            display();
            break;
        
        case 7:
            delete();
            display();
            break;

        case 8:
            reverse();
            display();
            break;

        case 9:
            display_rev(head);
            break;

        default:
            printf("enter valid number");
            break;
    }
}