#include<stdio.h>
#include<stdlib.h>

struct node{
    int data ;
    struct node* next ;
};

void circular_traversal(struct node* head){
    struct node* ptr=head;
    do{
        printf("elements are: %d\n",ptr->data);
        ptr=ptr->next;
    }while (ptr!=head);
}

struct node* insertion_at_begin(struct node* head, int data){
    //creation of new node
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;

    struct node*p=head->next;
    while(p->next!=head){
       p= p->next;
    }
// at this point p points to the last circular linked list
p->next=ptr;
ptr->next=head;
head=ptr;
return head;
}
int main(){
    struct node* head=(struct node*)malloc(sizeof(struct node));
    struct node* second=(struct node*)malloc(sizeof(struct node));
    struct node* third=(struct node*)malloc(sizeof(struct node));
    struct node* fourth=(struct node*)malloc(sizeof(struct node));
    
    head->data=4;
    head->next=second;

    second->data=3;
    second->next=third;

    third->data=6;
    third->next=fourth;

    fourth->data=1;
    fourth->next=head;
printf("The elements before insertion are\n");
    circular_traversal(head);

    head=insertion_at_begin(head,55);
    printf("The elements after insertion are\n");
circular_traversal(head);
    return 0;
}

