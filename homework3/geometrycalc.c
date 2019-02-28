/*
 * geometrycalc.c
 *
 *  Created on: Feb 19, 2019
 *      Author: itopa
 */
#include <stdio.h>

void main()
{
	int choice = 0;

	while(choice != 1 && choice != 2 && choice != 3
			&& choice != 4)
	{
		printf("Geometry Calculator\n");
		printf("1. Calculate the area of a Circle\n");
		printf("2. Calculate the area of a Rectangle\n");
		printf("3. Calculate the area of a Triangle\n");
		printf("4. Quit\n");
		printf("Enter your choice(1-4):");
		fflush(stdout);
		scanf("%d", &choice);
		if(choice != 1 && choice != 2 && choice != 3
				&& choice != 4)
			printf("Not a valid input, please try again.\n");
	}

	if(choice == 1)
	{
		double radius = 0;
		while(radius <= 0)
		{
			printf("Enter the radius of the circle:");
			fflush(stdout);
			scanf(" %lf", &radius);
			if(radius <= 0)
				printf("Not a valid input, try again.\n");
		}
		double area = 3.14159 * radius * radius;
		printf("The area of the Circle is: %f\n", area);
	}

	else if(choice == 2)
	{
		double length = 0;
		double width = 0;
		while(length <= 0 || width <= 0)
		{
			printf("Enter the length of the rectanlge:");
			fflush(stdout);
			scanf("%lf", &length);
			printf("Enter the width of the rectangle:");
			fflush(stdout);
			scanf("%lf", &width);
			if(length <= 0 || width <= 0)
				printf("Not a valid input, try again.\n");
		}
		double area = length * width;
		printf("The area of the Rectangle is: %f\n", area);
	}

	else if(choice == 3)
	{
		double base = 0;
		double height = 0;
		while(base <= 0 || height <= 0)
		{
			printf("Enter the base of the triangle:");
			fflush(stdout);
			scanf("%lf", &base);
			printf("Enter the height of the triangle:");
			fflush(stdout);
			scanf("%lf", &height);
			if(base <= 0 || height <= 0)
				printf("Not a valid input, try again.\n");
		}
		double area = .5 * base * height;
		printf("Area of the Triangle is: %f\n", area);
	}

	else
		return;
}
