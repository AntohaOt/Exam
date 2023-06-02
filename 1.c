#include <stdio.h>
#include <stdlib.h>

struct Coord {
    int x;
    int y;
};

int canGet(struct Coord start, struct Coord finish) 
    {
    int X_delt = abs(finish.x - start.x);
    int Y_delt = abs(finish.y - start.y);
    if (X_delt == Y_delt) 
    {
        return 1;
    } 
    else 
    {
        return 0;
    }
}

void main() 
{
    struct Coord start = {1, 4};
    struct Coord finish = {2, 5};
    int result = canGet(start, finish);
    printf("%d", result);
}