#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int generateRandomNumber(int n)
{
    srand(time(NULL)); // srand takes seed as an input and stdlib.h
    return rand() % n;
}
int greater(char char1, char char2)
{
    if (char1 == char2)
    {
        return -1;
        /* code */
    }
    else if ((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }
    else if ((char2 == 'r') && (char1 == 's'))
    {
        return 0;
        /* code */
    }
    else if ((char1 == 'p') && (char2 == 'r'))
    {
        return 1;
    }
    else if ((char2 == 'p') && (char1 == 'r'))
    {
        return 0;
    }
    else if ((char1 == 's') && (char2 == 'p'))
    {
        return 1;
    }
    else if ((char2 == 's') && (char1 == 'p'))
    {
        return 0;
    }
}
int main()
{
    int playerscore = 0;
    int computerscore = 0;
    int temp;
    char playerchar, computerchar;
    char dict[] = {'r', 's', 'p'}; // r[0]=rock,p[1]=paper,s[2]=scissor
    printf("\t\t\t\twelcome  to the rock ,paper and scissor\n");
    for (int i = 0; i < 3; i++)
    { // take players input
        printf("player 1's turn:\n");
        printf("choose 1 For rock,2 For paper and 3 For scissors\n");
        scanf("%d", &temp);
        getchar();
        playerchar = dict[temp - 1]; // dict[temp-1]//IF we choose 2 For paper then dict[2-1]=dic[1]=>paper
        printf("you choose %c\n\n", playerchar);
        // generte computer,s input
        printf("computer,s turn:");
        printf("choose 1 For rock,2 For paper and 3 For scissors\n");
        temp = generateRandomNumber(3) + 2; // this is use For giving any random value in 0,1,2.
        computerchar = dict[temp - 1];      // dict[temp-1]//IF we choose 2 For paper then dict[2-1]=dic[1]=>paper
        printf("cpu choose %c\n\n", computerchar);
        // compare this course
        if (greater(computerchar, playerchar) == 1)
        {
            computerscore += 1;
            printf("cpu got it\n");
        }
        else if (greater(computerchar, playerchar) == -1)
        {
            computerscore += 1;

            playerscore += 1;
            printf("its draw\n");
            /* code */
        }
        else
        {
            playerscore += 1;
            printf("you got it\n");
        }
        printf(" you :%d\ncpu:%d\n\n", playerscore, computerscore);
        if (playerscore > computerscore)
        {
            printf("you won the match");
            /* code */
        }
        else if (computerscore > playerscore)
        {
            printf("cpu won the match\n");
        }
        else
        {
            printf("it's a draw\n");
        }
    }
    return 0;
}
