#include <stdio.h>

void displayArray(int arr[], int customArrSize)
{
    for (int i = 0; i < customArrSize; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}

void indexDeletion(int array[], int customArrSize, int index)
{
    for (int i = index; i < customArrSize - 1; i++)
    {
        array[i] = array[i + 1];
    }
}

int main()
{
    printf("Array deletion in C \n");
    int array[100] = {1, 121, 12, 32};
    int arrSize = sizeof(array), customArrSize = 4, element = 4, index = 1;
    displayArray(array, customArrSize);
    indexDeletion(array, customArrSize, index);
    customArrSize -= 1;
    printf("Array successfully deleted \n");
    displayArray(array, customArrSize);

    return 0;
}
