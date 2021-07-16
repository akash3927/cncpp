#include <stdio.h>
int sum(int num1, int num2);

int main ()
{
    int a = 10;
    int b = 10;
    int s;

    s = sum(a, b);

    printf("sum of the numbers is: %d\n",s );

    return 0;


}      

int sum(int num1, int num2)
{
    int result;

    result = num1 + num2;

    return result;
}