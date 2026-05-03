#include <stdio.h>

int main() {
    int a;
    int b;
    int c;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Enter c: ");
    scanf("%d", &c);

    printf("Addition = %d\n", a + b);
    printf("Subtraction = %d\n", a - c);
    printf("Multiplication = %d\n", b * c);
    printf("Division = %d\n", a / c);

    return 0;
}