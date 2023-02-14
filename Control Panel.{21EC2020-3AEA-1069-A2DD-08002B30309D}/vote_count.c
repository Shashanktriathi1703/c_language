#include<stdio.h>
#define CANDIDATE_COUNT
#define CANDIDATE1 "SHASHANK"
#define CANDIDATE2 "VIJAY"
#define CANDIDATE3 "VISHAL"
#define CANDIDATE4 "SAURABH"
#define CANDIDATE5 "DEVENDRA"
#define CANDIDATE6 "SHANTANU"



int votescount1=0;
int votescount2=0;
int votescount3=0;
int votescount4=0;
int votescount5=0;
int votescount6=0;


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
   scanf("%d",&choice);
   switch(choice)
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
      default: printf("\n Error: Wrong Choice !! Please retry");
      //hold the screen
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



int main()
{
  // int i;
   int choice;
   do
   {
      printf("\n\n ###### Welcome to Election/Voting 2022 #####");
      printf("\n\n 1. Cast the Vote");
      printf("\n 2. Find Vote Count");
      printf("\n 0. Exit");
      printf("\n Please enter your choice : ");
      scanf("%d", &choice);
      switch(choice)
      {
         case 1: castvote();break;
         case 2: votesCount();break;
         default: printf("\n Error: Invalid Choice");
      }
   }
   while(choice!=0);
   //hold the screen
   getchar();
   return 0;
}