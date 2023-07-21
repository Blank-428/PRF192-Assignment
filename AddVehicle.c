#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "StringFormat.c"

const int max = 100;

void getData(char* buffer)
{
	scanf("%[^\n]",buffer);
	fflush(stdin);
	nameStr(buffer);
}

void AddVehicle(char LicensePlate[][31], char VehicleType[][31], char EntryTime[][31], int* n)
{
	if ((*n)==max)
	{
		printf("The list is full\n");
		return;
	}
	int temp = *n;
	printf("Enter License Plate Number: ");
	getData(LicensePlate[temp]);
	printf("Enter Vehicle Type: ");
	getData(VehicleType[temp]);
	printf("Enter Entry Time (hh:mm): ");
	getData(EntryTime[temp]);
	*n = temp + 1;
}
