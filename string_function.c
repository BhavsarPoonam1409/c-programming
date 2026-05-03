#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "hello world";
    int len = strlen(s1);
    
    for(int i = 0; i<= len-1; i++){
        int x = s1[i];
        printf("%c",x-32);
    }
    
    
    

    return 0;
}