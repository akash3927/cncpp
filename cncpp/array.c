//array is ccollection of data types for example array of int type data or float type data . important thing to note is array  can only have data of same only 
#include <stdio.h>
int main()
{
    int a[10]={2,3,4,5,6,7,8,9,10,11};
    
    int i=0;
    int lengthofarray = sizeof(a)/sizeof(int);
    printf("length of array is : %d\n",lengthofarray);

    for (i = 0; i < lengthofarray; i++ )    
    {
        printf("array element at index [%d]= %d\n ",i,a[i]);
    }
    return 0;


}