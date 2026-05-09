#include <stdio.h>

int main() {
    int num, a, b, c;
    int reverse;

    printf("Enter a number: ");
    scanf("%d", &num);

    
    a = num % 10;        
    b = (num / 10) % 10; 
    c = num / 100;       
    reverse = (a * 100) + (b * 10) + c;
    printf("Reversed number: %d\n", reverse);

    return 0;
}