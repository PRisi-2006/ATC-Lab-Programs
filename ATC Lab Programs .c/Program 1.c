#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if word is a keyword
int isKeyword(char *str) {
    char *keywords[] = {"int","float","char","if","else","for","while","return"};
    int n = 8;

    for(int i = 0; i < n; i++) {
        if(strcmp(str, keywords[i]) == 0)
            return 1;
    }
    return 0;
}

int main() {
    char str[100];

    printf("Enter a token: ");
    scanf("%s", str);

    // Check for keyword
    if(isKeyword(str)) {
        printf("It is a Keyword\n");
    }
    // Check for number
    else if(isdigit(str[0])) {
        printf("It is a Number\n");
    }
    // Check for identifier
    else if(isalpha(str[0]) || str[0] == '_') {
        printf("It is an Identifier\n");
    }
    // Otherwise operator or symbol
    else {
        printf("It is an Operator/Special Symbol\n");
    }

    return 0;
}