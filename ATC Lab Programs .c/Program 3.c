#include <stdio.h>

int main() {
    char ch;
    int lines = 0, words = 0, chars = 0;
    int inWord = 0;

    printf("Enter text (Ctrl+D to stop):\n");

    while((ch = getchar()) != EOF) {
        chars++;

        // Count lines
        if(ch == '\n')
            lines++;

        // Word detection
        if(ch == ' ' || ch == '\n' || ch == '\t') {
            inWord = 0;
        }
        else if(inWord == 0) {
            inWord = 1;
            words++;
        }
    }

    printf("\nLines = %d\nWords = %d\nCharacters = %d\n", lines, words, chars);

    return 0;
}