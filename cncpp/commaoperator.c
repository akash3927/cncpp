//the comma operator has left to right associativity. two expressions seprated by comma are evaluated left to right.
// the left operand is always evaluated ,and all side effects are completed before the right operand is evaluated 
#include <stdio.h>
int main()
{
int i = 10, b = 20, c = 30;
i=b,c;
printf("%i\n",i);

i=(b,c);
printf("%i\n",i);
return 0;
}