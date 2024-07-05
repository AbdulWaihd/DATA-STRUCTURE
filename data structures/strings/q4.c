//lower case strings into upper cases
#include<stdio.h>
void strupper(char *str){
    while(*str!='\0'){
        if (*str>='a' && *str<='z')
        {
            *str=*str-32;
        }
        str++;
    }
}

int main(){
    char str[20];
    printf("enter your lower case string:");
    gets(str);
    strupper(str);
    printf("%s",str);
    return 0;
}