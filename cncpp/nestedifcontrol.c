#include <stdio.h>
int main()
{
    int numb1 , numb2;
    printf("enter two integers :");
    scanf("%d %d",&numb1,&numb2 );
    if (numb1==numb2)
    {
        printf("\nresult: %d =%d",numb1,numb2);

    }
    else
    {
        if(numb1>numb2)
        {
            printf("\nresult: %d > %d",numb1, numb2);
        }
        else
        {
            printf("\nresult: %d > %d",numb2, numb1);

        }
    }
return 0;

    
}