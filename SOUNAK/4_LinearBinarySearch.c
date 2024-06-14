// PRACTICE PROGRAM TO UNDERSTAND THE LINEAR AND BINARY SEARCH USING ARRAY

#include <stdio.h>
 
int linearSearch(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}
 
int binarySearch(int arr[], int size, int element){
    int low, mid, high;
    low = 0;
    high = size-1;
    // Keep searching until low <= high
    while(low<=high){
        mid = (low + high)/2;
        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid]<element){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    } 
    return -1;
    
}
 
int main(){
    // Unsorted array for linear search
    int arr1[] = {1,3,5,56,4,3,23,5,4,54634,56,34};
    int size1 = sizeof(arr1)/sizeof(int);
    int element1 = 444;
    int searchIndex1 = binarySearch(arr1, size1, element1);
    printf("The element %d was found at index %d \n", element1, searchIndex1);
    
    // Sorted array for binary search
    int arr2[] = {1,3,5,56,64,73,123,225,444};
    int size2 = sizeof(arr2)/sizeof(int);
    int element2 = 444;
    int searchIndex2 = binarySearch(arr2, size2, element2);
    printf("The element %d was found at index %d \n", element2, searchIndex2);
    return 0;
}
