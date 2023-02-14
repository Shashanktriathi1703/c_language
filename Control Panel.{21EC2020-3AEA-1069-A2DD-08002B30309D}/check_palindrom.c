#include <stdio.h>
//#include <string.h>
int main()
{
    int rev = 0, rem, temp,n;
    printf("enter the number\n");
    scanf("%d", &n);
    temp =n;
    while (n > 0)
    {
        rem = n % 10;
        rev = (rev * 10) + rem;
        n = n / 10;
    }
    printf("%d",rev);
    if (temp == rev)
    {
        printf(" is palindrom ");

        /* code */
    }
    else
    {
        printf(" not palindrom ");
    }
    return 0;
}
