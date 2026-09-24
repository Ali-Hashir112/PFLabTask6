#include <stdio.h>

int main()
{
    int member;
    float bill, discount;

    printf("Enter bill amount: ");
    scanf("%f" , &bill);

    printf("Enter membership status yes(1)/no(0) : ");
    scanf("%d" , &member);

    switch (member)
    {
    case 0:
        discount = (bill > 5000)?0.1 * bill:0;
        break;
    
    case 1:
        discount = (bill > 5000)?0.2 * bill:0.1 * bill;
        break;
    
    default:
        printf("Invalid choice");
    }

    printf("\nBill \n sub-total: %g \n discount: %g \n Final: %g" , bill, discount, bill-discount);
}