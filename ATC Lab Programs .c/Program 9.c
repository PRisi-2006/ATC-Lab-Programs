#include <stdio.h>

int main() {
    printf("Original Code:\n");
    printf("t1 = b + c\n");
    printf("t2 = b + c\n");

    printf("\nObservation:\n");
    printf("Both expressions are same (b + c)\n");

    printf("\nOptimized Code using DAG:\n");
    printf("t1 = b + c\n");
    printf("t2 = t1\n");

    return 0;
}