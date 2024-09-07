#include <stdio.h>

int main() {
    int m, n, sum = 0;

    printf("Enter the value of m: ");
    scanf("%d", &m);

    printf("Enter the value of n: ");
    scanf("%d", &n);  // Added scanf to input the value of n

    while (m <= n) {
        sum += m;  // Add m to sum
        m++;       // Increment m
    }

    printf("\nThe sum is %d", sum);

    return 0;
}

