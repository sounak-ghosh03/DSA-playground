// PRACTICE PROGRAM TO UNDERSTAND THE DELETION OF ELEMENT FORM A GIVEN INDEX IN AN ARRAY

#include <stdio.h>

void display(int arr[], int n)
{
    // Code for Traversal

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void indDeletion(int arr[], int size, int index)
{
    // code for Deletion

    if (index < 0 || index >= size)
    {
        printf("Invalid index. Deletion failed.\n");
        return;
    }
    printf("Array after deletion: \n");
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main()
{
    int arr[100], n = 5, index, i;
    printf("Enter the elements of array: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the index to be deleted: ");
    scanf("%d", &index);
    printf("Array before deletion\n");
    display(arr, n);
    indDeletion(arr, n, index);
    n -= 1; // Reduce logical size (not actual array size)
    display(arr, n);
    return 0;
}
