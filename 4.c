#include <stdio.h>
#include <string.h>

int toDecimal(char str[]) 
{
    int len = strlen(str);
    int dec = 0;
    int base = 1;
    for (int i = len - 1; i >= 0; i--) 
    {
        if (str[i] == '1') 
        {
            dec += base;
        }
        base *= 2;
    }
    return dec;
}

void main() 
{
    char bin[] = "11001";
    int dec = toDecimal(bin);
    printf("Введенное число в десятичной системе: %d", dec);
}