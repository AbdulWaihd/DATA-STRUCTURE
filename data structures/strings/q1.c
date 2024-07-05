// compare two strings


#include<stdio.h>
int comparestr(char *str1[],char *str2[]){
    int i=0;
    while (str1[i]!='\0')
    {
        if (str1[i]==str2[i])
        {
            i++;
        }
        if(str1[i]>str2[i]){
            return 1;
        }
if(str1[i]<str2[i]){
    return -1;
}

    }
    return 0;
}
int main(){

char str1[100];
char str2[100];
printf("enter your strings:");
scanf("%s%s",str1,str2);
int result=comparestr(str1,str2);

printf("%d",result);


    return 0;
}