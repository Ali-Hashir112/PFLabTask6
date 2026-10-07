#include <stdio.h>

int main()
{
	int years;
	float sum, factor;
	
	factor = 1.1;
	
	printf("Enter sum and years:\n");
	scanf("%f \n%d", &sum, &years);
	
	for(int i = 0 ; i < years ; i++)
	{
		sum = sum * factor;
	}
	
	printf("%g" , sum);
	
}
