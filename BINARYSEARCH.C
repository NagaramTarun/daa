#include <stdio.h>

// Function for binary search
int binarySearch(int arr[], int n, int key) {
    int low= 0, high = n- 1;

    while ( low<= high) {
        int mid = low+ (high - low) / 2;

        // Check if the target is at the middle
        if (arr[mid] == key) {
            return mid;
        }

        // If target is smaller than mid, ignore the right half
        if (arr[mid] > key) {
            high = mid - 1;
        }
        // If target is greater than mid, ignore the left half
        else {
            low = mid + 1;
        }
    }

    // Target is not found
    return -1;
}

int main() {
    int n, key, result,i;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the sorted array
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the target element to search
    printf("Enter the target element to search: ");
    scanf("%d", &key);

    // Perform binary search
    result = binarySearch(arr, n, key);

    // Output the result
    if (result != -1) {
        printf("Element found at index %d (0-based index).\n", result);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}

