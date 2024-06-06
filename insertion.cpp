#include <stdio.h>

void insertElement(int arr[], int *size, int element, int position) {
    // Check if the position is valid
    if (position > *size || position < 0) {
        printf("Invalid position!\n");
        return;
    }

    // Shift elements to the right to make space for the new element
    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the specified position
    arr[position] = element;

    // Increment the size of the array
    (*size)++;
}

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int size = 5;
    int element = 10;
    int position = 2;

    printf("Original array: ");
    displayArray(arr, size);

    insertElement(arr, &size, element, position);

    printf("Array after insertion: ");
    displayArray(arr, size);

    return 0;
}

