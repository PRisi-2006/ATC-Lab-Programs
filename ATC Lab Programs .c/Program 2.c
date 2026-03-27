#include <stdio.h>

int main() {
    FILE *fp;
    char ch, prev = 0;

    // Open input file
    fp = fopen("input.c", "r");

    if(fp == NULL) {
        printf("File not found\n");
        return 0;
    }

    // Read character by character
    while((ch = fgetc(fp)) != EOF) {

        // Single-line comment (//)
        if(prev == '/' && ch == '/') {
            while(ch != '\n')
                ch = fgetc(fp);
        }

        // Multi-line comment (/* */)
        else if(prev == '/' && ch == '*') {
            while(!(prev == '*' && ch == '/')) {
                prev = ch;
                ch = fgetc(fp);
            }
            ch = ' '; // Replace comment with space
        }

        else {
            if(prev != '/')
                putchar(prev);
        }

        prev = ch;
    }

    fclose(fp);
    return 0;
}