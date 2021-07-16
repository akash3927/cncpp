//goto statement transfer the control to the label specified with the goto statement 
#include <stdio.h>
int main()
{
    int i,j;
    for ( i = 0 ; i < 10; i++ )
    {
        printf("outer loop executing.i = %d\n", i);
        for ( j = 0; j < 3; j++ )
        {
            printf("inner loop executing.j = %d\n", j );
            if ( i == 5)
            {
                goto stop;
            }
        }
    }
    printf("loop exited. i = %d\n ", i );

    stop:
    printf("jumped to stop. i = %d\n", i );

}