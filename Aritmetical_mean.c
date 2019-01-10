//Create a program that counts the arithmetic average of all the elements of the array
//Set the values of the elements of the array when it is declared.

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>


int main()
{
	int OurArray[] = { 5, 6, 84 , 19 };
	int QN = sizeof(OurArray) / sizeof(int);
	
	int Sum = 0;
	for (int i = 0; i < QN; i++)
	{
		Sum += OurArray[i];
	}
	float Arithmetical_Mean = (float)Sum / (float)QN;

	printf("Aritmetical mean of OurArray's numbers is %.2f\n", Arithmetical_Mean);

	system("Pause");
}
