#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void CleanFile(char* FileName);
void PrintResultToFile(char* FileName, char LicensePlate[][31], char VehicleType[][31], char EntryTime[][31], int vt);

int Search(char license[31], char LicensePlate[][31], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (strcmp(license,LicensePlate[i]) == 0) {
			return i;
		}
	}
	return -1;
}

void SearchVehicle(char LicensePlate[][31], char VehicleType[][31], char EntryTime[][31], int n)
{
	if (n==0)
	{
		printf("The list is empty\n");
		return;
	}
	char license[31];
	printf("Enter license plate number to check: ");
	scanf("%[^\n]",&license);
	nameStr(license);
	fflush(stdin);
	int vt = Search(license, LicensePlate, n);
	if ((0<=vt) && (vt <= n))
	{
		char fo[32] = "Vehicle_Output.txt";
		printf("Result written in file %s!\n",fo);
		PrintResultToFile(fo,LicensePlate,VehicleType,EntryTime,vt);
	} else
	{
		printf("Not found\n");
	} 
}
