#include <stdio.h>

int main()
{
    int amount, shipping ,distance, total;

    printf("Enter shopping amount: ");
    scanf("%d" , &amount);

    printf("Enter distance: ");
    scanf("%d" , &distance);

    if(amount > 0 || distance > 0)
    {
        if(amount >= 5000)
        {
            shipping = 0;
        }
        else
        {
            if(distance <= 5)
            {
                shipping = 150;
            }
            else if(distance >= 6 && distance <= 10)
            {
                shipping = 250;
            }
            else if(distance >= 11 && distance <= 20)
            {
                shipping = 400;
            }
            else
            {
                shipping = 600;
            }
        }
        
        total = amount + shipping;

        printf("Shopping amount: %d \nDistance: %d \nDelivery Fees: %d \nTotal: %d" , amount, distance, shipping, total);

        
    }
    else
    {
        printf("Invalid Input");
    }
    


}