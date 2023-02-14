#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>

int put()
{
    char username[15];
    char password[12];
    char username1[15];
    char password1[12];
    int x = 2;
    while (x != 0)
    {

        printf("\t\tEnter your username:\n");
        scanf("%s", &username);

        printf("\t\tEnter your password:\n");
        scanf("%s", &password);

        printf("\t\tEnter again For checking purpose:\n");
        scanf("%s", &username1);

        printf("\t\tEnter your password again For checking purpose:\n");
        scanf("%s", &password1);

        if (strcmp(username, username1) == 0)
        {

            if (strcmp(password, password1) == 0)
            {

                printf("\nWelcome.Login Success!");
                x=0;
            }
            else
            {

                printf("\nwrong password\n");
            }
        }
        else
        {

            printf("\nUser doesn't exist");
        }
        printf("\n");
    }
    return 0;
}

#define CANDIDATE_COUNT
#define CANDIDATE1 "SHASHANK"
#define CANDIDATE2 "VIJAY"
#define CANDIDATE3 "VISHAL"
#define CANDIDATE4 "SAURABH"
#define CANDIDATE5 "DEVENDRA"
#define CANDIDATE6 "SHANTANU"

int votescount1 = 0;
int votescount2 = 0;
int votescount3 = 0;
int votescount4 = 0;
int votescount5 = 0;
int votescount6 = 0;

void castvote()
{
    int choice;
    printf("\n\n ### Please choose your Candidate ####\n\n");
    printf("\n 1. %s", CANDIDATE1);
    printf("\n 2. %s", CANDIDATE2);
    printf("\n 3. %s", CANDIDATE3);
    printf("\n 4. %s", CANDIDATE4);
    printf("\n 5. %s", CANDIDATE5);
    printf("\n 6. %s", CANDIDATE6);
    printf("\n7. %s", "None of These,");
    printf("\nInput your choice (1 - 7) : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        votescount1++;
        break;
    case 2:
        votescount2++;
        break;
    case 3:
        votescount3++;
        break;
    case 4:
        votescount4++;
        break;
    case 5:
        votescount5++;
        break;
    case 6:
        votescount6++;
        break;
    default:
        printf("\n Error: Wrong Choice !! Please retry");
        // hold the screen
        getchar();
    }
    printf("\n thanks for vote !!");
}

void votesCount()
{
    printf("\n\n ##### Voting Statics ####");
    printf("\n %s - %d ", CANDIDATE1, votescount1);
    printf("\n %s - %d ", CANDIDATE2, votescount2);
    printf("\n %s - %d ", CANDIDATE3, votescount3);
    printf("\n %s - %d ", CANDIDATE4, votescount4);
    printf("\n %s - %d ", CANDIDATE5, votescount5);
    printf("\n %s - %d ", CANDIDATE6, votescount6);
}
int logout()
{
    int a = 1, logout1;
    printf("\nPress 1 for logout");
    scanf("%d", &logout1);
    if (logout1 == a)
    {
        return 0;
    }
}

int main()
{
    // int i;
    // int s = put();
    // int t= logout();
    // printf("the login process\n", s);
    //  int t= logout();
    // printf("the login process\n", t);
    // break;
    int choice;
    do
    {
        printf("\n\n\t\t\t ###### Welcome to Election/Voting 2022 #####");
        printf("\n\n 1.login the user");
        printf("\n\n 1. Cast the Vote");
        printf("\n\n 2. Find Vote Count");
        printf("\n\n 0. Exit");
        printf("\n Please enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            put();
            // case 2:
            castvote();
            break;
        case 2:
            put();
        case 3:
            votesCount();
            break;
        case 4:
            logout();
            break;
        default:
            printf("\n Error: Invalid Choice");
        }
        int t = logout();
        printf("the login process\n", t);

    } while (choice != 0);
    // hold the screen
    getchar();

    // int t = logout();

    // printf("the logout process\n", t);
    // break;

    return 0;
}

/*    }
    else
    {
printf("\nwrong password");
}
}
else
{
printf("\nUser doesn't exist");
}
return 0;
}*/