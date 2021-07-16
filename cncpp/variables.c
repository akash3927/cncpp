/*local variables*/
#include<stdio.h>
int main()
{
int x,y,z;
x=1;
y=2;
z=x+y;
printf("x=%d, y=%d, z=%d",x,y,z);
return 0;
}
/*global variable*/
#include<stdio.h>
int z;
int main()
{
int x,y;
x=1;
y=2;
z=x+y;
printf("x=%d, y=%d, z=%d",x,y,z);
return 0;
}