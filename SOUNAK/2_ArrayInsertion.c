#include <stdio.h>
#include <stdlib.h>

void display(int arr[], int n)
{
    // Code for Traversal
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int indInsertion(int arr[], int size, int element, int capacity, int index)
{
    // code for Insertion
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

int main()
{
    int arr[10], size=5, element, index, i;
    printf("Enter the elements of array\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    display(arr, size);
    printf("Enter the element to be inserted: ");
    scanf("%d", &element);
    printf("Enter the index of the element to be inserted: ");
    scanf("%d", &index);
    indInsertion(arr, size, element, 10, index);
    size += 1;
    display(arr, size);
    return 0;
}
