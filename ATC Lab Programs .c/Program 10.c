#include <stdio.h>

int main() {
    int a = 5, b = 3;

    printf("Intermediate Code:\n");
    printf("t1 = %d\n", a);
    printf("t2 = %d\n", b);
    printf("t3 = t1 + t2\n");

    printf("\nAssembly Code:\n");
    printf("MOV R1, %d\n", a);
    printf("MOV R2, %d\n", b);
    printf("ADD R1, R2\n");

    return 0;
}