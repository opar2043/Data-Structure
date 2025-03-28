#include <stdio.h>
int main() {
    int arr[10] = {10, 3, 6, 8, 9, 3, 5};
    int i, j, size = 10, x = 3;

    for(i = 0; i < size; i++) {
        printf("Array Is : arr[%d] = %d\n", i, arr[i]);
    }
    for(j = 0; j < size; j++) {
        if(arr[j] == x) {
            break;
        }
    }
    if(j < size) {
        printf("Element %d is found at position: %d\n", x, j + 1);  // 1-based position
    } else {
        printf("Element %d is not found in the array.\n", x);
    }

    return 0;
}
