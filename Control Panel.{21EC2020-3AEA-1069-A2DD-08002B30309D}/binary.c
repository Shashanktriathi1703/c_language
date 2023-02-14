#include <stdio.h>
int main()
{
    int rem, binary_number = 0, temp = 1, n;
    printf("enter the decimal digit\n");
    scanf("%d", &n);
    while (n != 0)
    {
        rem = n % 2;
        n = n / 2;
        binary_number = binary_number + rem * temp;
        temp = temp * 10;
    }
    printf("the decimal number convert into a binary number\n%d\n",binary_number);
    return 0;
}