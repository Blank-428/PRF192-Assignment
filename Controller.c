#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Menu.c"
#include "VehicleMethod.h"
#include "UpdateToFile.c"

#define MAXN 100

int UserChoice, flag = 1, n = 0;
char fi[32] = "Vehicle_Input.txt";
char fo[32] = "Vehicle_Output.txt";
char LicensePlate[MAXN][31], VehicleType[MAXN][31], EntryTime[MAXN][31];

void InitFromFile(char* FileName) {
	n = 0; //init from begin
	ReadFromFile(FileName,LicensePlate, VehicleType, EntryTime, &n);
	WriteToFile(FileName,LicensePlate, VehicleType, EntryTime, n);
}

int main()
{
	do
	{
		UserChoice = getUserChoice();
		InitFromFile(fi);
  		switch (UserChoice)
  		{
  		case 1:
  			{
  				AddVehicle(LicensePlate, VehicleType, EntryTime, &n);
  				WriteToFile(fi,LicensePlate, VehicleType, EntryTime, n);
  				printf("Added Successfully\n\n");
  				break;
  			}
  		case 2:
  			{
  				SearchVehicle(LicensePlate, VehicleType, EntryTime, n);
  				printf("\n");
  				break;
  			}
  		case 3:
  			{
  				RemoveVehicle(LicensePlate, VehicleType, EntryTime, &n);
  				WriteToFile(fo, LicensePlate, VehicleType, EntryTime, n);
  				printf("Up to date list in file %s\n\n",fo);
  				break;
  			}
  		case 4:
  			{
  				WriteToFile(fo, LicensePlate, VehicleType, EntryTime, n);
  				printf("Wrote successfully in file %s!\n\n",fo);
  				break;
  			}
  		case 5:
  			{
				PrintVehicleByType(LicensePlate, VehicleType, EntryTime, n);
  				printf("Wrote successfully in file %s!\n\n",fo);
				break;
  			}
  		case 6:
  			{
  				flag = 0;
  				printf("Bye!\n");
  				break;
			}
  		default:
  			{
  				printf("Invalid operation\nEnter again\n");
  				break;
  			}
  		}
	} while (flag == 1);
	return 0;
}
