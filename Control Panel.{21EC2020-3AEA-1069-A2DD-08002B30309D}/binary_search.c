#include <stdio.h>
int binary_search(int arr[], int size, int element)
{
    int high = size - 1, low = 0, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }

        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return 0;
}
int main()
{
    int arr[] = {1, 3, 7, 15, 17, 27, 30, 77, 125, 210}; // always write in a sorting format.
    int size = sizeof(arr) / sizeof(int);
    printf("the size of the array is:\n%d\n", size);
    int element ;
    printf("the searching element is :\n");
    scanf("%d",&element);
    printf("the element is:\n%d\n",element);
    int search_index = binary_search(arr, size, element);
    printf("the element '%d' was found in the index of the arr '%d'", element, search_index);
    return 0;
}