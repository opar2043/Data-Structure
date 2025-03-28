#include <stdio.h>

int main() {
    int arr[10] = {5, 4, 7, 9, 10};
    int i, pos = -1, value;

    printf("Select an item: ");
    scanf("%d", &value);

    for(i = 0; i < 10; i++) {
        if(value == arr[i]) {
            pos = i + 1;  // Using i+1 to represent position starting from 1
            break;
        }
    }

    if(pos == -1) {
        printf("Item not found.\n");
    } else {
        printf("Item found at position %d.\n", pos);
    }

    return 0;
}
