#include <stdio.h>
#include <math.h>
int main()
{
    int rem, n, decimal_number = 0, temp = 0;
    printf("enter the binary digit number\n");
    scanf("%d", &n);
    while (n != 0)
    {
        rem = n % 10;
        n = n / 10;
        decimal_number = decimal_number + rem * pow(2,temp);
        temp++;
    }
    printf("now, the binary digit convert into a decimal digit\n%d",decimal_number);
    return 0;
}