#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    int left = 0, right = n-1;
    while (left <= right) {
        int mid = left + (right - left)/2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    int n, key;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter sorted array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter element to search: ");
    scanf("%d", &key);
    int result = binarySearch(arr, n, key);
    if (result != -1)
        printf("%d found at index %d\n", key, result);
    else
        printf("%d not found in array\n", key);
    return 0;
}

