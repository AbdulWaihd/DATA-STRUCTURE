#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* top=NULL;
void traversal(struct node* ptr){
    while(ptr!=NULL){
printf("elements are %d\n",ptr->data);
    ptr=ptr->next;
 }
}

int peek(int pos){

    struct node* ptr= top; 
    for(int i=0;i<pos-1 && ptr!=NULL;i++){
        ptr=ptr->next;
    }
    if(ptr!=NULL){
        return ptr->data;
    }
    else{
        return -1;
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
int pop(struct node** tp){
    if(isEmpty(*tp)){
        printf("stack underflow\n");
    }
    else{
        struct node* p=*tp;
        *tp=(*tp)->next;
        int x= p->data;
        free(p);
        return x;
    }
}
int main(){
top=push(top,7);
top=push(top,22);
top=push(top,88);


printf("value at position 1 is %d\n",peek(1));

for(int i=1;i<4;i++){
    printf("the value at position %d is %d\n",i,peek(i));
}

    return 0;
}