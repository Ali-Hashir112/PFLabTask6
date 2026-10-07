#include <stdio.h>

int main()
{
    float temp[8], tmp;
    int coldest, hottest, hottest2;
    
    coldest = 0;
    hottest = 0;
    hottest2 = -1;

    for (int i = 0; i < 8; i++)
    {
        printf("Enter temperature for hour %d: ", i+1);
        scanf("%f" , &tmp);
        temp[i] = tmp;

        if(i == 0)
        {
            continue;
        }

        if(temp[i] > temp[hottest])
        {
            hottest2 = hottest;
            hottest = i;
        }
        else if(hottest2 == -1 || temp[i] > temp[hottest2])
        {
            hottest2 = i;
        }
        
        if(temp[i] < temp[coldest])
        {
            coldest = i;
        }

    }
    
    printf("The coldest temperature was : %g\n" , temp[coldest]);
    printf("The hottest temperature was : %g\n", temp[hottest]);
    printf("The second hottest temperature was : %g\n" , temp[hottest2]);
    

}