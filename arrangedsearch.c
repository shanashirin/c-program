#include <stdio.h>

void insert(int a[], int *n, int pos, int x);
void delete(int a[], int *n, int pos);
void search(int a[], int n, int key);

void insert(int a[], int *n, int pos, int x) {
    for (int i = *n; i > pos - 1; i--) {
        a[i] = a[i - 1];
    }
    a[pos - 1] = x;
    (*n)++;
    printf("New array: ");
    for (int i = 0; i < *n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void delete(int a[], int *n, int pos) {
    for (int i = pos - 1; i < *n - 1; i++) {
        a[i] = a[i + 1];
    }
    (*n)--;
    printf("New array: ");
    for (int i = 0; i < *n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void search(int a[], int n, int key) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            found = 1;
            printf("Element %d found at position %d\n", key, i + 1);
            break;
        }
    }
    if (!found) {
        printf("Element %d not found\n", key);
    }
}

void main() {
    int a[10], i, n, pos, x, key, choice;

    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    while(1) {
        printf("\nMenu:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Search\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to be inserted: ");
                scanf("%d", &x);
                printf("Enter the position: ");
                scanf("%d", &pos);
                if (pos > 0 && pos <= n + 1) {
                    insert(a, &n, pos, x);
                } else {
                    printf("Invalid position!\n");
                }
                break;
            case 2:
                printf("Enter the position of the element to be deleted: ");
                scanf("%d", &pos);
                if (pos > 0 && pos <= n) {
                    delete(a, &n, pos);
                } else {
                    printf("Invalid position!\n");
                }
                break;
            case 3:
                printf("Enter the element to be searched: ");
                scanf("%d", &key);
                search(a, n, key);
                break;
            case 4:
                return;
            default:
                printf("Invalid choice!\n");
        }
    }
}

