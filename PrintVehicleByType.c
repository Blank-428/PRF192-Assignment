#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void CleanFile(char* FileName);

void PrintVehicleByType(char LicensePlate[][31], char VehicleType[][31], char EntryTime[][31], int n)
{
	if (n==0)
	{
		printf("The list is empty\n");
		return;
	}
	int check = 0;
	char fo[32] = "Vehicle_Output.txt";
	FILE* f=fopen(fo,"a");
	CleanFile(fo);
	
	char type[31];
	printf("Enter type of vehicle: ");
	scanf("%[^\n]",&type);
	nameStr(type);
	fflush(stdin);
	
	for (int i = 0; i < n; i++)
	{
		if (strcmp(type,VehicleType[i]) == 0) {
			check = 1;
			fprintf(f,"%s %s %s\n",LicensePlate[i],VehicleType[i],EntryTime[i]);
		}
	}
	
	fclose(f);
	if (check == 0)
	{
		printf("Not found\n");
	}
}
