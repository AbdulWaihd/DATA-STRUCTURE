#include<stdio.h>
#include<stdlib.h>

struct stack{
int size;
int top;
int *arr;
};


int isFull(struct stack*ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    return 0;
}

int isEmpty(struct stack* ptr){
    if(ptr->top==-1){
        return 1;
    }
    return 0;
}
void push(struct stack* ptr,int value){
    if(isFull(ptr)){
        printf("stack overflow\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=value;
    }
}
int pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("stack undeflow");
        return -1;
    }
else{
    int val=ptr->arr[ptr->top];// in order to not to loose the value we store it in val and then change the top
    ptr->top--;
    return val;
}
}



int main(){
struct stack *sp=(struct stack*)malloc(sizeof(struct stack));// sp-> structure pointer
sp->size=5;
sp->top=-1;
sp->arr=(int*)malloc(sp->size*sizeof(int));
//push
/*
int value=22;
if(isFull(sp)){
    printf("function overloading");
return -1;
}
else{
    sp->top++;
    sp->arr[sp->top]=value;
}
*/
printf("before pushing:\n");
printf("%d\n",isFull(sp));
printf("%d\n",isEmpty(sp));
push(sp,3);
push(sp,3);
push(sp,3);
push(sp,3);
push(sp,6);

printf("after pushing:\n");
printf("%d\n",isFull(sp));
printf("%d\n",isEmpty(sp));

printf("popped %d from the stack",pop(sp));

    return 0;
}