#include <stdio.h>

int main()
{
    int marks;
    
    do
    {
        
        printf("Enter Marks: ");
        scanf("%d" , &marks);

    } while (marks > 100 || marks < 0);

    if (marks >= 50)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }
    
    
}