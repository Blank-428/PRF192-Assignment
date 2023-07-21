#include <stdio.h>
#include <stdlib.h>

int getUserChoice()
{
	int UserChoice;
	printf("1-Add a Vehicle\n");
	printf("2-Search a Vehicle\n");
	printf("3-Remove a Vehicle\n");
	printf("4-Display a currently vehicle list\n");
	printf("5-Display a vehicle list by vehicle type\n");
	printf("6-Quit\n");
	printf("Select an operation: ");
	scanf("%d",&UserChoice);
	fflush(stdin);
	return UserChoice;
}
