//if else statement is used when differnt block of statement is to be exucated on condition true and false.
//of condition is true then statement 1 is executed else the second statement is executed 
#include <stdio.h>
int main()
{
    int age=0;

    printf("\nenter the age: ");
    scanf("%d",&age);

    if(age>18)
    {
         printf("\nyou are eligible for vote\n",age);
    }
    
    else
    {
        printf("\nyou are not eligible for vote\n",age);
    }


    return 0;

}