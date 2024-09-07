#include <stdio.h>

int largest(int arr[], int n);

int main() {
    int i, n, arr[20];
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int large = largest(arr, n);
    printf("The largest element = %d\n", large);

    return 0;
}

int largest(int arr[], int n) {
    int i, large = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > large)
            large = arr[i];
    }
    return large;
}
