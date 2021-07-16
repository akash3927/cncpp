//in ternary operaor if the statement is true The first statement is evaluated else the second statement is evaluated
#include<stdio.h>
int main()
{
    int a=5;
    char c;

    c = (a<10) ? 's': 'l';
    printf("c=%c",c);

    c=(a<10) ? ((a<5) ? 's':'l') : ('l');
    printf("\nc = %c",c);

    return 0;
}