#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};

int isempty(struct stack* ptr){
    if (ptr->top==-1)       
    {
       return 1;
    }
    else{
        return 0;
    }
}

int isfull(struct stack* ptr){
    if (ptr->top==ptr->size-1)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}
int main(){
    struct stack* s;
    s->size=80;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int));
  s->arr[0]=7;
  s->top++;
  s->arr[1]=8;
   s->top++;
  s->arr[2]=12;
       s->top++;

    if (isempty(s))
    {
        printf("stack is empty");

    }

    else{
        printf("stack is not empty");
    }
 return 0;   
}