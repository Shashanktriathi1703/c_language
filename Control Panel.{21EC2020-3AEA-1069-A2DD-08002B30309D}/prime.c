#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    for ( i = 2; i < n-1; i++)
    {
        if (n % i == 0)
        {
            printf("Not \n");
            break;
        }
    }
    if (n == i)
    {
        printf("Prime\n");
    }
    
    return 0;
}