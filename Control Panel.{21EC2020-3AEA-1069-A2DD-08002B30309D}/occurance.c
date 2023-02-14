#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], ch;
    int i, Count;
    i = Count = 0;

    printf("\n Please Enter any String :  ");
    gets(str);
    //scanf("%[^\n]",str);//this is invalid For the program ,its does not give a desire result 
    // scanf("%s",&str);//this is invalid For the program ,its does not give a desire result 

    printf("\n Please Enter the Character that you want to Search for :  ");
    scanf("%c", &ch);

    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            Count++;
        }
        i++;
    }
    printf("\n The Total Number of times '%c' has Occured = %d ", ch, Count);

    return 0;
}