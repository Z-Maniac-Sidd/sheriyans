#include <stdio.h>


void insertElement(int *arr, int *size, int position, int element) {
    if (position < 0 || position > *size) {
        printf("Invalid position for insertion\n");
        return;
    }

    
    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    
    arr[position] = element;
    (*size)++;
}


void deleteElement(int *arr, int *size, int position) {
    if (position < 0 || position >= *size) {
        printf("Invalid position for deletion\n");
        return;
    }

    
    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*size)--;
}

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5;

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Insert an element at 2
    insertElement(arr, &size, 2, 25);

    printf("Array after insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Delete the element at 3
    deleteElement(arr, &size, 3);

    printf("Array after deletion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
