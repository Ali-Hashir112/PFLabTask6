#include <stdio.h>

int main()
{
	int i,price;
	price = 500;
	
	for(i = 1 ; i <= 10 ; i++)
	{
		printf("show %d price : %d\n" , i, price);
		price += 50;
	}
    return  0;
}
