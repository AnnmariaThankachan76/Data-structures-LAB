#include <stdio.h>

void swap(int a[], int i, int j) {
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

int partition(int a[], int lb, int ub) {
    int pivot = a[lb]; // Choose the first element as pivot
    int start = lb; // Start index
    int end = ub; // End index

    while (start < end) {
        // Move the start index forward until we find an element greater than the pivot
        while (start < ub && a[start] <= pivot) {
            start++;
        }
        // Move the end index backward until we find an element less than or equal to the pivot
        while (a[end] > pivot) {
            end--;
        }
        // If start is still less than end, swap the elements
        if (start < end) {
            swap(a, start, end);
        }
    }
    // Swap the pivot with the element at the end index
    swap(a, lb, end);
    return end; // Return the partition index
}
void quickSort(int a[], int lb, int ub) {
    if (lb < ub) {
        int pi = partition(a, lb, ub); // Get the partition index
        quickSort(a, lb, pi - 1); // Sort the left sub-array
        quickSort(a, pi + 1, ub); // Sort the right sub-array
    }
}

void printArray(int a[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
int n;

    // Get user input for the array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Get user input for the array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
printf("Unsorted array: \n");
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}

