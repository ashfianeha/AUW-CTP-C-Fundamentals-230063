#include <stdio.h>

int main() {
    char names[3][50];  
    printf("Enter 3 names:\n");
    for(int i = 0; i < 3; i++) {
        scanf("%s", names[i]);
    }

    printf("Names:\n");
    for(int i = 0; i < 3; i++) {
        printf("%s\n", names[i]);
    }
    return 0;
}
