//simialar to break statement continue statement continue statement also neglect the statement after it in the loop and send conrol back to 
// to starting  point of loop for next iteration instea of outside the loop
#include <stdio.h>
int main()
{
    int a =   10;
    while ( a < 20 )
    {
        if ( a == 15 )
        {
            a = a + 1;
            continue;
            
        }
        printf("value of a: %d\n", a);
        a++;
    }
    return 0;
}