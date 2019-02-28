/*
 * populationpredict.c
 *
 *  Created on: Feb 19, 2019
 *      Author: itopa
 */
#include <stdio.h>

void main()
{
	printf("Population Predictor\n");
	double initialPop = -1;
	while(initialPop < 0)
	{
		printf("Enter the initial population:");
		fflush(stdout);
		scanf(" %lf", &initialPop);
		if(initialPop < 0)
			printf("Not a valid input, try again.\n");
	}
	double birthRate = -1;
	while(birthRate < 0)
	{
		printf("Enter the annual birth rate:");
		fflush(stdout);
		scanf(" %lf", &birthRate);
		if(birthRate < 0)
			printf("Not a valid input, try again.\n");
	}
	double deathRate = -1;
	while(deathRate < 0)
	{
		printf("Enter the annual death rate:");
		fflush(stdout);
		scanf(" %lf", &deathRate);
		if(deathRate < 0)
			printf("Not a valid input, try again.\n");
	}
	int years = 0;
	while(years <= 0)
	{
		printf("Enter the amount of years to display the prediction for:");
		fflush(stdout);
		scanf(" %d", &years);
		if(years <= 0)
			printf("Not a valid input, try again.\n");
	}
	for(int i = 1; i <= years; i++)
	{
		double newPop;
		newPop = initialPop + (birthRate*initialPop) - (deathRate*initialPop);
		printf("Population for year %d is: %lf\n", i, newPop);
		initialPop = newPop;
	}
}

