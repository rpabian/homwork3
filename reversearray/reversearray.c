/*
 * reversearray.c
 *
 *  Created on: Feb 19, 2019
 *      Author: itopa
 */
#include <stdio.h>

int * reverseArray(int array[], int size)
{
	int counter = 0;
	static int array2[10];
	for(int i = size-1; i >= 0; i--)
	{
		array2[counter] = array[i];
		counter++;
	}
	return array2;
}

int main()
{
	int array1[10];
	for(int i = 0; i < 10; i++)
		array1[i] = (i + 1);

	printf("Normal array: ");
	for(int i = 0; i < 10; i++)
		printf("%d, ", array1[i]);
	printf("\n");

	int *pointy;
	pointy = reverseArray(array1, 10);
	printf("New Array: ");
	for(int i = 0; i < 10; i++)
		printf("%d, ", *(pointy + i));
	printf("\n");
	return 0;
}
