#include <stdio.h>

int binarySearch(int array[], int size, int element) {
    int low = 0, mid, high = size;
    while (low <= high) {
        mid = (low + high) / 2;
        if (array[mid] == element) {
            return mid;
        }
        if (array[mid] < element) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return mid;
}
int main() {
    printf("Binary search tree \n");
    int array[] = {1, 2, 4, 10, 12, 23, 34, 45, 56, 67, 78, 89, 90, 123, 234, 345, 456, 567, 678, 789, 890};
    int index = binarySearch(array, sizeof(array) / sizeof(int), 90);
    printf("Binary search end at %d \n", index);
    return 0;
}