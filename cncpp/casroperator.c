//cast operator can be uded to explicity convert the expression to a differnt data type
//1.implisit type(the auto conversion from automatically)
//2.explicit type(the conversion from program)
#include <stdio.h>
int main()
{
    int i=10;
    float f=3.14;
    printf("the integer is %d\n", i);
    printf("the float no. is %f\n",f);
    

    //implicit conversion
    f=i;
    printf("the implicit conversion integer to float is: %f\n ",f);
    

    //explicit conversion
    i= (int) f;
    printf("the explicit conversion float to int is:%d\n",i);
    return 0;

}
