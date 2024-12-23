#include <stdio.h>

void displayArray(int arr[], int customArrSize) {
    for (int i = 0; i < customArrSize; i++) {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}

int indexInsertion(int array[], int customArrSize, int element, int index, int arrSize) {
    if (customArrSize >= arrSize) {
        return 0;
    }
    for (int i = customArrSize - 1; i >= index; i--) {
        array[i + 1] = array[i];
    }
    array[index] = element;
    return 1;
}

int main() {
    printf("Array insertion in C \n");
    int array[100] = {1, 12, 12, 32};
    int arrSize = sizeof(array), customArrSize = 4, element = 4, index = 3;
    displayArray(array, customArrSize);
    int a = indexInsertion(array, customArrSize, element, index, arrSize);
    if (a != 0) {
        customArrSize += 1;
    }
    printf("Array successfully inserted \n");
    displayArray(array, customArrSize);

    return 0;
}
