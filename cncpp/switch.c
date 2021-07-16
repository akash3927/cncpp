//switch statement are also used when we need our program to make a certain decision baased on condition and then execute accordingly
#include <stdio.h>
int main()
{
    int input;
    printf("1.playing game\n");
    printf("2.load game\n");
    printf("3.play multiplayer game\n ");
    printf("4.exit\n");
    printf("selection: ");
    scanf("%d",&input);
    printf("\n");

    switch( input )
    {
        case 1:
             printf("play game called");
            break;
        case 2:
             printf("load game called ");
            break;

        case 3:
             printf("play multiplayer game called");
             break;

        case 4:
             printf("thank for playing !\n");
             break;

        default:
             printf("bad input,quitting !\n");
            break;
    }
    return 0;

}