#include <stdio.h>

int main()
{
	int hard, tensile;
	float carbon;

	printf("Input Hardness value:\n");
	scanf("%d", &hard);

	printf("Input Carbon content value:\n");
	scanf("%f", &carbon);

	printf("Input Tensile strength value:\n");
	scanf("%d", &tensile);

	if (hard > 50 && carbon < 0.7 && tensile > 5600)
	{
		printf("Grade is 10\n");
	}
	else if (hard > 50 && carbon < 0.7 && tensile < 5600  )
	{
		printf("Grade is 9\n");
	}
	else if (carbon < 0.7 && tensile > 5600 && hard < 50)
	{
		printf("Grade is 8\n");
	}
	else if (hard > 50 && tensile > 5600 && carbon > 0.7)
	{
		printf("Grade is 7\n");
	}
	else if (hard > 50 && carbon > 0.7 && tensile < 5600)
	{
		printf("Grade is 6\n");
	}
	else if (hard < 50 && carbon < 0.7 && tensile < 5600)
	{
		printf("Grade is 6\n");
	}
	else if (hard < 50 && carbon > 0.7 && tensile > 5600)
	{
		printf("Grade is 6\n");
	}
	else if (hard < 50 && carbon > 0.7 && tensile < 5600)
	{
		printf("Grade is 5\n");
	}

	return (0);
	
}
