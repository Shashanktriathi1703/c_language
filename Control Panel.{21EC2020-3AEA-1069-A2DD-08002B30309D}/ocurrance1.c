#include <stdio.h>
int main()
{
    long int n;
    long int count = 0, i = 0, arr[10], j, k;
    // long int n;
    printf("enter the size of the array\n");
    scanf("%ld", &n);
    printf("enter the array elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%ld", &arr[i]);
    }
    for (j = n - 1; j >= 0; j--)
    {
        printf("the array is reverse now %ld\n", arr[j]);
    }
    printf("Find value how much time the value is repeat in this array \n");
    scanf("%ld", &k);
    for (i = 0; i < n; i++)
    // while (i != n)
    {
        if (arr[i] == arr[j]) // if(arr[i]==k) is also correct method        
        {
            count++;
            // printf("the occurance of the digit\n%d\n",count);
        }
        // i++;
    }
    printf("the occurance of the digit\n'%ld'has occured in this array%ld\n", k, count);
    return 0;
}
