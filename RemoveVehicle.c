#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Search(char license[31], char LicensePlate[][31], int n);

void RemoveVehicle(char LicensePlate[][31], char VehicleType[][31], char EntryTime[][31], int* n)
{
	if ((*n)==0)
	{
		printf("The list is empty\n");
		return;
	}
	char license[31];
	printf("Enter license plate number to remove: ");
	scanf("%[^\n]",&license);
	nameStr(license);
	fflush(stdin);
	int vt = Search(license,LicensePlate, *n);
	if ((0<=vt) && (vt <= (*n)))
	{
		for (int i = vt; i < (*n)-1; i++)
		{
			strcpy(LicensePlate[i],LicensePlate[i+1]);
			strcpy(VehicleType[i],VehicleType[i+1]);
			strcpy(EntryTime[i],EntryTime[i+1]);
		}
		(*n)--;
		printf("Removed\n");
	} else
	{
		printf("Not found\n");
	}

}
