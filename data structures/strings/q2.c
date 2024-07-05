//reverse a string

#include<stdio.h>
#include<string.h>

int main(){
    char str1[100];
printf("enter your string :");
gets(str1);
printf("orignal string is :");
puts(str1);
int length =0;
while(str1[length]!=NULL){
    length++;
}
int start=0;
int end=length-1;
while (start<end)       
{
    char temp=str1[start];
    str1[start]=str1[end];
    str1[end]=temp;
    start++;
    end--;
}
printf("reversed string is %s",str1);

return 0;
}