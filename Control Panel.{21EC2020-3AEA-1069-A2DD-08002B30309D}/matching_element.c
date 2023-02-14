#include<stdio.h>
int main()
{
    int arr[10],i=0,j;
    int k=0;
    printf("\n Enter 10 positive integers: \n");
    for(k=0;k<=9;k++)
    scanf("%d",&arr[k]);

    while(i<=9)
    {
        for(j=9;j>=0;j--)
        {
            if(arr[i]==arr[j])
            {
                printf("\n The array element %d is equal to array element %d\n", arr[i],arr[j]);
            }

            i++;
            continue;
        }
    }

    return 0;
}