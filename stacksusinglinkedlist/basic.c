#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;

};
void traversal(struct node* ptr){
    while(ptr!=NULL){
printf("the elements are:\n %d\n",ptr->data);
ptr=ptr->next;
    }
}

int isEmpty(struct node* top){
    if(top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct node* top){
    struct node*p=(struct node*)malloc(sizeof(struct node));

    if(p==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

struct node*push(struct node* top,int x){
    if(isFull(top)){
        printf("stack oveflow");
    }
    else{
        struct node*p=(struct node*)malloc(sizeof(struct node));
        p->data=x;
        p->next=top;
top=p;
    }
    return top;
}
int pop(struct node** top){
    if(isEmpty(*top)){
        printf("stack underflow\n");
    }
    else{
        struct node* p=*top;
        *top=(*top)->next;
        int x= p->data;
        free(p);
        return x;
    }
}
int main(){

struct node*top=NULL;
top=push(top,77);
top=push(top,3);
top=push(top,66);

printf("traversal before pop\n");
traversal(top); 
int element=pop(&top);
printf("the popped element is : %d\n",element);

traversal(top);
return 0;
}