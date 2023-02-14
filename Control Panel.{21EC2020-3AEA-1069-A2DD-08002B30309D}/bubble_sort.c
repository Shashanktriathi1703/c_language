#include <stdio.h>
void print_Arr(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", A[i]);
    }
}

void bubble_Sort(int *A, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++) // number oF passes
    {
        for (int j = 0; j < n - 1 - i; j++) // number Of comparision
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int A[] = {6, 9, 4, 5, 34, 77};
    int n = 6;
    printf("the n value is %d\n", n);
    print_Arr(A, n); // printing the array before sorting
    printf("now the time  for sorting\n ");
    bubble_Sort(A, n); // Function to sort the array
    printf("ater sorting complete the array is now sort\n");
    print_Arr(A, n); // printing the array after sorting
    return 0;
}
