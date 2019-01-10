//Create a program that displays the sum of squares of numbers of a simple arithmetic sequence 1, 2, 3, ..., N.
//In this case, the value of N must be entered from the console.
//And the calculation of the square of the number must occur in a separate function.
//Those means you need to calculate the sum of 1 ^ 2 + 2 ^ 2 + 3 ^ 2 + ... N ^ 2 and print the result

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define AM 10000

int SumSqNumbers(int ArraySSN[], int ArElems)
{
	int sum = 0;
	for (int i = 1; i <= ArElems; i++)
	{
		sum = sum + (int)pow(ArraySSN[i], 2);
	}
	return sum;
}


int main()
{
	printf("Insert the number and press Enter:  ");
	int Number;
	scanf("%d", &Number);
	printf("\n");

	printf("The number you've inserted is %d\n", Number);
	printf("The Array is formed from 1 to %d\n", Number);
	int Array_A[AM] = { 0 };
	int i = 1;
	while (i<=Number)
	{
		Array_A[i] = i;
		printf("%3d ", Array_A[i]);
		i++;
	}
	printf("\n");
	
	printf("Sum of Array_A elements raised to power 2 is %d\n", SumSqNumbers(Array_A,Number));

	system("Pause");

}
