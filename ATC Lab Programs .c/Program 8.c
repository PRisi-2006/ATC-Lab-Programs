#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a statement: ");
    fgets(str, sizeof(str), stdin);

    if(strstr(str, "if"))
        printf("IF statement detected\n");
    else if(strstr(str, "while"))
        printf("WHILE loop detected\n");
    else if(strstr(str, "for"))
        printf("FOR loop detected\n");
    else
        printf("Unknown statement\n");

    return 0;
}