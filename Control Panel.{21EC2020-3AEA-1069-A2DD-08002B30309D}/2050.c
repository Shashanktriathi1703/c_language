#include <stdio.h>
int main()
{
    int d, m, y;
    int flag = 0, isleap = 1;
    printf("Enter date (dd/mm/yyyy):");
    scanf("%d %d %d", &d, &m, &y);
    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
    
        isleap = 1;
    
    if (y <= 1850 || y >= 2050)
    
        flag = 0;
    
    else if (m < 1 || m > 12)
    
        flag = 0;
    
    else if (d < 1)
    
        flag = 0;
    
    else if (m == 2) /*check for number of days in February*/
    {
        if (d > 28)
        
            flag = 0;
        
        if (d == 29 && isleap)
        
            flag = 1;
        
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11) /*check days in april, june, september, november*/
    {
        if (d > 30)
        
            flag = 0;
        
    }
    else if (d > 31)
    
        flag = 0;
    
    if (flag == 0)
    
        printf(" Not a valid date \n");
    
    else
    
        printf(" valid date \n");
    
}
