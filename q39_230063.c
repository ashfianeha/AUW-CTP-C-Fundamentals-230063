#include <stdio.h>

int main() {
    int arr[5], sum = 0;
    double average;
    printf("Enter 5 integers:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  
    }

    average = sum / 5.0;
    printf("Average = %.2lf\n", average);
    return 0;
}
