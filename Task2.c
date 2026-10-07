#include <stdio.h>

int main()
{
	int students, total, marks;
	float average;
	
	total = 0;
	
	printf("Enter number of students: ");
	scanf("%d" , &students);
	
	for(int i = 1 ; i <= students ; i++)
	{
		printf("Enter marks of student %d: ", i);
		scanf("%d" , &marks);
		
		total += marks;
	}
	
	average = total / students;
	
	printf("Total : %d \nAverage : %g" , total, average);

	return 0;
}
