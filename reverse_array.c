//There are two arrays of the same length. Set arbitrary values for the elements of the first array.
//Create a program that fills the second array with the values from the first in the reverse order.
//In addition, each element of the new array will be raised to the power of 3

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define N 5

int main()
{
	int Array_A[N] = { 2, 3, 4, 5, 6 };
	int Array_B[N] = { 0 };
	
	for (int i = 0; i < N; i++)
		Array_B[i] = (int)pow((Array_A[N -1- i]), 3);
	
	printf("Array_B numbers raised to power 3:  ");
	for (int i = 0; i < N; i++)
		printf("%3d  ", Array_B[i]);

	printf("\n");
	system("pause");

}
