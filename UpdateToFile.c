void ReadFromFile(char* FileName, char LicensePlate[][31], char VehicleType[][31], char EntryTime[][31], int* n) {
	FILE* f=fopen(FileName,"r");
	while ((fscanf(f,"%s%s%s",LicensePlate[*n],VehicleType[*n],EntryTime[*n]))!=EOF) {
		nameStr(LicensePlate[*n]);
		nameStr(VehicleType[*n]);
		nameStr(EntryTime[*n]);
		(*n)++;	
	}
	fclose(f);
}

void WriteToFile(char* FileName, char LicensePlate[][31], char VehicleType[][31], char EntryTime[][31], int n) {
	FILE* f=fopen(FileName,"w");
	for (int i = 0; i<n; i++) {
		fprintf(f, "%s %s %s",LicensePlate[i],VehicleType[i],EntryTime[i]);
		if (i!=(n-1)) fprintf(f,"\n");
	}
	fclose(f);
}

