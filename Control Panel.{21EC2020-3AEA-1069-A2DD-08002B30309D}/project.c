#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    // student database
    int attendence = 100;
    char s_name[] = "shashanktripathi@gmail.com";
    int s_pass = 12345;
    char input_s_name[100];
    int input_s_pass;
    printf("\t\t\t\t\tWELCOME TO THE ATTENDENCE MANAGEMENT SYSTEM\n");
    printf("1.Press 1 iF you are a student\n2.press 2 iF you are a Teacher\n3.press3 i you wnt to quit the application");
    int choice;
    printf("\n\tEnter the choice:");
    scanf("%d", &choice);
    char s_name1[] = "shashwat@gmail.com";
    int s_pass1 = 24568;
    char input_s_name1[100];
    int input_s_pass1;
    // printf("\t\t\t\t\tWELCOME TO THE ATTENDENCE MANAGEMENT SYSTEM\n");
    // printf("1.Press 1 iF you are a student\n2.press 2 iF you are a Teacher\n3.press3 i you wnt to quit the application");
    //int choice1;
    //printf("\n\tEnter the choice:");
    //scanf("%d", &choice1);
    if (choice == 1)
    {
        printf("enter your username:");
        scanf("%d", &input_s_name);
        printf("enter your password:");
        scanf("%d", &input_s_pass);

        if (strcmp(input_s_name, s_name))
        {
            if (input_s_pass == s_pass)

            {
                printf("welcome to the student id");

                /* code */
                while (1)
                {
                    printf("\n1.press1 1 to view your attendance\n2.press 2 to logout\n");
                    int s_choice;
                    scanf("%d", &s_choice);
                    if (s_choice == 1)
                    {
                        printf("you are present For %d days.", attendence);
                        /* code */
                    }
                    else if (s_choice == 2)
                    {
                        break;
                        /* code */
                    }
                    else
                    {
                        printf("invalid input");
                    }

                    /* code */
                }

                
            }    /* code */
            
    }
   /* char s_name1[] = "shashwat@gmail.com";
    int s_pass1 = 24568;
    char input_s_name1[100];
    int input_s_pass1;
    // printf("\t\t\t\t\tWELCOME TO THE ATTENDENCE MANAGEMENT SYSTEM\n");
    // printf("1.Press 1 iF you are a student\n2.press 2 iF you are a Teacher\n3.press3 i you wnt to quit the application");
    int choice1;
    printf("\n\tEnter the choice:");
    scanf("%d", &choice1);*/
   else if (choice == 2)
    {
        printf("enter your username:");
        scanf("%d", &input_s_name1);
        printf("enter your password:");
        scanf("%d", &input_s_pass1);

        if (strcmp(input_s_name1, s_name1))
        {
            if (input_s_pass1 == s_pass1)

            {
                printf("welcome to the teacher id");
            int s_choice1;
            scanf("%d", &s_choice1); 
                 while (1)
                    {
                     printf("\n1.press1 1 to view your attendance\n2.press 2 to edit the student attendance\n3.press 3 to edit the student attendence\n4.press 4 to logout\n");
                        //int s_choice;
                        //scanf("%d", &s_choice);
                         if (s_choice1 == 1)
                        {
                         printf("student are present in the days are  %d days.", attendence);
                         /* code */
                        }
                        else if (s_choice1 == 2)
                        {
                         int a;
                         scanf("%d", &a);
                         printf("student are present in the days are  %d days and teacher want to increase a attendence so ", attendence);
                         attendence += a;
                         /* code */
                        }
                        else if (s_choice1 == 3)
                        {
                          int b;
                         scanf("%d",&b);
                         printf("student are present in the days are  %d days and teacher want to decrease a attendence so ", attendence);
                         attendence -=b;
                         /* code */
                         }
                         else if (s_choice1 == 4)
                         {
         
                        break;
                        /* code */
                        }
               
                        else
                         {
                         printf("invalid input");
                         }
    

                     }/* code */
            }
        }
    }
    
 else if (choice == 3)
 {
     printf("quit the project");
    // break;
     
 }
 else
 {
     ("kuch bhi nhi sab badhiya hain");
 }   
return 0;
}