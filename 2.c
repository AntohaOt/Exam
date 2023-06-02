#include <stdio.h>

float sumFoo(int n) {
    float sum = 0;
    for (int i = 1; i <= n; i++) 
    {
        sum += 1.0/(i*i);
    }
    return sum;
}

void main() 
{
    int n = 10;
    printf("%f", sumFoo(n));
}