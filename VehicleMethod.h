#include "AddVehicle.c"
#include "RemoveVehicle.c"
#include "SearchVehicle.c"
#include "PrintVehicleByType.c"

void AddVehicle(char LicensePlate[][31], char VehicleType[][31], char EntryTime[][31], int* n);
void RemoveVehicle(char LicensePlate[][31], char VehicleType[][31], char EntryTime[][31], int* n);
void SearchVehicle(char LicensePlate[][31], char VehicleType[][31], char EntryTime[][31], int n);
void PrintVehicleByType(char LicensePlate[][31], char VehicleType[][31], char EntryTime[][31], int n);
