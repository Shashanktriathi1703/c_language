#include <stdio.h>
int main()
{
    int temp, arr[10], i, j, n, k;
    printf("enter the range of your choice");
    scanf("%d", &n);
    printf("enter the array elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("how many times right rotation");
    scanf("%d", &k);
    for (i = 0; i < k; i++)
    {
        temp = arr[n - 1];
        for (j = n - 1; j > 0; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[j]=temp;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}