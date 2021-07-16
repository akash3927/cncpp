//if statement it is used when the condition is showed by if statement is fullsilled then the next oart is evaluated 
#include <stdio.h>
int main()
{
    int number = 0;
    printf("\nenter the number: ");
    scanf("%d",&number);
    if (number >10)
    {
        printf("\nthe given no. is %d which is greater than 10\n  ",number);
    }
    if (number < 10)
    {
        printf("\nthe given no. is %d which is less than 10\n ",number);
    }
return 0;

}