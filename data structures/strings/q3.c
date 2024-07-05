//concatinate strings


#include<stdio.h>
#include<string.h>

void strconcat(char str1[], char str2[]){
    char str3[40];
    int i=0,j=0,k=0;
while(str1[i]!='\0'){
    str3[j]=str1[i];
    i++;
    j++;
}

while (str2[k]!='\0')
{
    str3[j]=str2[k];
    k++;
    j++;
}
str3[j]='\0';
printf("string 3 : %s",str3);
}
int main(){
    char str1[20],str2[20];
    printf("enter string values:");
    gets(str1);
    gets(str2);
    strconcat(str1,str2);
    return 0;
}