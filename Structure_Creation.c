// Create an arsenal of weapon

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

typedef struct WEAPONS
{
	char Title[30];
	int AmmoCapacity;
	int Range;
	double AtkPower;
	double Rapidity;
	double Weight;
}Arsenal;

void PrintArsenalInFile(FILE*file, Arsenal item)
{

	fprintf(file, "%s %d %d %.1f %.1f %.1f\n", item.Title, item.AmmoCapacity, item.Range, item.AtkPower, item.Rapidity, item.Weight);

}

void PrintArsenalInConsole(Arsenal item)
{
	printf("Title: %s AmmoCapacity: %d Range: %d AtkPower: %.1f Rapidity: %.1f Weight: %.1f\n",
		item.Title, item.AmmoCapacity, item.Range, item.AtkPower, item.Rapidity, item.Weight);
}


int main()
{
	setlocale(LC_ALL, "RU");

	Arsenal WeaponType1;
	strcpy(WeaponType1.Title, "Pistol");
	WeaponType1.AmmoCapacity = 15;
	WeaponType1.Range = 50;
	WeaponType1.AtkPower = 30.6;
	WeaponType1.Rapidity = 90.4;
	WeaponType1.Weight = 1.6;

	Arsenal WeaponType2;

	strcpy(WeaponType2.Title, "Assault_Riffle");
	WeaponType2.AmmoCapacity = 30;
	WeaponType2.Range = 300;
	WeaponType2.AtkPower = 156.7;
	WeaponType2.Rapidity = 600.3;
	WeaponType2.Weight = 5.7;

	Arsenal WeaponType3;

	strcpy(WeaponType3.Title, "Shotgun");
	WeaponType3.AmmoCapacity = 7;
	WeaponType3.Range = 60;
	WeaponType3.AtkPower = 356.8;
	WeaponType3.Rapidity = 34.5;
	WeaponType3.Weight = 7.6;

	Arsenal WeaponType4;

	strcpy(WeaponType4.Title, "LR_Riffle");
	WeaponType4.AmmoCapacity = 12;
	WeaponType4.Range = 1500;
	WeaponType4.AtkPower = 581.5;
	WeaponType4.Rapidity = 24.3;
	WeaponType4.Weight = 15.4;

	FILE* ArsenalFile = fopen("WeaponsArsenal.txt", "w");

	PrintArsenalInFile(ArsenalFile, WeaponType1);
	PrintArsenalInFile(ArsenalFile, WeaponType2);
	PrintArsenalInFile(ArsenalFile, WeaponType3);
	PrintArsenalInFile(ArsenalFile, WeaponType4);

	PrintArsenalInConsole(WeaponType1);
	PrintArsenalInConsole(WeaponType2);
	PrintArsenalInConsole(WeaponType3);
	PrintArsenalInConsole(WeaponType4);

	fclose(ArsenalFile);
	system("Pause");

}
