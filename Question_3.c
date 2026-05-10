#include <stdio.h>

int main() {
    int arr[6] = {40, 25, 60, 10, 55, 30};
    int update[6];
    int i;

    for(i = 0; i < 6; i++) {
        if(arr[i] < 30) {
            update[i] = arr[i] % 5;
        } else {
            printf("same")
        }
    }

    
    

    return 0;
}