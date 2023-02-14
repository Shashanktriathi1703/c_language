#include <stdio.h>
#include <windows.h>
int main()
{
    int h, m, s;
    int d = 1000; // we add a delay oF 1000 millisecond and we will use it in theunctions sleep
    printf("set time: \n");
    scanf("%d%d%d", &h, &m, &s);
    if (h > 12 || m > 60 || s > 60)
    {
        printf("error !\n");
        exit(0);
    }
    while (1) // this is the iniFinity loop condition
    {
        s++;
        if (s > 59)
        {
            m++;
            s = 0;
        }
        if (m > 59)
        {
            h++;
            m = 0;
        }
        if (h > 12)
        {
            h = 1;
        }
        printf("\n clock:");
        printf("\n %02d:%02d:%02d", h, m, s); // this writes our time in this Format 00:00:00
        Sleep(d);                             // the Function sleep slows down the while loop and make it more like a real clock
        //void __stdcall Sleep(d);

        system("cls");//this clear the screen
    }
    return 0;
}