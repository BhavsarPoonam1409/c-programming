#include <stdio.h>
#include <string.h>

int main() {
    char a[25];
    int i;

    printf("Enter a Name: ");
    gets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0'; 
    i = 0;
    while (a[i] != '\0') {
        if (a[i] == ' ') {
            printf("#");
        } else {
            printf("%c", a[i]);
        }
        i++;
    }

    return 0;
}