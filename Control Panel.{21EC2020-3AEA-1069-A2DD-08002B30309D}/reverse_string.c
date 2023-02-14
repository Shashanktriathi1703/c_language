#include<stdio.h>
//#include <string.h>
int main()
{
    char str[] = "shashank";//0,1,2,3,4,5,6,7,8
    int i;
    int len = 0;
    char temp;
    while (str[len] != '\0')
    {
        len++;
    }
    printf("the length oF the string %d\n", len);
    for (i = 0; i < (len-1) / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len -1 - i] = temp; 
        /* code */
    }
    printf("string now %s\n",str);
    return 0;
}