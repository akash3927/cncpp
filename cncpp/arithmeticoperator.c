#include<stdio.h>
int main()
{
    int num1,num2;
    int add,sub,mul,div;
    printf("\n enter first no.:");
    scanf("%d",&num1);

    printf("\n enter second no.:");
    scanf("%d",&num2);

    add = num1 + num2;
    printf("\naddition is :%d",add);

    sub = num1 - num2;
    printf("\nsubstraction is :%d",sub);

    mul = num1 * num2 ;
    printf("\nmultiplication is :%d",mul);

    div = num1 / num2;
    printf("\ndivision is :%d",div);

    return 0;

} 