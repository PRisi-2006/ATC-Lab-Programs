#include <stdio.h>

int main() {
    printf("Grammar:\n");
    printf("E -> E + E | E * E | id\n");

    printf("\nExplanation:\n");
    printf("This grammar is ambiguous because\n");
    printf("the expression 'id + id * id' can be parsed in multiple ways.\n");

    printf("\nHence, grammar is AMBIGUOUS.\n");

    return 0;
}