#include <stdio.h>

void main() 
{
    int count = 0, cur, prev;
    scanf("%d", &prev);
    scanf("%d", &cur);
    while (cur != 0) 
    {
        if (cur == prev + 3) 
        {
            count++;
        }
        prev = cur;
        scanf("%d", &cur);
    }
    printf("Всего элементов: %d", count);
}