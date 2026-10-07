#include <stdio.h>

int main()
{
    int hours , current;
    hours = 0;

    printf("Enter current water level: ");
    scanf("%d" , &current);

    while(current != 1)
    {
        if(current % 2 == 0)
        {
            current = current/2;
        }
        else
        {
            current = 3*current + 1;
        }
        
        printf("Current level: %d\n" , current);
        hours += 1;
    }

    printf("Total Hours taken: %d" , hours);

}