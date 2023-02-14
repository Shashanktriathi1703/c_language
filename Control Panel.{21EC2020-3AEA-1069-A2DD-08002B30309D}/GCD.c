#include <stdio.h>
int main()
{
    /*int temp, n1, n2;*/int rem,a,b;
    printf("enter the two values of your choice \n\n");
   // scanf("%d%d", &n1, &n2);
    scanf("%d%d", &a, &b);
   /* while (n1 != 0)*/while(b!=0)
    {
        /*temp = n1;*/rem=a%b;
        /*n1 = n2 % n1;*/a=b;
        /*n2 = temp;*/b=rem;
    }
    //printf("the GCD value is\n%d\n",n2);
    printf("the GCD value is\n%d\n",a);
    return 0;
}
//60-> 2*2*3*5
//45-> 3*3*5
//common in both the digits is 3*5=15
// so, "15" is a GCD value 