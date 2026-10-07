#include <stdio.h>

int main()
{
    int pin, total, current;
    total = 0;

    printf("Enter the bank pin: ");
    scanf("%d", &pin);

    while (pin != 0)
    {
        current = pin % 10;
        total += current;
        printf("%d" , current);
        pin = pin/10;
    }
    printf("\nChecksum:  %d" , total);
    
}
