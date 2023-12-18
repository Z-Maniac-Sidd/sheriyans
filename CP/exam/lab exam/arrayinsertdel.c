#include <stdio.h>

// Function to display the elements of an array
void displayArray(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to insert an element into an array at a specified position
int insertElement(int arr[], int *size, int position, int element) {
    if (*size >= 100) { // Assuming a maximum array size of 100
        printf("Array is full. Cannot insert element.\n");
        return -1;
    }

    if (position < 0 || position > *size) {
        printf("Invalid position for insertion.\n");
        return -1;
    }

    // Shift elements to make space for the new element
    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[position] = element;

    // Update the size of the array
    (*size)++;

    return 0;
}

// Function to delete an element from an array at a specified position
int deleteElement(int arr[], int *size, int position) {
    if (*size <= 0) {
        printf("Array is empty. Cannot delete element.\n");
        return -1;
    }

    if (position < 0 || position >= *size) {
        printf("Invalid position for deletion.\n");
        return -1;
    }

    // Shift elements to fill the gap left by the deleted element
    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Update the size of the array
    (*size)--;

    return 0;
}

int main() {
    int arr[100]; // Assuming a maximum array size of 100
    int size = 0;

    // Insert elements into the array
    insertElement(arr, &size, 0, 10);
    insertElement(arr, &size, 1, 20);
    insertElement(arr, &size, 2, 30);

    // Display the array
    displayArray(arr, size);

    // Delete an element from the array
    deleteElement(arr, &size, 1);

    // Display the array after deletion
    displayArray(arr, size);

    return 0;
}
