#include <stdio.h>
#include <ctype.h>

int main() {
    char str[50];
    int valid = 1;

    printf("Enter identifier: ");
    scanf("%s", str);

    // First character rule
    if(!(isalpha(str[0]) || str[0] == '_'))
        valid = 0;

    // Remaining characters rule
    for(int i = 1; str[i] != '\0'; i++) {
        if(!(isalnum(str[i]) || str[i] == '_')) {
            valid = 0;
            break;
        }
    }

    if(valid)
        printf("Valid Identifier\n");
    else
        printf("Invalid Identifier\n");

    return 0;
}