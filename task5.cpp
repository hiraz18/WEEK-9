#include <stdio.h>

binaryS(int ar[], int num, int pos) {
    int left = 0, right = num-1;
    while (left <= right) {
        int mid = left + (right - left)/2;
        if (ar[mid] == pos)
            return mid;
        else if (ar[mid] < pos)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

main() {
    int size, pos, i, search;
    printf("Enter the expected size of the array: ");
    scanf("%d", &size);
    
    int ar[size];
    printf("Enter the array elements: ");
    for (i = 0; i < size; i++)
        scanf("%d", &ar[i]);
        
    printf("Enter the element to be searched for: ");
    scanf("%d", &pos);
    search = binaryS(ar, size, pos);
    if (search != -1)
        printf("%d was found in the array at index %d.", pos, search);
    else
        printf("%d was not found in the array.", pos);
}
