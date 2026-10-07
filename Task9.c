#include <stdio.h>

int main()
{
    int choice;
    int stock[10] = {20,30,15,16,17,30,80,85,13,22};
    
    for (int i = 9; i >= 0; i--)
    {
        printf("%d\n" , stock[i]);
    }

    printf("Enter stock amount to be found: ");
    scanf("%d" , &choice);

    for( int i = 0; i < 10; i++)
    {
        if (stock[i] == choice)
        {
            printf("Stock found at index %d" , i);
            break;
        }
        else if(i == 9)
        {
            printf("Doesnt Exist");
        }
        
    }
    
    
}