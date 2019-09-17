#include <stdio.h>

int main()
{
    int floorOn = 0;
    int floorsMoved = 0;
    int floorTo = 0;

    printf("Welcome! You are on floor %d.\n", floorOn);
    printf("Please select what floor you would like to be on (0-10).");
    scanf("%d", &floorTo); //saw sscanf from here https://www.asc.ohio-state.edu/physics/ntg/780/handouts/interactive_input_in_C.pdf
    //not sure if it's different from just scanf()
    //sscanf() is different from scanf() it seems.
    //scanf() brings up an error that I'm not sure is actually an error. The error suggestion says to use _CRT_SECURE_NO_WARNINGS which seems to be just more of a way to ignore the error, which I don't think you want.

    if(floorTo == 0 || floorTo == 1 || floorTo == 2 || floorTo == 3 || floorTo == 4 || floorTo == 5 || floorTo == 6 || floorTo == 7 || floorTo == 8 || floorTo == 9 || floorTo == 10)
    {
        floorsMoved = floorOn+floorTo;
        floorOn = floorTo;
        printf("You have moved to floor %d, and have moved %d floors.\n", floorOn, floorsMoved);
        printf("You have been to floors 0 and %d", floorOn);
    }
    else
    {
        printf("That is not a valid floor");
    }
}