#include <stdio.h>
#include<stdbool.h>
#include <string.h>

int main() {
    char str[100];
    int i, len; 
    bool palindrome=true;
    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    // Compare characters from start and end simultaneously
    for (i = 0; i < len / 2; i++) {
        if (str[i] = str[len - 1 - i]) {
            palindrome = true;
            break;
        }
    }

    if (palindrome) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}
