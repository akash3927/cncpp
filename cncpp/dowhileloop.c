//a do while loop is smilar to a while loop except that a do while loop is guarenteed to execute at least 
//one time. the conditional expression appears at the end of the loop ,so the statements in the loop executed once before the condition is tested 
//do { statement }while condition
#include <stdio.h>
int main()
{
    int a = 1;

    do
    {
        printf("value of a: %d\n", a);
        a = a + 1;
    } while( a < 5 );
    return 0;
}//for true condition
