#include <stdio.h>

int main() {
    float no1, no2, no3;

    
    printf("Enter three float numbers: ");
    scanf("%f %f %f", &no1, &no2, &no3);

    
    if (no1 < no2) {
        if (no1 < no3)
            printf("Smallest number is: %.2f\n", no1);
        else
            printf("Smallest number is: %.2f\n", no3);
    } 
    else {
        if (no2 < no3)
            printf("Smallest number is: %.2f\n", no2);
        else
            printf("Smallest number is: %.2f\n", no3);
    }

    return 0;
}
